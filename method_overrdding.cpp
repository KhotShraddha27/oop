#include<iostream>
using namespace std;
class parent
{	public:
	void show()
	{	cout<<"\nIn parent class.";
	}
};

class child: public parent
{	public:
	void show()
	{	cout<<"\nIn child class.";
	}
};

int main()
{	parent p;
	p.show();
	
	child c;
	c.show();
	return 0;	
}
