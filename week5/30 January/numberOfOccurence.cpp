//question -> https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

#include<bits/stdc++.h>

using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int s = upper_bound(arr, arr+n, x)- arr;
	    int e = lower_bound(arr, arr+n, x) - arr;
	    return s-e;
	    
	}
};