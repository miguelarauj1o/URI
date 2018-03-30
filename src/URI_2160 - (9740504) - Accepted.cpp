#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  getline(cin, s);
  if (s.length() <= 80) puts("YES");
  else puts("NO");
  return 0;
}
