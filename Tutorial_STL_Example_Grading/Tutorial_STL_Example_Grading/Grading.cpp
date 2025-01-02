#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

class Player
{
public:
	deque<int> score_collection;
	int final_score;
	string m_Name;

	Player(string name, int score)
	{
		this->m_Name = name;
		this->final_score = score;
	}

	void scoring()
	{
		for (int i = 0; i < 10; i++)
		{
			cout << "Score " << i+1 << ": ";
			int score;
			cin >> score;
			this->score_collection.push_back(score);
		}
	}

	void process_score()
	{
		sort(this->score_collection.begin(), this->score_collection.end()); // Sort the score in an ascending order
		this->score_collection.pop_front(); // Delete the least score
		this->score_collection.pop_back(); // Delete the highest score
		
		// Compute the average score
		for (unsigned int i = 0; i < this->score_collection.size(); i++)
		{
			this->final_score += score_collection[i];
		}
		this->final_score /= this->score_collection.size();
	}
};

void buildPlayerList(vector<Player>& v)
{
	string name_seed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "Player ";
		name += name_seed[i];
		Player p(name, 0);
		v.push_back(p);
	}
}

template<class T>
void judgeScoring(T& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << "Score for " << v[i].m_Name << endl;
		v[i].scoring();
	}
}

template<class T>
void computeFinalScore(T& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		v[i].process_score();
	}
}

template<class T>
void outputScore(T& v)
{
	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << "Final score for " << v[i].m_Name << endl;
		cout << v[i].final_score << endl;
	}
}

int main()
{
	vector<Player> v;

	buildPlayerList(v);

	judgeScoring(v);

	computeFinalScore(v);

	outputScore(v);

	return 0;
}