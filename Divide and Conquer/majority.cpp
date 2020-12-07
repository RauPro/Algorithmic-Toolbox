#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
bool solve(vector<int> Arr, int n) {
    map<int, int> Freq;
    for (size_t i = 0; i < n; i++)
        Freq[Arr[i]]++;

    for (int i = 0; i <n; i++)
        if (Freq[Arr[i]] > (n / 2))
            return true;

    return false;
}
int main(){
    Fast
    int i;cin>>i;
    vi vector(i);
    for (int j = 0; j < i; ++j) {
        cin>>vector[j];
    }
    cout<<solve(vector,i)<<endl;
} 