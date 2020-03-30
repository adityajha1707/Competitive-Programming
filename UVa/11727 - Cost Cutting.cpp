#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007 // 10^9 + 7
#define f first
#define s second
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
typedef long long int ll;


int main(){
    #ifndef ONLINE_JUDGE
        clock_t start_s = clock();
        freopen("C:\\Users\\jhaad\\Documents\\ipop\\input.txt", "r", stdin);
        freopen("C:\\Users\\jhaad\\Documents\\ipop\\output.txt", "w", stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    int arr[3];
    for(int i = 0; i < t; i++){
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr,arr+3);
        cout << "Case " << i+1 << ": " << arr[1] << "\n";
    }

    return 0;
}
