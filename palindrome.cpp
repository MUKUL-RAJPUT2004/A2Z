#include<bits/stdc++.h>
using namespace std;

bool chk_pal(int i, string s, int j){
    if(s[0] != s[j])    return false;
    while(i<=j){
        chk_pal(i+1, s, j-1);
    }
    return true;
}

int main(){
    string s;
    cin>>s;

    cout<<chk_pal(0,s, s.size());
    return 0;
}