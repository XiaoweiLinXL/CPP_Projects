#include <iostream>
#include <map>
#include <vector>
#include <random>
using namespace std;

void test01()
{
	std::random_device rd;
	std::mt19937 gen(rd());

	vector<pair<char, int>> employee_vector;
	for (int i = 0; i < 10; i++)
	{
		char name = (char)('A' + i);
		int min = 0;
		int max = 100;

		uniform_int_distribution<> distrib(min, max);
		int randomSalary = distrib(gen);

		employee_vector.push_back({ name, randomSalary });
	}


	multimap<int, pair<char, int>> employeeMap;
	for (int i = 0; i < 10; i++)
	{
		int min = 1;
		int max = 3;

		uniform_int_distribution<> distrib(min, max);
		int randomDepartment = distrib(gen);

		employeeMap.insert({ randomDepartment, employee_vector[i] });
	}

	auto it_planning = employeeMap.find(1);

	auto it_art = employeeMap.find(2);

	auto it_rd = employeeMap.find(3);
	

	cout << "Planning" << endl;
	for (auto it = it_planning; it != it_art; it++)
	{
		cout << "Dept: " << it->first << " Name: " << it->second.first << " Salary: " << it->second.second << endl;
	}

	cout << "Art" << endl;
	for (auto it = it_art; it != it_rd; it++)
	{
		cout << "Dept: " << it->first << " Name: " << it->second.first << " Salary: " << it->second.second << endl;
	}

	cout << "R&D" << endl;
	for (auto it = it_rd; it != employeeMap.end(); it++)
	{
		cout << "Dept: " << it->first << " Name: " << it->second.first << " Salary: " << it->second.second << endl;
	}

}

int main()
{
	test01();

	//cout << (char)('A' + 1) << endl;

	return 0;
}