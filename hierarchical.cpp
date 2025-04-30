#include<iostream>
using namespace std;

class A{
	public :
		int a,b;
		void get(){
			cout<<"Enter two numbers : ";
			cin>>a>>b;
		}
};

class B : public A{
	public :
		void sum()
		{
			cout<<"Sum : "<<a+b<<endl;
		}
};

class C : public A{
	public :
		void sub()
		{
			cout<<"Sub : "<<a-b<<endl;
		}
};

int main()
{
	B b;
	b.get();
	b.sum();
	
	C c;
	c.get();
	c.sub();
	
}


