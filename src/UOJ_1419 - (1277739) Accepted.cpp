#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, m, l, tmpM, tmpL, countL, countM;

	while(cin >> n && n)
	{
		int mark[n]; int leti[n];
		m = 0; l = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			m += x;
			mark[i] = x;
		}

		for (int i = 0; i < n; ++i)
		{
			cin >> x;
			l += x;
			leti[i] = x;
		}
		
		tmpM = mark[0]; tmpL = leti[0];
		countM = 1; countL = 1;
 		
		for (int i = 1; i < n; ++i)
		{
			if(tmpM == mark[i]){
				countM++;
			}else{
				tmpM = mark[i];
				countM = 1;
			}

			if(tmpL == leti[i]){
				countL++;
			}else{
				tmpL = leti[i];
				countL = 1;
			}

			if(countM == 3 || countL == 3){
				if(countM == countL)
					break;

				if(countM > countL){
					m += 30;
					break;
				}else{
					l += 30;
					break;
				}
			}
		}
		
		if(m > l) cout << "M" << endl;
		else if (m < l) cout << "L" << endl;
		else cout << "T" << endl;
	}
	return 0;
}