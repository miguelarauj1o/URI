#include <iostream>
#include <cstring>
#include <string>

#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

int main(int argc, char const *argv[])
{
	int sz, x, y, d;
	string s;

	while(getline(cin, s))
	{
		d = 2, x = 310, y = 420, sz = s.length();
		cout << (x - 10) << " " << y << " moveto" << '\n' << x << " " << y << " lineto" << '\n';

		for(i, sz)
		{
			if(s[i] == 'V'){
				if(d == 0){
					x -= 10;
					d = 3;
				}else if(d == 1){
					x += 10;
					d = 2;
				}else if(d == 2){
					y += 10;
					d = 0;
				}else{
					y -= 10;
					d = 1;
				}
				cout << x << " " << y << " lineto" << '\n';
			}else{
				if(d == 0){
					x += 10;
					d = 2;
				}else if(d == 1){
					x -= 10;
					d = 3;
				}else if(d == 2){
					y -= 10;
					d = 1;
				}else{
					y += 10; 
					d = 0;
				}
				cout << x << " " << y << " lineto" << '\n';
			}
		}

		cout << "stroke" << '\n' << "showpage" << '\n';
	}

	return 0;
}