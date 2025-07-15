#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> substrings(n);
    for (int i = 0; i < n; ++i) {
        cin >> substrings[i];
    }
    string mainString;
    cin >> mainString;

    // Sort substrings by length in descending order
    sort(substrings.begin(), substrings.end(), [](const string &a, const string &b) {
        return a.size() > b.size();
    });

    int count = 0;
    for (const string& sub : substrings) {
        size_t pos = mainString.find(sub);
        while (pos != string::npos) {
            mainString.erase(pos, sub.length());
            count++;
            pos = mainString.find(sub);
        }
    }

    cout << count+1 << endl;
    return 0;
}
