#include <iostream>
using namespace std;

int main() {
	int x, y;
	int min, max;
	
	cin >> x >> y;
	
	if(x < y){
		min = x;
		max = y;
	}else{
		min = y;
		max = x;
	}
	
	for(int i = (min + 1); i < max; ++i)
	{
		if(i % 5 == 3)
			cout << i << endl;
		if(i % 5 == 2)
			cout << i << endl;
	}
	
	return 0;
}