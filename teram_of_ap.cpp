/*Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp=1,j=1;
    for(int i=1;j<=n;i++){
        temp=(i*3)+2;
        if((temp)%4!=0){
            cout<<temp<<" ";
            j++;
        }
    }



    return 0;
}
