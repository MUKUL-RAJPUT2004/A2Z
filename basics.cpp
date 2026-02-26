#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        bool compareStrings(string str1, string str2){
            return str1[0] == str2[0];
        }
};

int main(){
    Solution obj;
    string str1;
    cin>>str1;

    string str2;
    cin>>str2;

    if(obj.compareStrings(str1, str2))  cout<<"Strings are same";
    else    cout<<"Strings are not equal";

    return 0;
}