#include <iostream>

template<class T>
class Shared_ptr
{
public:
	Shared_ptr() // default constructor
	{
		this->m_Count = new int(0);
		this->m_Shared_ptr = nullptr;
	}

	Shared_ptr(T* raw_ptr) // constructor with parameters
	{
		this->m_Count = new int(1);
		this->m_Shared_ptr = raw_ptr;
	}

	Shared_ptr(const Shared_ptr<T>& other) // copy constructor
	{
		this->m_Count = other.m_Count;
		if (this->m_Count)
		{
			(*this->m_Count)++;
		}
		this->m_Shared_ptr = other.m_Shared_ptr;
	}

	Shared_ptr& operator=(const Shared_ptr& other) // assignment operator
	{
		if (this != &other) // avoid self assignment
		{
			decrementcounter();
			this->m_Shared_ptr = other.m_Shared_ptr;
			this->m_Count = other.m_Count;
			(*this->m_Count)++;
		}
		return *this;
	}

	Shared_ptr(Shared_ptr&& other) // move constructor
	{
		this->m_Count = other.m_Count;
		this->m_Shared_ptr = other.m_Shared_ptr;
		other.m_Count = nullptr;
		other.m_Shared_ptr = nullptr;
	}



	

	~Shared_ptr()
	{
		decrementcounter();
	}

	T* get()
	{
		return this->m_Shared_ptr;
	}

	int get_count()
	{
		return (*(this->m_Count));
	}

private:
	int* m_Count;

	T* m_Shared_ptr;

	void incrementcounter()
	{
		if (this->m_Count)
		{
			(*this->m_Count)++;
		}
	}

	void decrementcounter()
	{
		if (this->m_Count)
		{
			(*this->m_Count)--;
		}

		std::cout << "instance destroyed" << std::endl;

		if (this->m_Count && (*this->m_Count) == 0)
		{

			if (this->m_Shared_ptr)
			{
				delete this->m_Shared_ptr;
			}
			delete this->m_Count;
			this->m_Count = nullptr;
			std::cout << "resource cleaned" << std::endl;

		}
		this->m_Shared_ptr = nullptr;


	}

};

int main()
{
	int* raw_ptr_int = new int(10);

	Shared_ptr<int> shared_ptr_int_1(raw_ptr_int);

	std::cout << *(shared_ptr_int_1.get()) << std::endl;

	std::cout << shared_ptr_int_1.get_count() << std::endl;

	Shared_ptr<int> shared_ptr_int_2(shared_ptr_int_1);

	std::cout << *(shared_ptr_int_2.get()) << std::endl;

	std::cout << shared_ptr_int_2.get_count() << std::endl;

	std::cout << shared_ptr_int_1.get_count() << std::endl;

	int* raw_ptr_int_2 = new int(20);

	Shared_ptr<int> shared_ptr_int_3(raw_ptr_int_2);

	std::cout << shared_ptr_int_3.get_count() << std::endl;

	shared_ptr_int_3 = shared_ptr_int_2;

	std::cout << shared_ptr_int_3.get_count() << std::endl;

	Shared_ptr<int> shared_ptr_int_4(std::move(shared_ptr_int_3));

	return 0;
}