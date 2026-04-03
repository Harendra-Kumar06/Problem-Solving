#include<bits/stdc++.h>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define cin(v) for(auto &x : v)cin >> x
#define cin_2D(v) for(auto &row : v) for(auto &x : row)cin>>x
#define cout(v) for(auto& x : v)cout << x << " ";
#define cout_2D(v) for(auto& row : v) { for(auto x : row) cout << x << ' '; cout << '\n'; }
#define sz(v) (int)(v.size())
#define vi vector<int>
#define vvi vector<vi>
#define vec_max(v) *max_element(all(v))
#define vec_min(v) *min_element(all(v))
#define lb(v, x) distance((v).begin(), lower_bound(all(v), (x)))
#define ub(v, x) distance((v).begin(), upper_bound(all(v), (x)))
#define unique(v) sort(all(v)), v.erase(unique(all(v)), v.end()), v.shrink_to_fit()

#define for0(i, a) for (int i = 0; i < (a); ++i)
#define for1(i, a, b) for (int i = a; i < (b); ++i)
#define for2(i, a, b, c) for (int i = a; i < (b); i += (c))
#define for0_r(i, a) for (int i = (a)-1; i >= (0); --i)
#define for1_r(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define for2_r(i, a, b, c) for (int i = b; i < (a); i -= (c))
#define py cout<<"YES"
#define pn cout<<"NO"

int max2D(const vector<vector<int>>& v) {
    int mx = INT_MIN;
    for (auto &row : v)
        mx = max(mx, *max_element(all(row)));
    return mx;
}
int min2D(const vector<vector<int>>& v) {
    int mn = INT_MAX;
    for (auto &row : v)
        mn = min(mn, *min_element(all(row)));
    return mn;
}

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    vi v(n);
    cin(v);
    int ans=INT_MAX;
    for0(i,n){
        ans = min(ans, abs(v[i]-0));
    }
    cout<<ans;

}

int main(){
    int t=1;
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

