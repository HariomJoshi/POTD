// question link - https://www.geeksforgeeks.org/problems/decreasing-sequence2722/1


int minMoves(int a[], int n, int k)
{   
    long long count =0;
    for(int i=1;i<n;i++){
        // cout<< a[i]<< " ";
        if(a[i]>a[i-1]){
            int diff= a[i]-a[i-1];
            int fac;
            if(diff%k==0){
                fac = diff/k;
            }else{
                fac = diff/k +1;
            }
            a[i] = a[i]-fac*k;
            count += fac;
            count %= 1000000007;
        }
        
    }
    return count;
}