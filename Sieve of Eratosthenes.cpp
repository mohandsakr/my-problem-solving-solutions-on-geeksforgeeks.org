//============================================================================
//problem link:http://practice.geeksforgeeks.org/problems/sieve-of-eratosthenes/0
// Name        : Sieve.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status: accepted
//============================================================================

#include <iostream>
using namespace std;
const int  N= 10002;
bool arr[N];
void seive(){
arr[0]=1;
arr[1]=1;
for(int i=2;i<=N;i++){
	if(arr[i])continue;
	for(long long j=i*i;j<=N;j+=i){
		arr[j]=1;
	}
}

}
int main() {
	seive();
int t;
cin>>t;
while(t--){
int n;
cin>>n;
for(int i=1;i<=n;i++){
	if(!arr[i]){
		cout<<i<<" ";
	}
}
cout<<"\n";
}
	return 0;
}
