#include<bits/stdc++.h>
using namespace std;

void zero_to_end(vector<int> &arr){
    vector<int> temp;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != 0)    temp.push_back(arr[i]);
    }

    for(int i=0; i<temp.size();i++){
        arr[i] = temp[i];
    }

    for(int nz=temp.size(); nz<arr.size(); nz++){
        arr[nz] = 0;
    }
    
}

int main(){
    vector<int> arr = {1,0,2,3,0,0,4,5,1};
    zero_to_end(arr);
    for(auto it: arr)    cout<<it<<" ";
}