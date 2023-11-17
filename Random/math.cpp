#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> sequence;
    int n = 40, m = 50;
    for (int i = 0; i < n; i++) { //push 40 50s in the vector(sequence)
        int x = 50;
        sequence.push_back(x);
    }
    for (int i = 0; i < m; i++) {
        int x = 40;
        sequence.push_back(x);
    }
    bool ok = true;
    while (sequence.size() > 1) {
        sort(sequence.begin(), sequence.end(), greater<int>()); //sort sequence in descending order
        for (int i = 1; i < sequence[0]; i++) {
            sequence[i] -= 1; //subtract 1 to the next sequence[i] elements
            if (sequence[i] < 0) ok = false;
        }
        sequence.erase(sequence.begin()); //remove first element after subtracting to the ith + 1 to a[i]th position
        if (!ok) break;
    }
    if (ok) cout << "GRAPHICAL" << '\n';
    else cout << "NOT GRAPHICAL" << '\n';
} 