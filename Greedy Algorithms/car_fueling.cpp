#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
	Fast
	int req,full,n;cin>>req>>full>>n;
	int check=0;
	vi v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
		if(i!=0){
			if((v[i]-v[i-1])>full){
				check=1;
			}
		}
	}
	if(req<=full){
		cout<<0<<endl;
	}
	else if(check==1){
		cout<<-1<<endl;	
	}
	else{
		int pass=1;
		for(int i=0;i<n-1;i++){
			if(v[i]<=full and v[i+1]>full){
				pass++;
			}
		}
		cout<<pass;
	}
	
} 
