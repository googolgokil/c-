#include<iostream>
using namespace std;
int main()
{
    float weight,height;
    cout<<"weight"<<endl;
    cout<<"height"<<endl;
    cin>>weight>>height;
    int bmi= weight/height*height;
    if(bmi<18.5){
        cout<<"underweigth";
    }
    else if(bmi>25){
        cout<<"Over weight";
    } 6
    else
    {
        cout<<"normal weight";
    }

    cout<<bmi;
    return 0;
}
