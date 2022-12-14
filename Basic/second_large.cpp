#include<iostream>
using namespace std;
#include <climits>


int main(){

    // Write your code here
    int n,large=0,s_large=0;
    cin>>n;

    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        if(no>large){
            s_large=large;
            large=no;
        }
        else if (no > s_large && no < large){
            s_large=no;
        }
    }
    //cout<<large;
    cout<<s_large;

}


