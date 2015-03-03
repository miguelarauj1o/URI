#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <cctype>

#define for(i, n) for(int i = 0; i < (n); ++i)
 
using namespace std; 
 
int main(int argc, char const *argv[])
{
	int num, t, qtd, aux, cm;
	string frase;
	bool b;
 
	while(getline(cin,frase))
	{ 
		t = frase.size(); 
		num = qtd = 0;
		string token;
		istringstream iss(frase);

		while ( getline(iss, token, ' ') )
		{
			b = false;
			t = token.size(); 
			aux = 0;
 
			for(i, t)
			{
				if(isdigit(token[i]) || token[i] == '.' && i != t-1){
					b = true;
					break; 
				}else if(token[i] == '.'){
				}else aux++;
			} 
			
			if(!b){
				num += aux;
				qtd++;
			}
		}

		(qtd == 0) ? cm = 0 : cm = num/qtd;

		if(cm <=3) puts("250");
		else if(cm == 4 || cm == 5 ) puts("500");
		else puts("1000");
	} 
}