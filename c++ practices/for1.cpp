#include<iostream>
using namespace std;
int main()
{
    cout<<"Number";
    int number;
    cin>>number;
    int fact;
    fact=1;
    for(int i=number;i>=1;i--)
    {
       fact=fact*i;
    }
    cout<<fact;
}