#include<iostream>
using namespace std;

//Recursion
int fibo(int n){
    //base case
    if(n==0||n==1) return n;

    return fibo(n-1)+fibo(n-2);
}
// TOP DOWN DP - Recursion + Memoization
int topDownDP(int n,int *dp){
    //base case
    if(n==0||n==1){
        dp[n] = n;
        return n;
    }
    // Already Computed
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        // Compute Store Return
        dp[n]=topDownDP(n-1,dp) + topDownDP(n-2,dp);
        return dp[n];
    }

}
int bottomUp(int n){
    int *dp = new int[n];
    dp[0] = 0;  // base case of top dowm will be the assignment steps of bottom up approach
    dp[1] = 1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];

}
int fibOpt(int n){
    int a = 0,b=1;
    int c;
    for(int i=2;i<=n;i++){
        c = a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    cout<<fibo(5)<<endl;
    int dp[100];
    for(int i=0;i<100;i++){
        dp[i] = -1;
    }
    cout<<topDownDP(5,dp)<<endl;
    cout<<bottomUp(5)<<endl;
    cout<<fibOpt(5)<<endl;
    return 0;
}
