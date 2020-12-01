#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
int solve(vi vector){
    sort(vector.begin(),vector.end());
    int size =vector.size();
    int times = size/2;
    int aws=0;
    for (int i = 0; i < size-1; ++i) {
        if (aws>times){ return 1; }
        if(vector[i]!=vector[i+1]){
            aws==0;}
        if(vector[i]==vector[i+1]){
            aws++;
        }else if (aws>times){ return 1; }
}
    return 0;
}
int main(){
    Fast
    int i;cin>>i;
    vi vector(i);
    for (int j = 0; j < i; ++j) {
        cin>>vector[i];
    }
    cout<<solve(vector)<<endl;
} 