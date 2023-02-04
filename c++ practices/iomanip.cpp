#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int height,weight;
    cout<<"Height";
    cin>>height;
    cout<<"weight";
    cin>>weight;
   
    char symbol;
    cout<<"Symbol";
    cin>>symbol;
    for(int h=0;h<=height;h++)
    {
        for(int w=0;w<=weight;w++)
        {
            cout<<setw(3)<<symbol;

        }
        cout<<endl;
    }
    return 0;
}