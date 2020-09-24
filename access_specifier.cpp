#include <iostream>
using namespace std;

class Example
{
	int a;//it is a private member
	public:
		//function declarations
		void accept();
		void display();
	private:
		int b;
	protected:
		int c;		
};
//function definitions
void Example::accept()
{
	cout<<"Enter three values\n";
	cin>>a>>b>>c;
}
void Example::display()
{
	cout<<"a="<<a<<" b="<<b<<" c="<<c<<"\n";
}
int main()
{
	//create object
	Example Ex;
	Ex.accept();
	Ex.display();
	return 0;
}
