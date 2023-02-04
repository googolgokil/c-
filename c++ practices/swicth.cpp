#include<iostream>
using namespace std;
int main()
{
    char oper;
    float num1,num2;
    cout<<"Enter the two Numbers";
    cin>>num1>>num2;
    cout<<"Enter the operator";
    cin>>oper;
    switch (oper)
    {
    case '+': cout<<num1 << " + "<<num2<<num1+num2<<endl;
    break; 
    case '-': cout<<num1 << "-"<<num2 <<num1-num2<<endl;
    break;
    case '*': cout<<num1 << "*"<<num2 <<num1*num2<<endl;
    break;
    case '%': cout<<num1 << "%"<<num2 <<num1/num2<<endl;
    break; 
    default :
    cout<<"not macth";

    
  
    }

    
}