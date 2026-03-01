#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sum(int i, int n){
            if(i>n)    return 0;
            return (i + sum(i+1, n));
        }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    cout<<sol.sum(1, n);
}