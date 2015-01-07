// http://www.urionlinejudge.com.br/judge/en/problems/view/1278
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
string left_trim( string s ) {
    return s.substr( s.find_first_not_of( " " ) );
}
 
string right_trim( string s ) {
    return s.substr( 0, s.find_last_not_of( " " ) + 1 );
}
 
string trim( string s ) {
    return right_trim( left_trim( s ) );
}
 
string remove_middle_spaces( string s ) {
    string r = "";
    string::iterator it;
    int spaces = 0;
     
    for( it = s.begin(); it != s.end(); it++ ) {
        if( *it != ' ' ) {
             
            if( spaces > 0 ) {
                r += " ";
                spaces = 0;
            }
             
            r += *it;
        }
        else {
            spaces += 1;
        }
    }
     
    return r;
}
 
int main() {
     
    short n;
    char c, a = '\0';
    bool primeiro = true;
     
    while( cin >> n && n != 0 ) {
        string *linhas = new string[ n ];
        cin.ignore();
        int max = 0;
         
        if( primeiro ) primeiro = false;
        else cout << endl;
         
        for( short i = 0; i < n; i++ ) {
            getline( cin, linhas[ i ] );
            linhas[ i ] = remove_middle_spaces( trim( linhas[ i ] ) );
             
            if( linhas[ i ].size() > max ) {
                max = linhas[ i ].size();
            }
        }
         
        for( short i = 0; i < n; i++ ) {
            cout << setw( max ) << linhas[ i ] << endl;
        }
    }
     
    return 0;
}