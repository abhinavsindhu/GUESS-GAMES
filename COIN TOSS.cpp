#include <iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;

int main()
{  int x,no,co;
while(1)
{
cout<<"\n********** A COIN IS TOSSED ONCE.YOU HAVE TO PREDICT WHAT I HAVE GOT *************";
cout<<"              \n   ***********************  HEAD OR TAIL ***************    \n";
cout<<"                 \n ******************** PRESS 1 HEAD AND 2 FOR TAIL ***************\n   ";
cin>>no;

    srand(time(0));
    x=rand()%2+1;
    if(x==no)
    {
        cout<<"******************\n";
        cout<<"***"<<"YOU HAVE WON"<<"***\n";
        cout<<"******************";
    }
    else {
        cout<<"*****************\n";
        cout<<"**"<<"YOU HAVE LOST"<<"**\n";
        cout<<"*****************";
    }
    cout<<"\n\n***DO YOU WANT TO EXIT PRESS 2 ELSE PRESS 1***\n";
    cin>>co;
    if(co==2)
        break;

}
    getch();
    return 0;
}
