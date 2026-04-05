class Solution {
public:
    long long c[55][55];

    void f() {
        for(int i = 0; i <= 50; i++) {
            c[i][0] = 1;
            c[i][i] = 1;
            for(int j = 1; j < i; j++) {
                c[i][j] = c[i-1][j-1]+c[i-1][j];
            }
        }
    }
    long long nthSmallest(long long n, int k) {
        f();
        long long res = 0;
        int t = k;
        for(int bit = 50; bit >= 0; bit--) {
            if(t == 0) break;
            long long cnt = c[bit][t];
            if (cnt < n) {
                n -= cnt;
                res |= (1LL << bit);
                t--;
            }
        }
        return res;
    }
};
