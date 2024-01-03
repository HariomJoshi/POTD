#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {
    // traverse the array, swap from the location of the index
    int n = nums.size();
    for(int i =0;i<n;i++){
        while(nums[i]< n && nums[i] != i){
            swap(nums[i], nums[nums[i]]);
            
        }
    }
    for(int i =0;i<n;i++){
        if(nums[i]!= i) return i;
    }

    return n;
}

int main(){
    cout<< "Enter N: ";
    int n;
    cin>> n;
    vector<int> nums(n,0);
    for(int i=0;i<n;i++){
        cin>> nums[i];
    }
    int ans = missingNumber(nums);
    cout<< ans<< endl;
    return 0;
}