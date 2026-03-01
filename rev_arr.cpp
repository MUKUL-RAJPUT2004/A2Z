#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void rev_arr(int i, int arr[], int n){
            // reverse(arr, arr+m);

            if(i>= n/2)    return;

            swap(arr[i], arr[n-i-1]);
            rev_arr(i+1, arr, n);
        }
};

int main(){
    Solution sol;
    int arr[] = {1,2,3,4,5};
    int size = 5;
    sol.rev_arr(0, arr, 5);

    for(int it: arr)    cout<<it<<" ";

    return 0;
}