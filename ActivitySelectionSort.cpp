#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<pair<int, int>>v(n);
    for (int i = 0; i < n; i++) {
        cin >>v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    int ans = 0, lastEnd = -1;
    for (int i = 0; i < n; i++) {
        if (v[i].second > lastEnd) {
            ans++;
            lastEnd = v[i].first;
        }
    }
    cout << ans << "\n";
    return 0;
}
