#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
int main() {
    int i,A[5]={21,36,67,90,34},t=5,x,key;

    cout<<"CHOSE THE RIGHT KEY\n";
    while(t--)
    {
        cout<<"\nTHE KEYS ARE \n";
        for(i=0;i<5;i++)
            cout<<A[i]<<" ";
        cout<<"\n";
     cin>>x;
        srand(time(0));
        key=A[rand()%5];
        if(x==key)
            cout<<"\n YOU HAVE CHOSEN THE RIGHT KEY";
        else
        {
            cout << "\nWRONG KEY";
            cout<<"\nTHE RIGHT KEY WAS "<<key;
        }


    }
    getch();
    return 0;
}