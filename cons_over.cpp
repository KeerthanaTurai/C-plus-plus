#include <iostream>
using namespace std;
class ABC
{
     private:
        int x,y;
     public:
        ABC ()       //constructor 1 with no arguments
       {
            x = y = 0;
        }
        ABC(int a)    //constructor 2 with one argument
       {
            x = y = a;
        }
        ABC(int a,int b)    //constructor 3 with two argument
        {
            x = a; 
            y = b;
        }
        void display()
        {
            cout << "x = " << x << " and " << "y = " << y << endl;
        }
};

int main()
{
     ABC cc1; //constructor 1
     ABC cc2(10); //constructor 2
     ABC cc3(10,20); //constructor 3
     cc1.display();
     cc2.display();
     cc3.display();
     return 0;
 }  //end of program
