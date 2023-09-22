#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class MemoryCard
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* videocard, MemoryCard* memorycard)
	{
		this->cpu = cpu;
		this->vc = videocard;
		this->mem = memorycard;
	}

	~Computer()
	{
		if (this->cpu != NULL)
		{
			delete this->cpu;
			this->cpu = NULL;
		}

		if (this->vc != NULL)
		{
			delete this->vc;
			this->vc = NULL;
		}

		if (this->mem != NULL)
		{
			delete this->mem;
			this->mem = NULL;
		}
	}

	void function()
	{
		cpu->calculate();
		vc->display();
		mem->storage();
	}

private:
	CPU* cpu;
	VideoCard* vc;
	MemoryCard* mem;
};

class IntelCPU : public CPU
{
public:
	void calculate()
	{
		cout << "Intel CPU" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "Lenovo CPU" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Intel Video Card" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo Video Card" << endl;
	}
};

class IntelMemory :public MemoryCard
{
public:
	void storage()
	{
		cout << "Intel Memory" << endl;
	}
};

class LenovoMemory :public MemoryCard
{
public:
	void storage()
	{
		cout << "Lenovo Memory Card" << endl;
	}
};

void test01()
{
	Computer* computer1 = new Computer(new IntelCPU, new IntelVideoCard, new IntelMemory);
	computer1->function();
	delete computer1;
	computer1 = NULL;

	Computer* computer2 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);
	computer2->function();
	delete computer2;
	computer2 = NULL;
}

int main()
{
	test01();

	return 0;
}