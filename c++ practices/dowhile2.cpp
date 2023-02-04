#include<iostream>
using namespace std;
int main()
{
    int  choice;
   do
   {
    int a,b,add=0,sub=0,multi=0,divi=0;
    cout<<"\n ***************************"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Divsion"<<endl;
    cout<<"5. Quit "<<endl;
    cin>>choice;
    if(choice==1)
    {
        cout<<"your Choose 1.Addition";
        cout<<"Enter the Two Value for Addition";
        cin>>a>>b;
        add=a+b;
        cout<<"Addition is"<<add;
         }
         else if(choice ==2)
         {
        cout<<"your Choose 2.Substraction";
        cout<<"Enter the Two Value for Substraction ";
        cin>>a>>b;
         sub=a-b;
        cout<<" Substraction "<<sub;
         }
         else if(choice ==3)
         {
        cout<<"your Choose Multiplication";
        cout<<"Enter the Two Value for Multiplication ";
        cin>>a>>b;
        multi=a*b; 
        cout<<" Multiplication "<<multi;
         }
     else if(choice ==4)
         {
        cout<<"your Choose Division";
        cout<<"Enter the Two Value for  Division";
        cin>>a>>b;
       divi=a/b;
        cout<<" Division "<<divi;
        }
        else if(choice == 5)
        {
            cout<<"Good bye"<<endl;
        }
        else{
            cout<<"Wrong choice .... Try again"<<endl;

        }
} while (choice !=5);

return 0;

}
