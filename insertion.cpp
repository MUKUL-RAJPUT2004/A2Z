#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    // for(int i=1; i<n; i++){
    //     for(int j=i; j> 0; j--){
    //         if(arr[j] < arr[j-1])    swap(arr[j], arr[j-1]);
    //     }
    // }



    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}

int main(){
    int arr[5] = {23, 1, 10, 5, 2};
    int n=5;

    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}