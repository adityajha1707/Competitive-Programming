#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
	if(n == 0){
		return 1;
	}
	int smallfactorial = factorial(n-1);
	return n * smallfactorial;
}
int main(){
	int n;
	cin >> n;
	cout << factorial(n) << "\n";
	return 0;
}
