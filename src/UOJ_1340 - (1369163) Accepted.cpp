#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, x, y;
	bool _p, _q, _s;

	while(scanf("%d", &n) != EOF){
		priority_queue<int> p;
		queue<int> q;
		stack<int> s;
		_p = true, _q = true, _s = true; 

		for (int i = 0; i < n; ++i)
		{
			scanf("%d %d", &x, &y);
			if(x == 1){
				p.push(y);
				q.push(y); 
				s.push(y);
			}else{
				if(p.top() != y) _p = false;
				if(q.front() != y) _q = false;
				if(s.top() != y) _s = false;
				p.pop(); q.pop(); s.pop();
			}
		}

		if((_p && _q && _s) || (!_p && _q && _s) || (_p && !_q && _s) || (_p && _q && !_s)) printf("not sure\n");
		else if (_p && !_q && !_s) printf("priority queue\n");
		else if (!_p && _q && !_s) printf("queue\n");
		else if (!_p && !_q && _s) printf("stack\n");
		else printf("impossible\n");
	}

	return 0;
}