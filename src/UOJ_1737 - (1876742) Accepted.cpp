#include <cstdio>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>

#define sc1(a) scanf("%d", &a)
#define fr(i,a,n) for(int i = (a); i < (n); i++)

using namespace std;

typedef map<string, int> MSI;
typedef multimap<int, string, greater<int> > MMIS;

MSI dic;
MMIS freq;

MSI::const_iterator dicIt;
MMIS::const_iterator freqIt;

int main(int argc, char const *argv[])
{
	int n, i, sz;
	string s, line, d;
	
	while(sc1(n) && n)
	{
		getchar();
		s = "";

		while(n--)
		{
			getline(cin,line);
			s.append(line);
		}
		
		dic.clear();
		sz = (s.length() - 1);
		
		fr(i,0,sz)
		{
			d = s[i];
			d += s[i+1];
			if(dic.find(d) == dic.end()) dic.insert(MSI::value_type(d,1));
			else dic[d]++;
		}

		freq.clear();
		
		for(dicIt = dic.begin(); dicIt != dic.end(); ++dicIt)
			freq.insert(MMIS::value_type(dicIt->second,dicIt->first));
		
		cout.setf(ios::fixed);
		cout.precision(6);
		
		for(freqIt = freq.begin(), i = 0; freqIt != freq.end(), i<5; ++freqIt, ++i)
			cout << freqIt->second << " " << freqIt->first << " " << freqIt->first/double(s.length()-1) << endl;

		printf("\n");
	}
}