#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int> vi
#define pi pair<int,int>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repr(i,a,b) for (int i = b; i >= a; i--)

//iterating a vector
//for(auto x: v)
//cout << x;

//vector with 5 elements
//vi a = {1,2,3,4,5}
// vi a(10); size 10 all 0
// vi a(10,5); size 10 all 5

ll tk(ll i){
	return (i * i * (i * i - 1) - 32 - ((i - 4) * 16) - 16 - (24 * (i - 4)) - (8 * (i - 4) * (i - 4)))/2;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin >> t;
	rep(i,1,t+1){
		cout << tk(i) << "\n";
	}
	return 0;
}

