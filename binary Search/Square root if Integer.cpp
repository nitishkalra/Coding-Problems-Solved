int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int l = 0;
    int r = A,ans;
    long mid;
    if(A==0||A==1) return A;
    while(l<=r){
        mid = (l + r)/2; 
        if(mid*mid==A) return mid;
        else if(mid*mid<A){
            l = mid+1;
        
            ans = mid;            
        }
        else if(mid*mid>A) r = mid-1;
    }
    return ans;
    
}
