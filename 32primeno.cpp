#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
      int temp=0;
    cout<<"enter number ";
    cin>>n;
    for(i=1;i<=n;i++){
       
      
        
       int division=n%i;
        if(division==0){
            temp++;
        }
        
      
            
        }
    if(temp==1){
        cout<<"number is 1";
    }
   else if(temp>2){
        cout<<"number is non prime";

    }
    else{
        cout<<"number is prime";
    }


}