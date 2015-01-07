#include <iostream>
using namespace std;

int main()
{
	int ho_i, ho_f, mi_i, mi_f;
	int ho_r, mi_r;
	bool ver_h = false, ver_m = false, ver_1 = false, ver_2 = false;
	
	while(cin >> ho_i >> mi_i >> ho_f >> mi_f)
	{
		if(ho_i == 0 && ho_f == 0 && mi_i == 0 && mi_f == 0)
			return 0;
		//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

		if(ho_i > ho_f)
			ver_h = true;

		if(mi_i > mi_f)
			ver_m = true;

		if(ho_i < ho_f && mi_i > mi_f)
			ver_1 = true;

		if(ho_i == ho_f && mi_i != mi_f && mi_i > mi_f)
			ver_2 = true;

		ho_i *= 60;
		ho_f *= 60;

		//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
		if(ver_h == true){
			ho_r = (1440 - ho_i) + ho_f;
		}else{
			ho_r = ho_f - ho_i;	
		}

		if(ver_m == true){
			mi_r = (60 - mi_i) + mi_f;
		}else{
			mi_r = mi_f - mi_i;	
		}

		if(ver_1 == true)
			ho_r -= 60;

		if(ver_h == true && ver_m == true)
			ho_r -= 60;

		if(ver_2 == true)
			ho_r += 1380;

		//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
		cout << (ho_r + mi_r) << endl;
		ver_h = false;
		ver_m = false;
		ver_1 = false;
		ver_2 = false;
	}
	
	return 0;
}