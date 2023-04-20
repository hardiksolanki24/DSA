#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;

    int arr[n],sum[n];
    int i=0;
    for(;i<n;i++){
        sum[0]=0;
        cin>>arr[i];
        sum[i]+=sum[i];
    }
    cout<<sum[i];
}



