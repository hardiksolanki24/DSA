#include<iostream>
using namespace std;

void intersection(int input1[],int size1,int input2[],int size2){

    for(int i=0;i<size1-1;i++){
        for(int j=0;j<size2;j++){
            if(i!=j && input1[i]==input2[j]){
             cout<<input2[j]<<endl;
                continue;
            }

        }
    }
}

int main(){
    int size1;
    cin>>size1;

    int input1[50];
    for(int i=0;i<size1;i++){
        cin>>input1[i];
    }
    cout<<"============="<<endl;
    int size2;
    cin>>size2;

    int input2[50];
    for(int i=0;i<size2;i++){                    
        cin>>input2[i];
    }

    intersection(input1,size1,input2,size2);
    

    return 0;
}