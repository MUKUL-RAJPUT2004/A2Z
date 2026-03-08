#include<iostream>
#include<climits>
using namespace std;

void selection_sort(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[mini])    mini = j;
        }
        swap(arr[i], arr[mini]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {7,5,9,2,8};
    int size =5;
    selection_sort(arr,size);
}