#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

int i=2;
bool isPrime = false;
while(i<n){
    if(n%i==0){
        cout<<"Non Prime";
        isPrime = true;
        break;
    }
    i++;
}
if(!isPrime){
    cout<<"Prime";
}
return 0;
}

