#include<bits/stdc++.h>
using namespace std;

int getPivotIndex(int arr[], int low, int high){
    int pivot = low;
    int i = low ;
    int j = high ;
    while(i <= j){
        //check the first greater number then pivot in left
        while(arr[i]<=arr[pivot] && i<=high)    i++;

        //check the first smaller number in the right
        while(arr[j]>arr[pivot] && j>=low)    j--;

        //swap the greater and the smaller number found so that when pivot is placed at its position it has all smaller number on left and greater number on right
        if(i<j)    swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;

}

void quickSort(int arr[], int low, int high){
    if(low < high ){
        int pIndex = getPivotIndex(arr, low, high);
        quickSort(arr, low, pIndex-1);
        quickSort(arr, pIndex+1, high);
    }
}

int main(){
    int arr[5] = {2,15,4,1,3};
    int n =5;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n ; i++)    cout<<arr[i]<<" ";
    cout << endl;
}