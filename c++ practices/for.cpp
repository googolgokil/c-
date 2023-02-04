#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the Number";
   
   int i,sum=0;
    cin>>i;
  
  for( i;i<10;i++)
  {
    if(i%2 !=0)
    {
        sum=sum+i;
    }
    else{
        cout<<"Thank you";
    }
  }
  cout<<"Sum"<<sum;
  return 0;
}