#include<iostream>
using namespace std;
class Animal
{
public:
	virtual void speak()
	{
		cout << "animal language!" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "cat miaomiao" << endl;
	}
};
int main()
{
	Cat c;
	Animal* p = &c;
	p->speak();
	c.Animal::speak();
	Animal* a = new Cat;
	a->speak();
	c.speak();
	Animal animal;
	animal.speak();
	return 0;

}