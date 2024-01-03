#include <bits/stdc++.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int print2largest(int arr[], int n) {
	// code here
	int max = INT_MIN, smax = INT_MIN;
	for(int i =0; i<n; i++){
		if(arr[i]> max){
			smax = max;
			max = arr[i];
		}
		else if(arr[i]> smax && arr[i]< max){
			smax = arr[i];
		}

	}
	if(smax == INT_MIN) return -1;
	return smax;
}

int main(){
	cout<< "Enter N: ";
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>> arr[i];
	}
	int ans = print2largest(arr, n);
	cout<< ans << endl;
	return 0;
}
