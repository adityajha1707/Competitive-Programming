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

    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << (a/3) * (b/3) << "\n";
    }
    


    #ifndef ONLINE_JUDGE
        clock_t stop_s = clock();
        cout << "Time Elapsed: " << ((stop_s-start_s)/double(CLOCKS_PER_SEC))*1000 << " ms" << endl;
    #endif
    return 0;
}
