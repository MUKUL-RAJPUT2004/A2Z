#include<bits/stdc++.h>
using namespace std;

//recursive bubble sort

void bubbleSort(int arr[], int n){
    int didSwap =0;
    if(n<=0)    return;
    for(int i=0;i<n; i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;

            didSwap = 1;
        }
    }
    if(didSwap == 0) return;
    bubbleSort(arr, n-1);
}


//recursive insertion sort
void insertionSort(int arr[], int n, int i){
    if(i >= n )    return;
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    insertionSort(arr, n , i+1);
}

int main(){
    int arr[5] = {2,1,30,51,4};
    int n = 5;
    // bubbleSort(arr, n-1);
    insertionSort(arr, n, 0);
    for(int i=0; i<n; i++)    cout<<arr[i]<<" ";
}