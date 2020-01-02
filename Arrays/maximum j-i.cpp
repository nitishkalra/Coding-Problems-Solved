#include<bits/stdc++.h>
#include<utility>
using namespace std;
bool myfunc(pair<int,int> a,pair<int,int> b){
    return (a.first - b.first)<0;
}
int main(){
    int t;
    int n;
    cin>>t;
    while(t--){
    cin>>n;


    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(make_pair(ele,i));
    }
    sort(v.begin(),v.end(),myfunc);


    int I[n];
    for(int i=0;i<v.size();i++){
        I[i] = v[i].second;
    }
    int max = 0;
    int min = I[0];
    for(int i=0;i<n;i++){
        if(I[i]-min > max) max = I[i]-min;
        if(I[i]<min) min = I[i];
    }
    cout<<max<<endl;
    }
}

