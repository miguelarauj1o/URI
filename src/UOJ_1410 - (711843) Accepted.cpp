#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int a, d, tmp;

	while((cin >> a >> d) && a != 0 && d != 0)
	{
		vector<int> forA;
		vector<int> forB;

		for (int i = 0; i < a; ++i)
		{
			cin >> tmp;
			forA.push_back(tmp);
		}

		for (int i = 0; i < d; ++i)
		{
			cin >> tmp;
			forB.push_back(tmp);
		}

		sort(forA.begin(), forA.begin() + a);
		sort(forB.begin(), forB.begin() + d);

		if(forA[0] < forB[1]){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}

	}

	return 0;
}