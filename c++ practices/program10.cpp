#include<iostream>
using namespace std;
int main()
{ char c;
    do{
    
    cout<<"Enter the vowels";
    cin>>c;
     
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
{
 cout << c << " is a vowel.";
}
else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
{
 cout << c << " is a vowel.";
}

else {
    cout<<"Your Entered Aplhabets is  "<<c<<endl;
    cout<<"Good Bye"<<endl;
}

     
    } while(!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'));

    return 0;
  }
  

