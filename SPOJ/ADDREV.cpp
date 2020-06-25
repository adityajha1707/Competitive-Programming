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

int rev(int a){
    int b = 0;
    while(a != 0){
        b = b*10 + a%10;
        a = a/10;
    }
    return b;
}
int main(){
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        a = rev(a);
        b = rev(b);
        a = a + b;
        while(a%10 == 0){
            a = a/10;
        }
        cout << rev(a) << "\n";
    }
    return 0;
}


