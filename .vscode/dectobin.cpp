#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int dec;
    int bin=0;
    int n=0;
    
    cin>>dec;
    while(dec!=0){
        bin=bin*(pow(10,n))+dec%2;
        dec=dec/2;
        n++;


        
    }
    cout<<bin;

}