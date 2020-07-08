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
	int t,ng,nm;string s;
	cin >> t;
	while(t--){
		getline(cin,s);
		cin >> ng >> nm;
		int *g = new int[ng];
		int *m = new int[nm];
		rep(i,0,ng){
			cin >> g[i];
		}
		rep(i,0,nm){
			cin >> m[i];
		}
		int max1 = *max_element(g,g+ng);
		int max2 = *max_element(m,m+nm);
		if(max2 > max1){
			cout << "MechaGodzilla" << "\n";
		}
		else{
			cout << "Godzilla" << "\n";
		}
	}
	return 0;
}

