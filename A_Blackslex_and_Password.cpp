#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define cin(v) for(auto &x : v)cin >> x
#define cin_2D(v) for(auto &row : v) for(auto &x : row)cin>>x
#define cout(v) for(auto& x : v)cout << x << ' '
#define cout_2D(v) for(auto& row : v) for(auto x : row) cout << x << ' '; cout << endl
#define vi vector<ll>
#define vvi vector<vi>
#define vec_max(v) *max_element(all(v))
#define vec_min(v) *min_element(all(v))

#define for0(i, a) for(ll i = 0; i < (a); ++i)
#define for1(i, a, b) for(ll i = a; i < (b); ++i)
#define for0_r(i, a) for(ll i = (a)-1; i >= (0); --i)
#define for1_r(i, a, b) for(ll i = (b)-1; i >= (a); --i)

bool isPrime(int n) {
    if(n < 2) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0) return false;
    return true;
}
void solve(){
    ll n;
    cin >> n;
    vi v(n);
    
}

int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
}

//     //    ///    ///////   ///////// //     // //////    ///////      ///  
//     //  //   //  //     // //        ///    // //    //  //     //  //   // 
//     // //     // //     // //        ////   // //     // //     // //     //
///////// ///////// ////////  ///////   // /// // //     // ////////  /////////
//     // //     // // //     //        //   //// //     // // //     //     //
//     // //     // //   //   //        //    /// //    //  //   //   //     //
//     // //     // //     // ///////// //     // //////    //     // //     //