#include <iostream>
#include <cstring>

using namespace std;

void tradutor(string s)
{
	if(s == "brasil" || s == "portugal") cout << "Feliz Natal!" << '\n';
	else if(s == "alemanha") cout << "Frohliche Weihnachten!" << '\n';
	else if(s == "austria") cout << "Frohe Weihnacht!" << '\n';
	else if(s == "coreia") cout << "Chuk Sung Tan!" << '\n';
	else if(s == "espanha" || s == "argentina" || s == "chile" || s == "mexico") cout << "Feliz Navidad!" << '\n';
	else if(s == "grecia") cout << "Kala Christougena!" << '\n';
	else if(s == "estados-unidos" || s == "inglaterra" || s == "australia" || s == "antardida" || s == "canada") cout << "Merry Christmas!" << '\n';
	else if(s == "suecia") cout << "God Jul!" << '\n';
	else if(s == "turquia") cout << "Mutlu Noeller" << '\n';
	else if(s == "irlanda") cout << "Nollaig Shona Dhuit!" << '\n';
	else if(s == "belgica") cout << "Zalig Kerstfeest!" << '\n';
	else if(s == "italia" || s == "libia") cout << "Buon Natale!" << '\n';
	else if(s == "siria" || s == "marrocos") cout << "Milad Mubarak!" << '\n';
	else if(s == "japao") cout << "Merii Kurisumasu!" << '\n';
	else cout << "--- NOT FOUND ---" << '\n';
}

int main(int argc, char const *argv[])
{
	string s;

	while(getline(cin, s))
		tradutor(s);

	return 0;
}