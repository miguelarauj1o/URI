#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, n, p, val;
	string line, sub;
	cin >> t;

	for (int i = 0; i < t; ++i)
	{
		cin >> n;
		int array[n + 1];
		p = 0;
		cin.ignore();

		for (int j = 0; j < n; ++j)
		{
			getline(cin, line);

			if(line == "LEFT"){
				array[j + 1] = -1;
			}else if(line == "RIGHT"){
				array[j + 1] = 1;
			}else{
				sub = line.substr(8);
				val = stoi( sub );
				array[j + 1] = array[val];
			}
		}

		for (int j = 1; j < (n + 1); ++j)
			p += array[j];	

		cout << p << '\n';
	}
	return 0;
}