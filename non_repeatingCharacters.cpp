//Second non-repeating character of a string
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abbcad";
    map<char,int> mp;
    for(int i=0; i<str.size(); i++) {
        if( mp.find(str[i]) != mp.end() ) {
            mp[ str[i] ]++;
        }
        mp.insert( { str[i],1 } );
    }
    string non_repeatingChars = "";
    for( int i=0; i<str.size(); i++ ) {
        if( mp[ str[i] ] == 1 ) {
            non_repeatingChars += str[i];
        }
    }
    cout<<non_repeatingChars[1]<<endl;
}
