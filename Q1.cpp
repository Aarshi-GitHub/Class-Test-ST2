/*
Name : Aarshi Aggarwal
Roll. No. : 2010990943
Set No. : 3
Q1
Time Complexity : O(n)
Rearrange an Array with alternate high and low elements
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	// Taking Size of Input
	cin>>n;
	// Declaring Array of Size n
	int arr[n];
	//Taking Input for elements of Array
	for(int i=0;i<n;i++) cin>>arr[i];
	// Wave Sort an Array
	for(int i=0;i<n-1;i++){
		// Element at Even Position should be lower than the next otherwise Swap
		if(i%2==0 && arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
		// Element at Odd Position should be higher than the next otherwise Swap
		else if(i%2!=0 && arr[i]<arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
		}
	}
	// Displaying Resultant Array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
