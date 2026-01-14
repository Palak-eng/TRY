#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter 3 numbers a,b,c";
    cin>>a>>b>>c;
    cout<<"three numbers are "<<a<<" "<<b<<" "<<c<<endl;
     if (a>c&&a>b)
     {
        cout<<"a is greatest";
    
     }
     else if (b>c&&b>a)
     {
       cout<<"b is greatest";
     }
     
     else{
        cout<<"c is greatest";
     }
     



}