#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  getline(cin, s);
  if (s.length() <= 140) puts("TWEET");
  else puts("MUTE");
  return 0;
}
