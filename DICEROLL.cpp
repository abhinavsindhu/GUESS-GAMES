#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
int main() {
int guess,guessed,i,co;
    cout<<"                     A DICE IS THROWN \n";
    cout<<"                      PREDICT THE NUMBER\n";

    srand(time(0));
    while(1)
    {  guess=rand()%6+1;
        cin>>guessed;
        if(guess==guessed)
            cout<<"           YOU HAVE WON\n";
        else
            cout<<"          YOU HAVE LOST\n";
        cout<<"DO YOU WANT TO CONTINUE ENTER 1 OR PRESS 2\n";
        cin>>co;
        if(co==2)
            break;

    }
    getch();
    return 0;
}