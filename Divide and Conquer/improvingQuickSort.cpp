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
    vi vector(n);
    for (int i = 0; i < n; ++i) {
        cin>>vector[i];
    }
    sort(vector.begin(),vector.end());
    for (int i = 0; i < n; ++i) {
        cout<<vector[i]<<" ";
    }
}