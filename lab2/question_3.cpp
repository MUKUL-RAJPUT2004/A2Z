#include <bits/stdc++.h>
using namespace std;

vector<string> greyCode(int n) {
    
    if (n == 1)
        return {"0", "1"};

    vector<string> prev = greyCode(n - 1);
    vector<string> result;

    for (int i = 0; i < prev.size(); i++)
        result.push_back(string("0") + prev[i]);

    for (int i = prev.size() - 1; i >= 0; i--)
        result.push_back(string("1") + prev[i]);

    return result;
}

int main() {
    int n;
    cin >> n;

    vector<string> ans = greyCode(n);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}