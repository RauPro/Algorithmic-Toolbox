  
#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll fibSum(vl vector,ll n){
	vector[0]=0;
	vector[1]=1;
	ll sum=1;
	for(ll i=2;i<n;i++){
		vector[i]=vector[i-2]+vector[i-1];
		sum+=vector[i];
	}
	return sum%10;
}

int main(){
	Fast
	ll n;cin>>n;
	vl vector(n+1);
	cout<<fibSum(vector,(n+1));
} 
