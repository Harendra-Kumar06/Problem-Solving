#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
using namespace std;

#define ll long long
#define ld long double

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

void solve(){
    ll n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        cout << i  ;
        if (i > 1) cout << ",";
    }
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