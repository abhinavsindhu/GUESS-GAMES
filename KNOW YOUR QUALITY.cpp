#include <iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>
#include<conio.h>

using namespace std;

int main()
{int i,x,len;
    char name[100];

   cout<<"//  ENTER YOUR NAME TO FIND YOUR QUALITY //\n";
    cin>>name;
    len=strlen(name);
      srand(time(0));
      x=rand()%len;

        switch(x)
        {
            case 0:cout<<"You are a humble person";
                   break;
            case 1:cout<<"You are Optimistic";
                   break;
            case 2:cout<<"You have great patience";
                   break;
            case 3:cout<<"You are punctual";
                   break;
            case 4:cout<<"You are sincere";
                   break;
            case 5:cout<<"You are an Oppotrunist";
                   break;
            case 6:cout<<"You are a sensible person";
                   break;
            case 8:cout<<"You are kind";
                   break;
            case 9:cout<<"You look great";
                   break;
            case 10:cout<<"You are a great planner";
                  break;
            case 11:cout<<"You are a hard worker";
                   break;
            case 12:cout<<"You are beautifull";
                  break;
            case 13:cout<<"You are a joyfull person";
                  break;
            case 14:cout<<"You are enthusastic";
        }
  getch();
    return 0;
}
