#include<iostream>
using namespace std;

template <typename T1, typename T2> 
void print(T1 t1, T2 t2)
{
	cout << "t1 = " << t1 << endl;
	cout << "t2 = " << t2 << endl;
}

int main()
{
	print("Hello!","Microsoft Visual Studio!");
}
