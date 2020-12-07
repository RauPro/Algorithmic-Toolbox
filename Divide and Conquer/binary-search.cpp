
#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(0); cin.tie(0);

typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
ll binaryS(int low, int high,vi vector,int key){
    ll mid = low+ ((high-low)/2);

    if(vector[mid]==key){
        return mid;
    }else if (high-low==1){
        ll  y = vector[high]==key? (high) : (-1);
        return y;
    }
    else{
        if(vector[mid]>key){
            return (binaryS(low,mid,vector,key));
        }
        else if(vector[mid]<key){
            return (binaryS(mid,high,vector,key));
        }
    }
}
int main(){
    Fast
    int t;int c;
    cin>>t;
    vi vector(t);
    for (int i = 0; i < t; ++i) {
        cin>>vector[i];
    }
    cin>>c;
    while (c--){
        int key;cin>>key;
        cout<<(binaryS(0,t-1,vector,key))<<endl;
    }
}