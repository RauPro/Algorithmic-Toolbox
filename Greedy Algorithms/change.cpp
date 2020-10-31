#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
int elementCount(int n){
	int currentData=0;
	int acum=0;
	int elementalData=n;
	while(currentData<n){
		if(elementalData%10==0){
			elementalData-=10;
			currentData+=10;
			acum++;
		}
		else if(elementalData%5==0){
			elementalData-=5;
			currentData+=5;
			acum++;
		}
		else{
			elementalData-=1;
			currentData++;
			acum++;
		}
	}
	return(acum);
}
int main(){
	Fast
	int n;cin>>n;
	cout<<elementCount(n)<<endl;
} 
