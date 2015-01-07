#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

string arr[51];
int x;

bool compare(string a, string b) { return (a.length() <= b.length()); }

void split(string word)
{
	int size = word.length();
	int i = 0, x = 0, j = 0;
	string s;

	while(i <= size)
	{
		if(word[i] == ' ' || word[i] == '\0'){
			s = word.substr(j, i - j);
			arr[x] = s;
			j = i + 1;
			x++;
		}
		i++;
	}

	stable_sort(arr, arr + x, compare);
	reverse(arr, arr + x);

	for (i = 0; i < x; ++i)
	{
		cout << arr[i];
		if(i != (x - 1))
			cout << " ";
	}

	cout << endl;
}

int main(int argc, char const *argv[])
{
	int n, i;
	string word;

	cin >> n; cin.ignore();

	while(n--)
	{
		getline(cin, word);
		split(word);
	}

	return 0;
}