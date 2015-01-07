#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdlib>

using namespace std;

int n, m, i, x;

bool comp(int a, int b)
{
	if((a % m) != (b % m)) return ((a % m) < (b % m));
	else if(abs(a % 2) == 0 && abs(b % 2) == 1) return false;
	else if(abs(a % 2) == 1 && abs(b % 2) == 0) return true;
	else if(abs(a % 2) == 1 && abs(b % 2) == 1) return (a > b);
	else return (a < b);
}

int main(int argc, char const *argv[])
{
	while(cin >> n >> m && (n || m)){
		int num[n];
				
		for(i = 0; i < n; i++)
		{
			cin >> x;
			num[i] = x;
		}
				
		sort(num, num + n, comp);
		
		cout << n << " " << m << '\n';
		for(i = 0; i < n; i++)
			cout << num[i] << endl;
	}

	cout << "0 0\n";
	return 0;
}