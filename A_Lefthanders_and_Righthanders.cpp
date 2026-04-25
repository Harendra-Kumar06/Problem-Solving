#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int x = n/2;
    for(int i = 0; i < x; i++){
        if(s[i] == 'R' && s[i+x] == 'L')
         cout << i+x+1 << " " << i+1 << endl;
        else cout << i+1 << " " << i+x+1 << endl;
    }
    return 0;
}
