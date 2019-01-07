#include <iostream>
using namespace std;

const char *output =
	"Valores de b:\n"
	"-------------\n"
	"1) b = 7\n"
	"2) b =                    7\n"
	"3) b = 00000000000000000007\n"
	"4) b = 7                   \n"
	"5) b = 7%\n"
	"\n"
	"Valores de d:\n"
	"-------------\n"
	"1) d = 2.208000\n"
	"2) d = 2\n"
	"3) d = 2.2\n"
	"4) d = 2.21\n"
	"5) d = 2.208\n"
	"6) d =                2.208\n"
	"7) d = 0000000000000002.208\n"
	"8) d = 2.208               \n"
	"9) d = 2.21%\n";

int main() {
	cout << output;
	return 0;
}