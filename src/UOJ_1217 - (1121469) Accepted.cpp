#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

int main(){
    int n, day = 1, tmp, kgDay;
    double m, tot, kgs;

    scanf("%d", &n);
    tmp = n;

    while (n > 0) 
    {
        scanf("%lf", &m);
        tot += m;
        string s, t;

        do {
            getline(cin, s);
        } while (s.size() == 0);
        
        stringstream ss;
        ss << s; kgDay = 0;

        while (ss >> t)
            kgDay++;
        
        printf("day %d: %d kg\n", day, kgDay);
        kgs += kgDay;
        n--; day++;
    }

    if(tmp != 0)
        printf("%.2lf kg by day\nR$ %.2lf by day\n", kgs/tmp, tot/tmp);
	
	return 0; 
}