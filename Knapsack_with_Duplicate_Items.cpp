//============================================================================
//problem link : http://practice.geeksforgeeks.org/problems/knapsack-with-duplicate-items/0
// Name        : Knapsack_with_Duplicate_Items.cpp
// Author      : mohand sakr
// Version     :1
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//status : accepted
//============================================================================
#include <iostream>
using namespace std;
int kanpwithrepeat(int w,int n,int weights[],int costs[]){
	int values[w+1];
	values[0]=0;// set the value of zero weight is  zero
	for(int j=1;j<=w;j++){//loop form 1 to the needed weight
		values[j]=0;
		for(int i=0;i<n;i++){//loop all the available  weights that we will fill the knapsack with
			if(weights[i]<=j)// if there is a weight that less or equal the weight
			{
			int val=values[j-weights[i]]+costs[i];// compute the cost of the weight from the value that equal or less than  it
			if(val>values[j]){//save the maximum solution to the value of that weight
				values[j]=val;
			}
			}
		}
	}

	return values[w];//return the answer
}
int main() {
    int t;//test cases
    cin>>t;
    while(t--){
	 int w;//knapsack capacity
	 int n;//number of weights that available
	 cin>> n>>w;
	 int costs[n];//the values of the
	 int weights[n];//the weights
	 for(int  i=0;i<n;i++){
		cin>>costs[i];
	 }
	 for(int i=0;i<n;i++){
		 cin>>weights[i];
	 }
	  cout<<kanpwithrepeat(w,n,weights,costs)<<endl;}
	return 0;
}
