#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool check_arr_sorted_rotated(vector<int> arr){
    //check for region 1
    int i=1;
    while(i<arr.size() && arr[i]>=arr[i-1])    i++;

    //check if its only one curve array no downways curve is there
    if(i==arr.size())    return true;
    if(i==arr.size()-1)    return true;
    if(arr[i]>arr[0])    return false;

    //check for the region 2
    i++;
    while(i<arr.size() && arr[i]>=arr[i-1] && arr[i]<=arr[0])    i++;

    return i == arr.size();

    
}

int main(){
    vector<int> arr= {3,4,4,5,1,1,2};
    cout<<check_arr_sorted_rotated(arr);
}