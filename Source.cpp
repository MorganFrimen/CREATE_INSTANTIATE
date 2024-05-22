#include <iostream>

using String = std::string;

class Entity
{
private:
	String m_Name;

public:
	Entity() : m_Name("Uuknow") {}
	Entity(const String& name) : m_Name(name){}

	const String& GetName()const { return m_Name; }
};


int main()
{
	int a{ 2 };
	int* b = new int[50]; // 200 bytes

	Entity* e = new Entity();
	delete e;
	delete[] b;

	/*Entity* e;
	{
		Entity* entity = new Entity ("hello");

		e = entity;
		std::cout << entity->GetName() << std::endl;

		delete e;
	}*/
	std::cin.get();
}