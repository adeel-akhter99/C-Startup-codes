#include "iostream"
using namespace std;
int add(int, int);

struct size
{
 int width;
 int height;
};

int main()
{
cout<<"Welcome to the programming world: I am subhan haider"<<endl;
cout<<"It is the time to add two numbers"<<endl;
int a,b,c;
size dim;
cout<<"Enter number 1: ";
cin>>a;
cout<<"Enter number 2: ";
cin>>b;
c=add(a,b);
cout<<"Output of addition is: "<<c<<endl;
cout<<"Now its the time for structure"<<endl;
cout<<"Enter width:";
cin>>dim.width;
cout<<"Enter height:";
cin>>dim.height;
cout<<"Output of struct  is:"<<dim.width*dim.height<<endl;
return 0;
}

int add(int a, int b)
{
int c;
return a+b;
}
