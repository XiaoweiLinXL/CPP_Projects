//#include <iostream>
//
//class CPU
//{
//public:
//	virtual void compute() = 0;
//};
//
//class IntelCPU :public CPU
//{
//public:
//	void compute()
//	{
//		std::cout << "Intel CPU" << std::endl;
//	}
//};
//
//class AMDCPU :public CPU
//{
//public:
//	void compute()
//	{
//		std::cout << "AMD CPU" << std::endl;
//	}
//};
//
//class GraphicCard
//{
//public:
//	virtual void display() = 0;
//};
//
//class ASUSGraphicCard :public GraphicCard
//{
//public:
//	void display()
//	{
//		std::cout << "ASUS Graphic Card" << std::endl;
//	}
//};
//
//class MSIGraphicCard :public GraphicCard
//{
//public:
//	void display()
//	{
//		std::cout << "MSI Graphic Card" << std::endl;
//	}
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
//class WDMemory :public Memory
//{
//public:
//	void storage()
//	{
//		std::cout << "WD Memory" << std::endl;
//	}
//};
//
//class SAMSUNGMemory :public Memory
//{
//public:
//	void storage()
//	{
//		std::cout << "SAMSUNG Memory" << std::endl;
//	}
//};
//
//class Computer
//{
//public:
//	Computer(CPU* cpu, GraphicCard* graphiccard, Memory* memory)
//	{
//		m_cpu = cpu;
//		m_graphiccard = graphiccard;
//		m_memory = memory;
//	}
//
//	void doWork()
//	{
//		m_cpu->compute();
//		m_graphiccard->display();
//		m_memory->storage();
//	}
//
//	~Computer()
//	{
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_graphiccard != NULL)
//		{
//			delete m_graphiccard;
//			m_graphiccard = NULL;
//		}
//
//		if (m_memory != NULL)
//		{
//			delete m_memory;
//			m_memory = NULL;
//		}
//	}
//
//	CPU* m_cpu;
//	GraphicCard* m_graphiccard;
//	Memory* m_memory;
//};
//
//void test01()
//{
//	CPU* cpu = new IntelCPU();
//	GraphicCard* graphiccard = new ASUSGraphicCard();
//	Memory* memory = new SAMSUNGMemory();
//
//	Computer* computer1 = new Computer(cpu, graphiccard, memory);
//	computer1->doWork();
//	delete computer1;
//	
//	std::cout << "----------------------" << std::endl;
//
//	Computer computer2 = Computer(new AMDCPU(), new MSIGraphicCard(), new SAMSUNGMemory());
//	computer2.doWork();
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}