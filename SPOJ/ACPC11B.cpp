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
	int t,m,n;
	cin >> t;
	while(t--){
		cin >> m;
		int *arr1 = new int[m];
		for(int i = 0; i < m; i++){
			cin >> arr1[i];
		}
		sort(arr1,arr1+m);
		cin >> n;
		int *arr2 = new int[n];
		for(int i = 0; i < n; i++){
			cin >> arr2[i];
		}
		sort(arr2,arr2+n);
		int i = 0, j = 0,diff = INT_MAX;
		while(i < m && j < n){
			if(abs(arr1[i]-arr2[j]) < diff){
				diff = abs(arr1[i]-arr2[j]);
			}
			if(arr1[i] < arr2[j]){
				i++;
			}
			else{
				j++;
			}
		}
		cout << diff << "\n";
	}
	return 0;
}

