#include<iostream>
using namespace std;
int main(){
    int n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maximum=INT_MIN,sum=0;
    for(int i=0;i<n;i++){
        if(sum+a[i]>a[i]){
            sum+=a[i];
        }
        else{
            sum = a[i];
        }
        if(sum>maximum) maximum = sum;
    }
    cout<<maximum;
}
