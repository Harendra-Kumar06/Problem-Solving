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
// #define Y cout<<"YES"
// #define N cout<<"NO"

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
    ll L, W, R, G, B;
    cin >> L >> W >> R >> G >> B;
    vector<ll> corners = {0, L, L + W, 2 * L + W, 2 * L + 2 * W};
    
    ll trans1 = R;
    ll trans2 = R + G;

    int extra_cost = 0;

    bool trans1_at_corner = false;
    for (ll c : corners) if (trans1 == c) trans1_at_corner = true;
    if (!trans1_at_corner) extra_cost++;

    bool trans2_at_corner = false;
    for (ll c : corners) if (trans2 == c) trans2_at_corner = true;
    if (!trans2_at_corner) extra_cost++;
    
    int min_extra = 2;

    vector<vector<ll>> perms = {{L, W, L, W}, {L, L, W, W}};
    
    for (auto p : perms) {
        vector<ll> c = {0, p[0], p[0]+p[1], p[0]+p[1]+p[2], p[0]+p[1]+p[2]+p[3]};
        int current_extra = 0;
        
        bool t1 = false, t2 = false;
        for (ll val : c) {
            if (trans1 == val) t1 = true;
            if (trans2 == val) t2 = true;
        }
        if (!t1) current_extra++;
        if (!t2) current_extra++;
        
        min_extra = min(min_extra, current_extra);
    }

    cout << 4 + min_extra;
}

int main(){
    int t = 1;
    cin>>t;
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