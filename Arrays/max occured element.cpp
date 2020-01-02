#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    int m1,m2,max;
	    m1 = a[0];
	    m2 = b[0];
	    for(int i=0;i<n;i++){
	        if(a[i]>m1) m1 = a[i];
	        if(b[i]>m2) m2 = b[i];
	    }
	    max = m1>m2?m1:m2;
	    int c[max+1] = {0};
	    for(int i=0;i<n;i++){
	        c[a[i]] += 1;
	        c[b[i]+1] -= 1;
	    }
	    m1 = 0;
	    m2 = 0;
	    int ans = 0;
	    for(int i=0;i<max+1;i++){
	          m1+=c[i];
	          if(m1>m2){
	              m2 = m1;
	              ans = i;
	          }
	    }
	    cout<<ans<<endl;
	    
	}
	return 0;
}
