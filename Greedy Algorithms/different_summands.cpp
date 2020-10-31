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
	vi aws;
	for(int i=1; n ;i++){
		if(n-1>i){
			aws.push_back(i);
			n-=i;		
		}
		else{
			aws.push_back(n);
			break;
		}
	}
	cout<<aws.size()<<endl;
	for(int i=0;i<aws.size();i++){
		cout<<aws[i]<<" ";
	}
} 
