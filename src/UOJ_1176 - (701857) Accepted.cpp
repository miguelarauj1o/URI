#include <iostream>
#include <vector>
using namespace std;

void fibonacci(vector<long long int> &v)
{
	long long int case_0 = 0, case_1 = 1, next_case = 1;
	
	v.push_back(case_0);
	v.push_back(case_1);
	
	for(int i = 2; i < 61; ++i)
	{
		next_case = case_0 + case_1;
		v.push_back(next_case);
		case_0 = case_1;
		case_1 = next_case;
	}
}

int main()
{
	int t, x;
	vector<long long int> v;
	
	fibonacci(v);
	cin >> t;
	
	for(int i = 0; i < t; ++i)
	{
		cin >> x;
		cout << "Fib(" << x << ") = " << v[x] << endl;
	}
	
	return 0;
}