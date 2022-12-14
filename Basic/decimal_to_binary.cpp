/*Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp,ans=0,pv=1;
    while(n>0){
        temp=n%2;
        ans=ans+temp*pv;
        n=n/2;
        pv*=10;
    }
    cout<<ans;


    return 0;
}
