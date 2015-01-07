#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	int size;

	while(getline(cin, s))
	{
		size = s.length();

		for (int i = 0; i < size; ++i)
		{
			if(s[i] == '1'){
				cout << '`';
			}
			if(s[i] == '2'){
				cout << '1';
			}
			if(s[i] == '3'){
				cout << '2';
			}
			if(s[i] == '4'){
				cout << '3';
			}
			if(s[i] == '5'){
				cout << '4';
			}
			if(s[i] == '6'){
				cout << '5';
			}
			if(s[i] == '7'){
				cout << '6';
			}
			if(s[i] == '8'){
				cout << '7';
			}
			if(s[i] == '9'){
				cout << '8';
			}
			if(s[i] == '0'){
				cout << '9';
			}
			if(s[i] == '-'){
				cout << '0';
			}
			if(s[i] == '='){
				cout << '-';
			}
			if(s[i] == 'Q'){
				cout << '=';
			}
			if(s[i] == 'W'){
				cout << 'Q';
			}
			if(s[i] == 'E'){
				cout << 'W';
			}
			if(s[i] == 'R'){
				cout << 'E';
			}
			if(s[i] == 'T'){
				cout << 'R';
			}
			if(s[i] == 'Y'){
				cout << 'T';
			}
			if(s[i] == 'U'){
				cout << 'Y';
			}
			if(s[i] == 'I'){
				cout << 'U';
			}
			if(s[i] == 'O'){
				cout << 'I';
			}
			if(s[i] == 'P'){
				cout << 'O';
			}
			if(s[i] == '['){
				cout << 'P';
			}
			if(s[i] == ']'){
				cout << '[';
			}
			if(s[i] == '\\'){
				cout << ']';
			}
			if(s[i] == 'A'){
				cout << '\\';
			}
			if(s[i] == 'S'){
				cout << 'A';
			}
			if(s[i] == 'D'){
				cout << 'S';
			}
			if(s[i] == 'F'){
				cout << 'D';
			}
			if(s[i] == 'G'){
				cout << 'F';
			}
			if(s[i] == 'H'){
				cout << 'G';
			}
			if(s[i] == 'J'){
				cout << 'H';
			}
			if(s[i] == 'K'){
				cout << 'J';
			}
			if(s[i] == 'L'){
				cout << 'K';
			}
			if(s[i] == ';'){
				cout << 'L';
			}
			if(s[i] == '\''){
				cout << ';';
			}
			if(s[i] == 'Z'){
				cout << '\'';
			}
			if(s[i] == 'X'){
				cout << 'Z';
			}
			if(s[i] == 'C'){
				cout << 'X';
			}
			if(s[i] == 'V'){
				cout << 'C';
			}
			if(s[i] == 'B'){
				cout << 'V';
			}
			if(s[i] == 'N'){
				cout << 'B';
			}
			if(s[i] == 'M'){
				cout << 'N';
			}
			if(s[i] == ','){
				cout << 'M';
			}
			if(s[i] == '.'){
				cout << ',';
			}
			if(s[i] == '/'){
				cout << '.';
			}
			if(s[i] == ' '){
				cout << " ";
			}
		}

		cout << endl;
	}

	return 0;
}