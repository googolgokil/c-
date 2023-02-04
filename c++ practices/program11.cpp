#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"Enter the Number";
    cin>>n1>>n2>>n3;
    if(n1<=n2&&n2<=n3){             //10>20 && 20>>30
        cout<<"Largest Number"<<n1;
    }
    
    else if(n2<=n1&&n2<=n3)
    {
        cout<<"Largest Number is"<<n2;
    }
    else{
        cout<<"Largest Number is"<<n3;
    }
    cout

       return 0;
    }
 
