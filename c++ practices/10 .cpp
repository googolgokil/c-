#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int height,weight;
    cout<<"Height";
    cin>>height;
    cout<<"Weight";
    cin>> weight;
    cout<<"Symbol";
     char symbol;

    cin>>symbol;
    for(int h=0;h<=height;h++)
    {
        for(int w=0;w<=weight;w++)
        {
            cout<<setw(5)<<symbol;

        }
        cout<<endl;
    }
    return 0;
}