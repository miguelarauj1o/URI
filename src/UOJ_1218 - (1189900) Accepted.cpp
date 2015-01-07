#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

// int main()
// {
// 	int n, size, number, count = 1;
// 	string s, num, tipo;
// 	size_t found;

// 	while(scanf("%i", &n) != EOF)
// 	{
// 		cin.ignore();
// 		getline(cin, s);
// 		int masc[45] = {0}; int femi[45] = {0};
// 		size = s.size();

// 		for (int i = 0; i < size; i += 5)
// 		{
// 			found = s.find(" ");
// 			num = s.substr(0, found);
// 			s = s.substr(found + 1);

// 			found = s.find(" ");
// 			tipo = s.substr(0, found);
// 			s = s.substr(found + 1);

// 			number = atoi(num.c_str());
// 			if(tipo == "M"){
// 				masc[number]++;
// 			}else{
// 				femi[number]++;
// 			}
// 		}

// 		cout << "Caso " << count << ":" << endl;
// 		cout << "Pares Iguais: " << (masc[n] + femi[n]) << endl;
// 		cout << "F: " << femi[n] << endl << "M: " << masc[n];
// 		count++;
		
// 		if(scanf("%i", &n) != EOF){
// 			cout << endl << endl;
// 		}
// 	}

// 	return 0;
// }

int main()
{
	int n, size, number, count = 1;
   	string s, num, tipo;
   	size_t found;

   	bool p = false;
   	while(scanf("%i", &n) != EOF)
   	{
   		if(p) cout << endl;
    	p = true;
    	cin.ignore();
		getline(cin, s);
		int masc[45] = {0}; int femi[45] = {0};
		size = s.size();

		for (int i = 0; i < size; i += 5)
		{
			found = s.find(" ");
			num = s.substr(0, found);
			s = s.substr(found + 1);

			found = s.find(" ");
			tipo = s.substr(0, found);
			s = s.substr(found + 1);

			number = atoi(num.c_str());
			if(tipo == "M"){
				masc[number]++;
			}else{
				femi[number]++;
			}
		}

    	cout << "Caso " << count << ":" << endl;
      	cout << "Pares Iguais: " << (masc[n] + femi[n]) << endl;
      	cout << "F: " << femi[n] << endl << "M: " << masc[n];
      	count++;
      
      	cout << endl;
   	}

  	return 0;
}