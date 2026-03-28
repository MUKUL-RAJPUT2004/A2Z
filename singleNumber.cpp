#include<iostream>
#include<map>
using namespace std;

int better(int arr[],int n){    //o(n/2)
    int singNum=0;
    map<long long, int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1){
            singNum=it.first;
            break;
        }
    }
    return singNum;
}

int optimal(int arr[],int n){    //o(n)   sc=o(1)
    int num=0;
    for(int i=0;i<n;i++){
        num=num^arr[i];
    }
    return num;
}

int main(){
    int arr[7]={4,1,2,1,2,4,6};
    int n=7;
    cout<<optimal(arr,n);
}