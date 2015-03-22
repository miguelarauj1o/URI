#include <iostream>
#include <cstring>
#include <string>
#include <map>
 
using namespace std;

#define sc1(a) scanf("%s", &a)
#define sc2(a,b) scanf("%d %d", &a, &b)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

bool isv(char ch){return ch == 'a' || ch == 'e' || ch =='i' || ch =='o' || ch == 'u';}
bool is3(char ch){return ch == 'o' || ch == 's' || ch =='ch' || ch =='sh' || ch == 'x';}
bool is4(char ch1, char ch2){return (ch1 == 'c' && ch2 == 'h') || (ch1 == 's' && ch2 == 'h');}


int main(void)
{
	char c, ca;
	int l, n, sz;
	string key, value, tmp;
	map<string,string> map;

	while(sc2(l,n) == 2)
	{
		map.clear();
		cin.ignore();

		for(i,0,l)
		{
			cin >> key >> value;
			map.insert(pair<string,string>(key,value));
		}

		cin.ignore();

		for(i,0,n)
		{
			cin >> key;
			sz = key.length();
			c = key[sz-1], ca = key[sz-2];
			
			if(!(map.find(key) == map.end())) cout << map[key] << '\n';
			else if(!(isv(ca)) && c == 'y'){
				tmp = key.substr(0,sz-1);
				cout << tmp << "ies" << '\n';
			}else if(is3(c) || is4(ca,c)) cout << key << "es" << '\n';
			else cout << key << "s" << '\n';
		}
	}

	return 0;
}