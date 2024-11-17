#include <bits/stdc++.h>

using namespace std;

#define endl "\n"



void intcode(){
	#ifndef ONLINE_JUDGE 
	    // For getting input from input.txt file 
	    freopen("input.txt", "r", stdin); 
	    // Printing the Output to output.txt file 
	    freopen("output.txt", "w", stdout); 
	#endif
}

int main(){
	intcode();
	ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);    

    	int t ; 

    	cin>>t; 

    	while(t--){

    		int n, x;
    		cin>>n>>x; 
    		vector<int>v(n); 

    		for(int i=0; i<n; i++) cin>>v[i];

    			sort(v.begin(), v.end()); 
    		int sz = unique( v.begin(), v.end()) -  v.begin();

    		 if (sz == x) cout<<"Good"<<endl;
    		 else if( sz > x) cout<< "Average"<<endl;

    		 else cout<<"Bad"<<endl;

    	}
      




	return 0;
}