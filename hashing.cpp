#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    //precompute
    
    // for(int i=0; i<n;i++){
    //     hash[arr[i]] +=1;
    // }

    // int q;
    // cin>>q; 
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<"For"<<number<<"="<<hash[number]<<endl;
    // }


    //charaters
    // string s;
    // cin>>s;

    // int hash[256]={0};  //as total 256 total characters
    // for(int i=0; i<s.size(); i++){
    //     hash[s[i]-'a']++;
    // }

    // int q;
    // cin>>q;
    // while(q--){
    //     char c;
    //     cin>>c;
    //     cout<<hash[c-'a']<<" ";

    // }


    //for arrays greater then 10^7
    //  int n;
    //  cin>>n;
    //  int arr[n];
    //  for(int i=0;i<n; i++){
    //     cin>>arr[i];
    //  }

    //  //pre-compute
    //  map<int, int> mpp;
    //  for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    //  }

    //  int q;
    //  cin>>q;
    //  while(q--){
    //     int number;
    //     cin>>number;

    //     cout<<mpp[number]<<" ";
    //  }


    //string one hashing with map
    string s;
    cin>>s;

    //pre computation
    map<char, int> mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    for(auto it: mpp)   cout<<it.first<<"->"<<it.second<<endl;

    int q;
    cin>>q;
    while(q--){
        char num;
        cin>>num;
        cout<<mpp[num]<<" ";
    }

}