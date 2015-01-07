#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

long long int ale(int n, int k)
{
	long long int total = n;
	int i = 1;

	while(n - (i * k) >= 1)
	{
		total *= (n - (i * k));
		i++;
	}
	return total;
}

int main(int argc, char const *argv[])
{
	int n, x, size;
	long long int sum;
	string s;
	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%i", &x);
		getline(cin, s);
		size = s.length();
		sum = ale(x, size);
		printf("%lli\n", sum);
	}
	return 0;
}