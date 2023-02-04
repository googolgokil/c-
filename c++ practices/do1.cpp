#include<iostream>
using namespace std;
int main()
{   
char choice;
do
    {
     float l,b,area=0;
     cout<<"Enter legnth and Breath ";
    cin>>l>>b;
     area=l*b;
     cout<<"This area is"<<area<<endl;
     cout<<"Contintue (Y/N)"<<endl;
     cin>>choice;
    }while(choice=='y'||choice=='N');
    {
        cout<<"out of the loop";
    }


}

