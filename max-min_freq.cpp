#include<bits/stdc++.h>
using namespace std;

int main(){
    // int arr[] = {10, 5, 15, 10, 5, 10};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int hash[15]={0};
    // for(int i=0; i<size; i++){
    //     hash[arr[i]]++;
    // }

    // //find max
    // int max = INT_MIN;
    // for(int i=0; i<size; i++){
    //     if(arr[i]>max)   max= arr[i];
    // }

    //find min
    // int min = INT_MAX;
    // for(int i=0; i<size; i++){
    //     if(arr[i]<min)    min= arr[i]; 
    // }
    // cout<<max<<" "<<min;



    //m2
    int arr[] = {10, 5, 15, 10, 5, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    map<int , int> mpp;
    for(int i=0; i<size; i++){
        mpp[arr[i]]++;
    }

    //find max and  min
    int max = INT_MIN;
    int min = INT_MAX;

    for(auto it: mpp){
        if(it.second > max)     max = it.first;
        if(it.second < min)    min= it.first;
    }
    cout<<max<<" "<<min;

    
}