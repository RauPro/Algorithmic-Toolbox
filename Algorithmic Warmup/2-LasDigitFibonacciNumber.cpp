#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll fibNumber(vl vector){
	vector[0]=0;
	vector[1]=1;
	for(int i=2;i<vector.size();i++){
		vector[i]=(vector[i-2]+vector[i-1])%10;
	}
	return (vector[vector.size()-1]);
}

int main(){
	Fast
	ll n;cin>>n;
	vl vector(n+1);
	cout<<fibNumber(vector);
}
