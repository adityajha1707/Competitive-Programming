#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int> vi
#define pi pair<int,int>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for (int i = a; i < b; i++)
#define repr(i,a,b) for (int i = b; i >= a; i--)

//iterating a vector
//for(auto x: v)
//cout << x;

//vector with 5 elements
//vi a = {1,2,3,4,5}
// vi a(10); size 10 all 0
// vi a(10,5); size 10 all 5

vector<bool> binary(int a){
	vector<bool> bin;
	while(a != 1){	
		bin.pb(a%2);
		a = a/2;
	}
	bin.pb(1);
	return bin;
}

int decimal(vector<bool> bin){
	int dec = 0,i,j = 0;
	for(i = 0; i < bin.size(); i++){
		if(bin[i] == 1){
			break;
		}
	}		
	bin.erase(bin.begin(),bin.begin()+i);
	for(int j = bin.size() - 1; j >= 0; j--){
		dec += (bin[j]*pow(2,bin.size() - j - 1));
	}
	return dec;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t,a;
	cin >> t;
	while(t--){
		cin >> a;
		if(a % 2){
			cout << a << "\n";
		}
		else{
			cout << decimal(binary(a)) << "\n";		
		}
	}
	return 0;
}

