#include <iostream>
using namespace std;
int main()
{
cout <<"Let us start the Game"<<endl;
int guess_number=10;
int user_num;
int counter=0;
while (user_num!=guess_number)
{
   cout<<"Wrong Guess!User have "<<3-counter<<" times left"<<endl;
   cout<<"Guess any number between 0 to 10:";
   cin >> user_num;
   counter++;
   if (counter>=4)
   {
   cout<<"You Lose your game";
   break;
   }
}
if (user_num==guess_number){
    cout<<"You Won!";
}
return 0;
}
