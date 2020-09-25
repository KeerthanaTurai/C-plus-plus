#include<iostream>
using namespace std;
class Second;
class First
{
	int c;
	public:
		void data(Second);
};
class Second
{
	int a,b;
	public:
		void acceptf()
		{
			cout<<"Enter a,b values\n";
			cin>>a>>b;
		}
		void displayf()
		{
			cout<<"a="<<a<<" b="<<b<<"\n";
		}
		friend void First::data(Second);
};
void First::data(Second s)
{
	c=s.a+s.b;
	cout<<"Sum="<<c<<"\n";
}
int main()
{
	First f;
	Second s;
	s.acceptf();
	s.displayf();
	f.data(s);
	return 0;
}










