#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll gcd(ll a, ll b){
	if(b==0){
		return a;
	}
		return gcd(b,a%b);
}
ll lcm(int a, int b){  
    return (a/gcd(a, b))*b;  
}   
int main(){
	Fast
	ll a,b;cin>>a>>b;
	ll aS,aB;
	aS=max(a,b);
	aB=min(a,b);
	cout<<lcm(a,b)<<endl;
}
