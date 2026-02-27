#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n)
{
	// Write your code here.
	
	//as soon as first divisor except the 1 and itself is found say false meaning its not prime
	// if( n ==1 )    return false;
	// for(int i=2; i<=sqrt(n); i++){
	// 	if(n%i == 0)	return false;
	// }
	// return true;

	//m2
	int cnt =0;
	for(int i=1; i*i <= n; i++){
		if((n%i)==0){    cnt++;
		if((n/i)!= i)    cnt++;

		}
	}
	if(cnt == 2) return true;
	else return false;
}


int main(){
     int n;
     cin>>n;
     cout<<isPrime(n);
}