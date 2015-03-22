#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

#define pb push_back
#define sc1(a) scanf("%d", &a)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

typedef long long ll;
typedef vector<int> vi;

vi consoantes, vogais;
int onde[100005];
char word[100005];
int sz;

bool isv(char ch){ return ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u';}

void extract()
{
	for(i,0,sz){
		if(isv(word[i])) {
			vogais.pb(i);
			onde[i] = vogais.size()-1; 
		}else{
			consoantes.pb(i);
			onde[i] = consoantes.size()-1;
		}
	}
}

int main (void) 
{
	int t, w, p, d, aux, q, a, b, coff, voff, cnt = 1;
	char ch;
	sc1(t);

	while(t--)
	{
		consoantes.clear(); vogais.clear();
		coff=0, voff=0;
		scanf("%s", word);
		sz = strlen(word);
		extract();

		printf("Caso #%d:\n", cnt); cnt++;
		sc1(q);
		
		while(q--)
		{
			sc1(a);
			if(a == 0 || a == 1) 
				sc1(b);

			if(a == 0){
				if(vogais.size() >=  1)
					voff = (voff+b)%vogais.size();
			}else if (a == 1){
				if(consoantes.size() >= 1)
					coff = (coff+b)%consoantes.size();
			}else{
				for(i,0,sz){
					ch = word[i];
					
					if(isv(ch)){
						p = onde[i];
						aux = vogais.size();
						
						if(aux){
							d = (p-voff);
							if(d < 0) 
								d += vogais.size() ;
						}else{
							 d = p;
						}
						
						d = vogais[d];
						ch = word[d];
					}else{
						p = onde[i];
						aux = consoantes.size();
						
						if(aux){
							d = (p-coff)%aux;
							if(d < 0) 
								d += consoantes.size();		
						}else{
							 d = p;
						}
						
						d = consoantes[d];
						ch = word[d];	
					}
					printf("%c", ch);
				}

				printf("\n");
			}
		}	
	}
	return 0;
}