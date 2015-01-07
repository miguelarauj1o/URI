#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n, d, x, tmp;

	while(cin >> n && n != 0)
	{
        int matriz[n][n];
        d = 1;
        x = 0;
                     
        for(int i = 0; i < n; ++i){
            for(int j = x; j < n; ++j){
                    matriz[i][j] = d;
                    d++;
            }
            x++;
            d = 1;
        }
         
        d = 2;
        tmp = n - 2;
        for(int i = n-1; i > 0; i--){
            for(int j = tmp;j >= 0; j--){
                matriz[i][j] = d;
                d++;
            }
            tmp--;
            d = 2;
        }
         
        for(int i = 0; i < n; i++){
           for(int j = 0; j < n; j++){
              if(j == n - 1){      
                printf("%3d", matriz[i][j]);
                printf("\n");
              }else{
                printf("%3d ", matriz[i][j]); 
              }
           }
        }
        printf("\n");	
    }

	return 0;
}