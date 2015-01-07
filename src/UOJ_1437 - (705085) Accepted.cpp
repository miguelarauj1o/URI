#include <iostream>
using namespace std;

int main()
{
	int n;
	char c, dir;
	
	while(cin >> n && n != 0)
	{
		dir = 'N';
		for(int i = 0; i < n; ++i)
		{
			cin >> c;
			
			if(c == 'D' && dir == 'N'){
				dir = 'L';
			}else if(c == 'E' && dir == 'N'){
				dir = 'O';
			}else if(c == 'D' && dir == 'O'){
				dir = 'N';
			}else if(c == 'E' && dir == 'O'){
				dir = 'S';
			}else if(c == 'D' && dir == 'L'){
				dir = 'S';
			}else if(c == 'E' && dir == 'L'){
				dir = 'N';
			}else if(c == 'D' && dir == 'S'){
				dir = 'O';
			}else{
				dir = 'L';
			}
		}
		cout << dir << endl;
	}
	
	return 0;
}