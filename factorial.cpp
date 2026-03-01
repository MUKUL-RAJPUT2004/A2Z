#include<iostream>
using namespace std;

class Solution {
    public:
        int factorial(int n){
            if(n == 0)   return 1;
            return n*factorial(n-1);
        }
};

int main(){
    Solution sol;
    int n;
    cin>>n;
    int ans = sol.factorial(n);
    cout<<ans;
}