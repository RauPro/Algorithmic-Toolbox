  
#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll fibSum(vl vector,ll n,ll limit){
	vector[0]=0;
	vector[1]=1;
	if(n==0){
		return 0;
	}
	else if(limit==1 and n<=2){
		return 1	;
	}
	else if(limit==1 and n==3){
		return 2	;
	}
	ll sum=0;
	for(ll i=2;i<limit;i++){
		vector[i]=vector[i-2]+vector[i-1];
		cout<<vector[i];
		
	}
	for(ll i=limit;i<n;i++){
		vector[i]=vector[i-2]+vector[i-1];
		sum+=vector[i];
	}
	return sum%10;
}

int main(){
	Fast
	ll n,limit;cin>>limit>>n;
	vl vector(n+1);
	cout<<fibSum(vector,(n+1),limit);
} 
