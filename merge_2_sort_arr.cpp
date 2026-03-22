#include<bits/stdc++.h>
using namespace std;

vector < int > brute(vector < int > a, vector < int > b) {
    set<int> st;
    for(int i=0;i<a.size();i++)    st.insert(a[i]);
    for(int i=0;i<b.size();i++)    st.insert(b[i]);
    
    vector<int> ans;
    for(auto it: st)    ans.push_back(it);
    return ans;
}

vector<int> optimal(vector<int> &a, vector<int> &b) {
        // code here
        int i=0;
        int j=0;
        vector<int> un;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                if(un.size()==0 || a[i]!=un.back()){
                    un.push_back(a[i]);
                }
                i++;
            }
            else{
                if(un.size()==0 || b[j]!=un.back()){
                    un.push_back(b[j]);
                }
                j++;
            }
        }
        
        while(i<a.size()){
            if(un.size()==0  || a[i]!=un.back()){
                un.push_back(a[i]);
            }
            i++;
        }
        while(j<b.size()){
            if(un.size()==0  || b[j]!=un.back()){
                un.push_back(b[j]);
            }
            j++;
        }
        return un;
    }
int main(){
    vector<int> a = {2,3,3,4,5,5};
    vector<int> b = {3,4,5,6,6};

    vector<int> ans = brute(a,b);
    // vector<int> ans = better(a,b);
    vector<int> ans = optimal(a,b);

}