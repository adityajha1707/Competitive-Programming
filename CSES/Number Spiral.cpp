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
#define endl "\n" 

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
	ll t,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(x > y){
			if(x % 2){
				cout << (x-1) * (x-1) + y << endl;
			}
			else{
				cout << x * x - y + 1 << endl;
			}
		}
		else{
			if(y % 2){
				cout << y * y - x + 1 << endl;
			}
			else{
				cout << (y-1) * (y-1) + x << endl;
			}
		}
	}
	return 0;
}

