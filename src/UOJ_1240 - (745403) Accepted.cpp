#include <iostream>
#include <stack>

using namespace std;

void check(stack<char> a, stack<char> b)
{
   while (1)
   {
      if (a.empty() && !b.empty())
      {
         cout << "nao encaixa" << endl;
         break;
      }

      else if (!a.empty() && b.empty())
      {
         cout << "encaixa" << endl;
         break;
      }

      else if (a.empty() && b.empty())
      {
         cout << "encaixa" << endl;
         break;
      }

      if (a.top() != b.top())
      {
         cout << "nao encaixa" << endl;
         break;
      }

      a.pop();
      b.pop();
   }
}

int main()
{
   int n;
   cin >> n;

   for (int i = 0; i < n; ++i)
   {
      string line_a, line_b;
      cin >> line_a >> line_b;
      stack<char> a, b;

      for (int i = 0; i < line_a.size(); i++)
         a.push(line_a[i]);

      for (int i = 0; i < line_b.size(); i++)
         b.push(line_b[i]);

      check(a, b);
   }

   return 0;
}