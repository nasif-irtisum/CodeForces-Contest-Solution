#include <bits/stdc++.h>
using namespace std;
int  main ()
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int range = n;
        vector <long long> v;
        while (n--) {
            long long num; cin >> num;
            v.push_back(num);
        }
        bool flag = true;
        for (int i=0; i<range-1; i++) {
            if (v[i] > i+1) {
                v[i+1] += (v[i] - i - 1);
                v[i] = i+ 1;
            }
            if (v[i]>=v[i+1]) flag = false;
        }
        (flag)? cout << "YES" << endl : cout << "NO" << endl;
    }
}
