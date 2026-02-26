#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    void pattern7(int n){
        for(int i=0; i<n; i++){
            int j=0;
            for(; j<n-(i+1); j++){
                cout<<"  ";
            }
            for(int j=0; j<(2*i-1); j++)    cout<<"* ";
            cout<<endl;
        }
    }

    void pattern9(int n){
        
        for(int i=0; i < n; i++){
            int j=0;
            for(j;j<n-(i+1);j++)  cout<<" ";
            while(j++<(n+i))   cout<<"*";
            cout<<endl;
        }
        for(int i=0; i<n; i++){
            int j=0;
            for(j=0; j<i; j++){
                cout<<" ";
            }
            j=0;
            while(j++<(2*n-(2*i+1)))     cout<<"*";
            cout<<endl;
        }
    }

    void pattern10(int n){
            int start =1;
            for(int i=0; i<n; i++){
               
                if(i%2 == 0) start = 1;
                else start =0;
            
                for(int j=0; j<=i; j++){
                    cout<< start;
                    start = 1-start;
                }
                cout<<endl;
            }

    }

    void pattern13(int n){
        int num=1;
        for(int i=0;i<n;i++){
            for(int j=0; j<i+1; j++){
                cout<<num++<<" ";
            }
            cout<<endl;
        }
    }

    void pattern15(int n){
        for(int i=0; i<n; i++){
            for(char c ='A'; c<= 'A' + (n-i-1); c++){
                cout<<c;
            }
            cout<<endl;
        }
    }

    void pattern17(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                cout<<" ";
            }
            char ch='A';
            int breakpoint = (2*i+1)/2;
            for(int m=1; m<=2*i+1;m++){
                cout<<ch;
                if(m<=breakpoint)    ch++;
                else ch--;
            }
            cout<<endl;
        }
    }


    void pattern19(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
            for(int j=0; j<2*i;j++){
                cout<<" ";
            }
            for(int j=0; j<n-i; j++){
                cout<<"*";
            }
            cout<<endl;
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<i+1;j++)     cout<<"*";
            for(int j=0; j<2*n-2*(i+1);j++)    cout<<" ";
            for(int j=0; j<i+1; j++)    cout<<"*";
            cout<<endl; 
        }
    }

    void pattern21(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==0 || i==n-1 || j==0 || j==n-1)    cout<<"*";
                else    cout<<" ";
                
                }
                cout<<endl;
            }
        }
    
};
int main(){
    Solution sol;
    int n=4;
    sol.pattern21(n);
    return 0;
}