//============================================================================
// Name        : Palindrome.cpp
// Author      : mohand sakr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//problem link:https://practice.geeksforgeeks.org/problems/palindrome-string/0
//status:accepted
//============================================================================

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,s2;
	    cin>>s;
	    s2=s;
	    reverse(s.begin(),s.end());
	    if(s==s2)
	    cout<<"Yes"<<"\n";
	    else
	    cout<<"No"<<"\n";


	}
	return 0;
}
