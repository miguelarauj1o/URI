#include <iostream>
using namespace std;

int main() {
	int x;
	int a = 0, g = 0, d = 0;
	
	cin >> x;
	
	while(x != 4)
	{
		if(x == 1){
			a++;
		}else if(x == 2){
			g++;
		}else if(x == 3){
			d++;
		}else{
		}	
		
		cin >> x;
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;
	
	return 0;
}