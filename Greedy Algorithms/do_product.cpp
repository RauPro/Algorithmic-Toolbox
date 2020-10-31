#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;

int main(){
	Fast
	int n;cin>>n;
	vi pClick(n);
	vi click(n);
	for (int i=0;i<n;i++){
		cin>>pClick[i];
	}
	for (int i=0;i<n;i++){
		cin>>click[i];
	}
	sort(pClick.begin(),pClick.end());
	sort(click.begin(),click.end());
	int aws=0;
	for(int i=n-1;i>=0;i--){
		aws+=(pClick[i]*click[i]);
	}
	cout<<aws<<endl;	
} 
