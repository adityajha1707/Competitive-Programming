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


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		printf("%0.8f\n",(double)n/(n+1));
	}
	return 0;
}

