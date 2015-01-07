#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, tam, counter, tmp;
	char c;

	while(cin >> n)
	{
		vector<int> vec_e(61);
		vector<int> vec_d(61);
		counter = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> tam >> c;

			if(c == 'D'){
				vec_d[tam]++;
			}else{
				vec_e[tam]++;
			}
		}

		for (int i = 30; i < 61; ++i)
		{
			if(vec_e[i] != 0 && vec_d[i]){
				if(vec_e[i] == vec_d[i]){
					counter += vec_e[i];
				}else{
					if(vec_e[i] < vec_d[i]){
						counter += vec_e[i];	
					}else{
						counter += vec_d[i];
					}
				}
			}
		}

		cout << counter << endl;
	}

	return 0;
}