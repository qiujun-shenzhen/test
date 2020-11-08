#include <iostream>

using namespace std;

class HelloWorld{
public:
	void print(){
		cout<<"1"<<endl;
		cout<<"Hello World"<<endl;
		cout<<"2"<<endl;
		cout<<"Hello World"<<endl;
	}
	
};

void main()
{
	HelloWorld test;
	test.print();
}
