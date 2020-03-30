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

    int k,ox,oy,a,b;
    while(1){
        cin >> k;
        if(k == 0){
            break;
        }
        else{
            cin >> ox >> oy;
            while(k--){
                cin >> a >> b;
                a -= ox;
                b -= oy;
                if(a == 0 || b == 0){
                    cout << "divisa\n";
                }
                else if(a > 0 && b > 0){
                    cout << "NE\n";
                }
                else if(a > 0 && b < 0){
                    cout << "SE\n";
                }
                else if(a < 0 && b > 0){
                    cout << "NO\n";
                }
                else{
                    cout << "SO\n";
                }
            }
        }
    }
    return 0;
}
