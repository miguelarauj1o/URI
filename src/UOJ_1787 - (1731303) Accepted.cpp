#include <cstdio>
#include <cmath>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define sc3(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

bool pow2(int x) { return (x != 0) && ((x & (x - 1)) == 0);}

int biggest(int x, int y, int z){ return fmax(fmax(x, y), z);}

int main(void)
{
	bool b;
	int n, ui, ri, li, _ui, _ri, _li;

	while(sc1(n) && n)
	{
		b = false;
		_ui = _ri = _li = 0;

		for(i,0,n)
		{
			sc3(ui,ri,li);

			if(pow2(ui)){
				if(biggest(ui, ri, li) == ui) _ui += 2;
				else _ui++;
			}

			if(pow2(ri)){
				if(biggest(ui, ri, li) == ri) _ri += 2;
				else _ri++;	
			}

			if(pow2(li)){
				if(biggest(ui, ri, li) == li) _li += 2;
				else _li++;
			}
		}

		if(biggest(_ui, _ri, _li) == _ui && _ui != _ri && _ui != _li){
			printf("Uilton\n");
			b = true;
		} 
		
		if(biggest(_ui, _ri, _li) == _ri && _ri != _ui && _ri != _li){
			printf("Rita\n");
			b = true;
		}

		if(biggest(_ui, _ri, _li) == _li && _li != _ri && _li != _ui){
			printf("Ingred\n");
			b = true;
		}

		if(!b) printf("URI\n");
	}

	return 0;
}