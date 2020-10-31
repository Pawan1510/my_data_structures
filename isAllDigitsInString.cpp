#include<bits/stdc++.h>
using namespace std;
bool is_number(const string& s){
   for(int i = 0; i < s.length(); i++)//for each char in string,
      if(! (s[i] >= '0' && s[i] <= '9' || s[i] == ' ') ) return false;
      //if s[i] is between '0' and '9' of if it's a whitespace (there may be some before and after
      // the number) it's ok. otherwise it isn't a number.

   return true;
}
int main()
{
	string a = "69";
	if(is_number(a))
        cout<<"true";
    else
        cout<<"false";

	return 0;
}
