#include <cstdio>
#include <cstring>
#include <utility>
#include <cctype>

using namespace std;

#define st first
#define nd second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define fr(i, a, n) for(int i = (a); i < (n); i++)

typedef pair<int,int> pi; 

bool invExp;
char s[2000220];
int divZero = 0, sz, r;

pi func(int p);
int op(int a, int b, char ch);

int main (int argc, char const* argv[])
{	
	while(gets(s)) 
	{
		invExp = true, divZero = false, sz = strlen(s);
		pi r = func(0);
		
		if(!invExp || r.nd != sz) puts("Invalid expression.");
		else if(divZero) puts("Division by zero.");
		else printf("The answer is %d.\n", r.st);
	}
	
	return 0;
}

int op(int a, int b, char ch)
{
	if(ch == '-') return b - a;
	else if(ch == '+') return b + a;
	else if(ch == '*') return a * b;
	else{ if(!a) { divZero = 1; return 1; } return b / a; }
}

pi func(int p)
{
	if(p >= sz) return mp(0, -1);
	if(s[p] ==' ') return func(p + 1);
	if(isdigit(s[p])) return mp(s[p] - '0', p + 1);
	
	pi p1 = func(p + 1);	
	
	if(p1.nd == -1 || !invExp){
		invExp = 0;
		return mp(-1, -1); 
	}
	
	pi p2 = func(p1.nd);
	r = op(p1.st, p2.st, s[p]);

	return mp(r, p2.nd);
}