#include<iostream>
using namespace std;

int main(){

    char n;
    n=cin.get();
    int i=0;
    while(n!='$'){
        n=cin.get();
        i++;
    }
    cout<<i;


    return 0;
}
