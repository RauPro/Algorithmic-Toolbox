#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;

ll maxPairwiseProductNaive(vl vector){
	ll product = 0;
	sort(vector.begin(),vector.end());
	for(int i=0;i<vector.size()-1;i++){
		product = max(product,vector[i]*vector[i+1]);
	}
	return product;
}
int main(){
	Fast
	int size;cin>>size;
	vl vector(size);
	for (int i=0;i<size;i++){
		cin>>vector[i];
	}
	cout<<maxPairwiseProductNaive(vector)<<endl;
} 
