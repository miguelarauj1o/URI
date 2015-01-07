#include <cstdio>

int main()
{
	int a;
	int b;
	int c;
	int d;

	scanf("%i", &a);
	scanf("%i", &b);
	scanf("%i", &c);
	scanf("%i", &d);

	if(b > c){
		if(d > a){
			if((c + d) > (a + b)){
				if(c > 0){
					if(d > 0){
						if(a % 2 == 0){
							printf("Valores aceitos\n");				
						}
					}
				}
			}
		}
	}else{
		printf("Valores nao aceitos\n");
	}

	return 0;
}