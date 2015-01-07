#include <iostream>
using namespace std;

int main()
{
	char c;
	int n, ti_1_ida, ti_1_vol, ti_2_ida, ti_2_vol;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> ti_1_ida >> c >> ti_2_ida;
		cin >> ti_2_vol >> c >> ti_1_vol;

		if((ti_1_ida + ti_1_vol) == (ti_2_ida + ti_2_vol)){
			
			if(ti_1_vol > ti_2_ida){
				cout << "Time 1" << endl;	
			}else if(ti_2_ida > ti_1_vol){
				cout << "Time 2" << endl;	
			}else{
				cout << "Penaltis" << endl;
			}
		}else if((ti_1_ida + ti_1_vol) > (ti_2_ida + ti_2_vol)){
			cout << "Time 1" << endl;
		}else{
			cout << "Time 2" << endl;
		}
	}

	return 0;
}