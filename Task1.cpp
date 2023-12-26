#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{   system("cls");
    srand(time(0));
    int num=0;
    int g=rand()%100+1;
    int rtime=5;
    int t=1;
    cout<<"Enter the guessing Number: \n";
    do{
        cout<<"Turns remaining:"<<rtime+1<<"\n";
        cin>>num;
     if (num==g)    
     {
        cout<<"***Congratulation***\n";
        cout<<"guessed number is right\n";
        t=0;
        }
     else if (num>g)
        {
            cout<<"Guess a smaller Number\n";

        }
     else if (num<g)
     {
         cout<<"Guess a larger Number\n";
     }
    
    }
    while (t==1 && rtime--) ;

    return 0;
}