#include<iostream>
using namespace std;
int main()
{
   bool flag =false;
   while(!flag)
   {
    cout<<"Enter the number between 2 and 7";
    int n;
    cin>>n;
    if(n<=2|| n>=7)
    {
        cout<<"Try a Valid Number";
    }
    else 
    { 
        cout<<n;
        cout<<"Thank you";
        flag=true;
    }
   
   }
return 0;
    }
   
