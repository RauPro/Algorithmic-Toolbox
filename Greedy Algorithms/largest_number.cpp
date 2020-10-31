#include <bits/stdc++.h>
using namespace std;
#include <string>
#define Fast ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef long int li;
typedef vector<int> vi;
typedef vector<ll> vl;
bool isBetter(string& a, string& b) {
	return(b + a > a + b);
}
string Largeast_Salary(vector<string> Nums, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (isBetter(Nums[j], Nums[j + 1])) {
				swap(Nums[j], Nums[j + 1]); 
			}
		}
	}
	stringstream Salary; 
	for (int i = 0; i < n; i++) {
		Salary << Nums[i]; 
	}
	return Salary.str(); 
}


int main() {
	int n;
	cin >> n;
	vector<string> Nums(n);
	for (int i = 0; i < n; i++) {
		cin >> Nums[i];
	}
	cout << Largeast_Salary(Nums, n) << endl;
}

