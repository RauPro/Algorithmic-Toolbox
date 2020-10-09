#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
int gdc(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gdc(b,a%b);
	}
}

int main(){
	Fast
	int a,b;cin>>a>>b;
	cout<<gdc(a,b);
} 
