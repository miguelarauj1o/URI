#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
	double a, b, c, d;
	
	while(scanf("%lf %lf %lf", &a, &b, &c) > 0){
		d = sqrt( pow(12.0 , 2.0) + pow(a, 2.0));
		if( (12.0/b) >= (d / c) ) puts("S");
		else puts("N");
	}

}