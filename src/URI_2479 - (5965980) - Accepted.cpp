#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, a = 0, b = 0;
    char c;
    string str;
    vector<string> v;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c >> str;
        (c == '+') ? a++ : b++;
        v.push_back(str);
    }
    
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        cout << v.at(i) << endl;
    cout << "Se comportaram: " << a << " | Nao se comportaram: " << b << endl;
    return 0;
}