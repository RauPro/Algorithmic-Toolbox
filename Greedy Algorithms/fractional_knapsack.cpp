#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
int maxIndex(vi w, vi v, int n){
	int max=0;
	double maxV=0;
	for(int i=0;i<n;i++){
		if(w[i]!=0 and (double) (v[i]/w[i])>maxV){
			maxV=(double)(v[i]/w[i]);
			max=i;
		}
	}
	return max;
	
}
double fractionalKnaps(int cp, vi w, vi v, int n){
	double finalValue=0.0;
	double a=0.0;
	for(int i=0;i<n;i++){
		if(cp==0){	return (double)finalValue;}
		int index=maxIndex(w,v,n);
		double a=min(cp, w[index]);
		finalValue+=a* (double) v[index]/w[index];
		w[index]-=a;
		cp-=a;
}	
	return (finalValue);
	
}

int main(){
	Fast
	int n,cp;cin>>n>>cp;
	vi w(n),v(n);
	for(int i=0;i<n;i++){
		cin>>v[i]>>w[i];
	}
	double aw=fractionalKnaps(cp,w,v,n);
	cout.precision(10);
	cout<<aw<<endl;
	return 0;
} 
