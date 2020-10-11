#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll fibonacciMOD(vl vector, int mod,ll n){
	vector[0]=0;
	vector[1]=1;
	for(ll i = 2; i<n;i++){
		vector[i]=(vector[i-2]+vector[i-1])%mod;
	}
	return vector[n-1];
}
int main(){
	Fast
	ll n,mod;cin>>n>>mod;
	vl vector(n+1);
	cout<<(fibonacciMOD(vector,mod,(n+1)))<<endl;
} 
