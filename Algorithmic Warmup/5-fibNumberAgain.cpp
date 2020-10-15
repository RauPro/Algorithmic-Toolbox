#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll pisanoSequence(ll m){
	ll prev=0,current=1,res=0;
	for(int i=0;i<m*m;i++){
		ll temp=0;
		temp=current;
		current=(prev+current)%m;
		prev=temp;
		if(prev==0&&current==1){
			res=i+1;
		}
	}
	return res;
}

ll get_fibonacci_huge_fast(ll n, ll m) {
    ll remainder = n % pisanoSequence(m);
    ll F1 = 0, F2 = 1, F = remainder;
    for (int i = 1; i < remainder; i++) {
        F = (F1 + F2) % m;
        F1 = F2;
        F2 = F;
    }
    return F % m;
}

int main() {
    ll n, m;
    cin >> n >> m;
    cout << get_fibonacci_huge_fast(n, m) << endl;
}
