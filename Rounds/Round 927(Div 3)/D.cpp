#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        char trump;
        cin >> n >> trump;
        map<char, vector<string>> mp;
        for (int i = 0; i < n * 2; i += 1) {
            string card;
            cin >> card;
            mp[card[1]].push_back(card);
        }
        vector<char> suite{'C','D','H','S'};
        mp[trump].push_back("!");
        sort(mp[trump].begin(), mp[trump].end());
        vector<pair<string, string>> ans;
        bool ok = true;
        for (int i = 0; i < 4; i += 1) {
            if (suite[i] == trump || mp[suite[i]].size() == 0) continue;
            sort(mp[suite[i]].begin(), mp[suite[i]].end());
            if (mp[suite[i]].size() & 1) {
                if (mp[trump].size() > 1) {
                    mp[suite[i]].push_back(mp[trump].back());
                    mp[trump].pop_back();
                }  else {
                    ok = false;
                    break;
                }
            } 
            for (int l = 0, r = mp[suite[i]].size() - 1; l <= r; l++, r--) {
                ans.push_back({mp[suite[i]][l], mp[suite[i]][r]});
            }
        }
        if (mp[trump].size() % 2 == 0) {
            ok = false;
        } else {
            for (int l = 1, r = mp[trump].size() - 1; l <= r; l++, r--) {
                ans.push_back({mp[trump][l], mp[trump][r]});
            }
        }
        if (!ok) {
            cout << "IMPOSSIBLE" << '\n';
            continue;
        }
        for (auto c : ans) {
            cout << c.first << ' ' << c.second << '\n';
        }
    }
}