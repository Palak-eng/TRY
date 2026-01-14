#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int temp=0;
        while(i<=n)
    {
    
    if(n%i==0){
            
     temp++;
    }
    i++;
    }

    if (temp==2)
    {
     cout<<"a prime number";
    }

     else
    {
     cout<<"not a prime number";
    }
    
}
