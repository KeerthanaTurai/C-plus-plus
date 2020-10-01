#include<iostream>
using namespace std;
class Time
{
	public:
	    int s,sec,min,min1,hr;
	    void accept()
	    {
	    	cout<<"Enter seconds\n";
	    	cin>>s;
		}
		void cal()
		{
			sec=s%60;
			min1=s/60;
			hr=min1/60;
			min=min1%60;
		}
		void display()
		{
			cout<<"Hours:"<<hr<<" Minutes:"<<min<<" Seconds:"<<sec<<"\n";
		}
};
int main()
{
	Time t;
	t.accept();
	t.cal();
	t.display();
}
