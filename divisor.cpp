#include<bits/stdc++.h>
using namespace std;

vector<int> divisor(int n){
    vector<int> v;
    for(int i=1; i*i<=n;i++){
        if(n%i == 0){
            v.emplace_back(i);
            int pair = n/i;
            if(pair != i)
            v.emplace_back(pair);
        }    
    }
    return v;
}    //o(sqrt(n))

int main(){
    int n;
    cin>>n;
    vector<int> ans = divisor(n);
    sort(ans.begin(), ans.end());    //o(nlog(n))
    for(auto it: ans)    cout<<it<<" ";    //o(n)
}