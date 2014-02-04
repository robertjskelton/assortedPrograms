#include <iostream>
#include <string>

using namespace std;

string endPrg()
{
    cout << "\nPress any key to end your program.\n";
    cin.clear();
    cin.ignore(100, '\n');
    cin.get();

}


//move two variables values, without using a third var
int main()
{
int a = 5, b =10;
cout << "a starts as " << a << endl;
cout << "b starts as " << b << endl;


a=a+b; 
b=a-b; 
a=a-b;


cout << "a= " << a << endl;
cout << "b= " << b << endl;
endPrg();

}
