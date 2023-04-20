#include<iostream>
using namespace std;

int main(){
    
    int S,E,W;
    cin>>S>>E>>W;

    int i=S;
    while(i<=E){
            int fan = 5.0/9*(i-32);
            cout<<i<<"\t"<<fan<<endl;
            i = i +  W;
    }
return 0;
}


