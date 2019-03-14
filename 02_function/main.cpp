#include "iostream"
using namespace std;
int add(int, int);
int main()
{
cout<<"Welcome to the programming world"<<endl;
cout<<"It is the time to add two numbers"<<endl;
int a,b,c;
cout<<"Enter number 1: ";
cin>>a;
cout<<"Enter number 2: ";
cin>>b;
c=add(a,b);
cout<<"Output is: "<<c<<endl;
return 0;
}

int add(int a, int b)
{
int c;
return a+b;
}
