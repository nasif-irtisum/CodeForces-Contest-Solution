#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, max_cnt = 0;
        for (int i=0; i<s.size(); i++) {
            if ('#'==s[i]) {
                cnt++;
                max_cnt = max (max_cnt, cnt);
            }
            else cnt =0;
        }
        cout << (ceil)((double)max_cnt/2) << endl;
    }
}
