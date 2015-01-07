#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <string.h>
#include <set>

using namespace std;

vector<string> v;
set<string> ss;

int main(int argc, char const *argv[])
{
	int l, i;
	char s[10005];
	char * pch;

	while(scanf("%s", s) == 1)
	{
		getchar();
		l = strlen(s);

		if(!l)
			continue;

		for (i = 0; i < l; ++i)
		{
			s[i] = tolower(s[i]);
			if(s[i] < 'a' || s[i] > 'z')
				s[i] = 32;	
		}

		pch = strtok(s, " ");

		while(pch != NULL)
		{
			if(strlen(pch) != 0)
				ss.insert(pch);
			pch = strtok(NULL, " ");
		}
	}

	set<string>::iterator it;
	for(it = ss.begin(); it != ss.end(); it++){
		printf("%s\n", (*it).c_str() );
	}

	return 0;
}