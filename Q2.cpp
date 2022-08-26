/*
Name : Aarshi Aggarwal
Roll. No. : 2010990943
Set No. : 3
Q2
Time Complexity : O(n)
Find pair sum with given target.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,target;
	// Taking Size of Input
	cin>>n;
	// Declaring Array of Size n
	int arr[n];
	//Taking Input for elements of Array
	for(int i=0;i<n;i++) cin>>arr[i];
	//Taking Input of Target
	cin>>target;
	//Adding Array Elements to map.
	map<int,int> m;
	for(int i=0;i<n;i++){
		m[arr[i]]++;
	}
	// Vector of Pairs to add Pair of Sum Found
	vector<pair<int,int>> ans;
	// Checking for existence of target - arr[i] in map and adding pairs in vector
	for(int i=0;i<n;i++){
		if(m[target-arr[i]] && target-arr[i]!=arr[i]){
			ans.push_back(make_pair(arr[i],target-arr[i]));
			m[arr[i]]--;
		}
	}
	// Displaying Resultant Pair of Vectors...
	vector<pair<int,int>>:: iterator it;
	int size = ans.size();
	if(size>0){
		for(it=ans.begin();it!=ans.end();it++){
			cout<<"Pair found ("<<it->first<<","<<it->second<<")"<<endl;
			size--;
			if(size>0) cout<<"or"<<endl;
		}
	}else{
		cout<<"Pair not found"<<endl;
	}
	cout<<endl;
	
	return 0;
}
