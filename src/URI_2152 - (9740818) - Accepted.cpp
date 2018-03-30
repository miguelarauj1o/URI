#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int n, h, m, o;
  cin >> n;
  while(n--) {
    cin >> h >> m >> o;
    if (h < 10) cout << "0";
    cout << h << ":";

    if (m < 10) cout << "0";
    cout << m << " - ";

    if (o) cout << "A porta abriu!" << endl;
    else cout << "A porta fechou!" << endl;
  }

  return 0;
}
