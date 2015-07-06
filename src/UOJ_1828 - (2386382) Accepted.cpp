#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	string a, b;
	cin >> n;
	cin.ignore();
	
	for (int i = 1; i <= n; ++i)
	{
		cin >> a >> b;
		if(a == b) printf("Caso #%d: De novo!\n", i);
		else if(a == "tesoura" && b == "papel") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "papel" && b == "pedra") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "pedra" && b == "lagarto") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "lagarto" && b == "Spock") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "Spock" && b == "tesoura") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "tesoura" && b == "lagarto") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "lagarto" && b == "papel") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "papel" && b == "Spock") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "Spock" && b == "pedra") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "pedra" && b == "tesoura") printf("Caso #%d: Bazinga!\n", i);
		else printf("Caso #%d: Raj trapaceou!\n", i);
	}
	return 0;
}