#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

class Solution
{
    public:
    static bool comp(Item a, Item b){
        return (double)a.value/a.weight > (double)b.value/b.weight;
    }
    
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr+n, comp);
        double value = 0;
        int i =0;
        while(W>0 && i<n){
            if(W>= arr[i].weight){
                value += arr[i].value;
                W -= arr[i].weight;
                
            }else{
                value += ((double)arr[i].value/arr[i].weight )*(double)W;
                W =0;
            }
            i++;
        }
        return value;
    }
        
};