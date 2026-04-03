class Solution {
public:
    long = solve(int l, int r, vector<int>& pre, int encCost, int flatCost) {
        int t = pre[r+1] - pre[l];
        int l = r - l + 1;

        = long res;
        if (t == 0) res = flatCost;
        else res = 1LL * l * t * encCost;
        if (l&1) return res;
        int mid = (l + r) / 2;
        long long splitCost = solve(l, mid, pre, encCost, flatCost) + solve(mid + 1, r, pre, encCost, flatCost);
        return min(cost, splitCost);
    }

    long long minCost(string s, int encCost, int flatCost) {
        int n = s.size();
        vector<int> pre(n+1,0);
        for (int i=0; i<n; i++) pre[i+1] = pre[i] + (s[i]=='1');
        return solve(0, n-1, pre, encCost, flatCost);
    }
};