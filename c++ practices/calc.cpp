#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the days";
    int days;
    cin>>days;

  switch (days)
    {
        case 1:                   //if
        if(days==1){
          cout<<"kutty";
        }
        break;
        case 2:                //else if 
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wenesday";
        break;
        case 4:
        cout<<"Thrusday";
        break;
        case 5:
        cout<<"Friday";
        break;
        default:              // else 
        cout<<"Not Defalut of any opition";
        break;
    }
}