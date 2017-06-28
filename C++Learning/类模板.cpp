#include<iostream>
#include<string>
using namespace std;

template<typename T1, typename T2>
class Person {
public:
	Person(T1 t1, T2 t2)
		:name(t1),
		age(t2)
	{
		//¹¹Ôìº¯Êý
	}
	void print()
	{
		cout << "name : " << name << "   " << "age : " << age << endl;
	}
private:
	T1 name;
	T2 age;
};
/*
int main()
{
	Person<string, int> person("Tom", 21);
	person.print();

}
*/