#include<bits/stdc++.h>
using namespace std;
int count_digits(int n){
    vector<int> v;
    while(n){
        int temp = n%10;
        v.emplace_back(temp);
        n=n/10;
    }
    return v.size();
}
int main(){
    int n = 100234;
    int ans = count_digits(n);
    cout<<ans;
}