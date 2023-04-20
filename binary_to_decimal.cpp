/*Given a binary number as an integer N, convert it into decimal and print.*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp,ans=0,pv=1;
    while(n>0){
        temp=n%10;
        ans=ans+temp*pv;
        n=n/10;
        pv*=2;
    }
    cout<<ans;


    return 0;
}
