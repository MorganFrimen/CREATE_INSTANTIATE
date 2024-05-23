#include <iostream>

class Entity
{
private:
	std::string m_Name;
	int m_Age;

public:
	explicit Entity(const std::string& name)
		: m_Name(name), m_Age(-1) {}
	explicit Entity(int age)
		: m_Name("Uuknow"), m_Age(age) {}

	const std::string& GetName()const { return m_Name; }
};

void PrintEntity(const Entity& entity)
{
	// Print
}

int main()
{
	Entity a { "Hello" };
	Entity b { 22 };

	/*
	int a{ 2 };
	int* b = new int[50]; // 200 bytes

	Entity* e = new Entity();
	delete e;
	delete[] b;
	*/

	/*Entity* e;
	{
		Entity* entity = new Entity ("hello");

		e = entity;
		std::cout << entity->GetName() << std::endl;

		delete e;
	}*/

	std::cin.get();
}