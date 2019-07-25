using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
	//code
	int t;
	cin>>t;
	int n,k;
	while(t--){
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i=i+k){
	        if(i+k<=n){
	            for(int j=0;j<k/2;j++){
	                swap(&a[i+j],&a[i+k-1-j]);
	            }
	        }
	        else{
	            int m = n - i;
	            for(int j=0;j<m/2;j++){
	                swap(&a[i+j],&a[i+m-1-j]);
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
