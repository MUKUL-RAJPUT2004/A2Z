// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int find_gcd(int n1, int n2){
    // int min_num =0;
    // int ans = 1;
    // if(n1<n2)   min_num = n1;
    // else min_num = n2;

    // for(int i=1; i<=min_num; i++){
    //     if((n1%i == 0)and(n2%i == 0))    ans =i;
    // }
    // return ans;

    while(n1>0 and n2 >0){
        if(n1>n2)    n1 = n1%n2;
        else    n2 = n2%n1;
    }
    if(n1==0)    return n2;
    else return n1;
}

int main(){
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;

    int gcd = find_gcd(n1, n2);
    cout<<gcd;
}