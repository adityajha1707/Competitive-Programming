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

    int n,b,h,w,min,p,a;
    while(cin >> n >> b >> h >> w){
        min = b+1;
        for(int i = 0; i < h; i++){
            cin >> p;
            for(int j = 0; j < w; j++){
                cin >> a;
                if(a >= n && n*p < min){
                    min = n*p;  
                }
            }
        }   
        if(min > b){
            cout << "stay home\n";
        }
        else{
            cout << min << "\n";
        }
    }

    return 0;
}
