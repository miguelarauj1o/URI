#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int n, sizeA, sizeB, tmp;
	string a, b;
	bool check;

	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		check = true;
		cin >> a >> b;
		sizeA = a.length(); sizeB = b.length();
		char arrayA[sizeA + 1]; char arrayB[sizeB + 1];

		if(sizeA < sizeB){
			puts("nao encaixa");
			continue;
		}

		for (int i = 0; i < sizeA; ++i)
			arrayA[i] = a.at(i);
			
		for (int i = 0; i < sizeB; ++i)
			arrayB[i] = b.at(i);

		tmp = sizeA - sizeB;

		for (int i = 0; tmp < sizeA; ++tmp, ++i)
		{
			if(arrayA[tmp] != arrayB[i]){
				check = false;
				break;
			}
		}

		if(check == true){
			puts("encaixa");
		}else{
			puts("nao encaixa");
		}
	}

	return 0;
}