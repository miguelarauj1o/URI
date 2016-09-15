#include <stdio.h>
#include <string.h>

int main() {
	int i, c = 0;
	char s[200];
	scanf("%s", s);
	for (i = 0; s[i]; i++)
		if (s[i] == '1')
			c++;
			
	(c % 2 == 0) ? s[i] = '0' : s[i] = '1';
	s[i + 1] = '\0';
	printf("%s\n", s);
	return 0;	
}