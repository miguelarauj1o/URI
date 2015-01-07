#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

char digit_hex(int x)
{
    if(x >= 0 && x < 10) return (x + '0');
    else if (x < 16) return (x - 10 + 'a');
    else return '!';
}

string tobin(int x)
{
    string tmp;
    char c;
    while(x > 0)
    {
        c = x % 2 + '0';
        tmp = c + tmp;
        x /= 2;
    }
    return tmp;
}

string tohex(int x)
{
    string tmp;
    while(x > 0)
    {
        tmp = digit_hex(x % 16) + tmp;
        x /= 16;
    }
    return tmp;
}

void bin(char * c, string s)
{
    int x = strtol(c, 0, 2);
    cout << x << " dec" << endl;
    cout << tohex(x) << " hex" << endl;
}

void dec(char * c, string s)
{
    int x = strtol(c, 0, 10);
    cout << tohex(x) << " hex" << endl;
    cout << tobin(x) << " bin" << endl;
}

void hex(char * c, string s)
{
    int x = strtol(c, 0, 16);
    cout << x << " dec" << endl;
    cout << tobin(x) << " bin" << endl;
}

int main(int argc, char const *argv[])
{
    int n, count = 1;
    char c[50];
    string s;

    cin >> n;

    while(n--)
    {
        cin >> c >> s;
        cout << "Case " << count << ":" << endl;

        if(s == "bin"){
            bin(c, s);
        }else if(s == "dec"){
            dec(c, s);
        }else{
            hex(c, s);
        }

        count++;
        cout << endl; 
    }
    return 0;
}