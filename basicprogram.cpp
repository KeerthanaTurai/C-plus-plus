#include<iostream>
using namespace std;
class first 
{
    int a,b;               //private members
    public:
        void accept()     //functn for accepting details
        {
            cout<<"enter a and b values\n";
            cin>>a>>b;
        }
        void display()   //functn for displaying details
        {
            cout <<"value of a is"<<a;
            cout <<"\nvalue of b is"<<b;
        }
};
int main()
{
   first  f;          //creation of an object
   f.accept();       //calling of accept functn
   f.display();      //calling of display functn
   return 0;                                           
}


