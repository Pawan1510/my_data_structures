// C++ program to check if two given strings 
// are rotations of each other 
/*
find function: 
            String find is used to find the first occurrence of sub-string in the specified string being called upon.
            It returns the index of the first occurrence of the substring in the string from given starting position.
            The default value of starting position is 0.
 npos:
      The function returns the index of the first occurrence of sub-string,
      if the sub-string is not found it returns string::npos(string::pos is static member with value as
      the highest possible for the size_t data structure).
*/
# include <bits/stdc++.h> 
using namespace std; 

/* Function checks if passed strings (str1 
and str2) are rotations of each other */
bool areRotations(string str1, string str2) 
{ 
/* Check if sizes of two strings are same */
if (str1.length() != str2.length()) 
		return false; 

string temp = str1 + str1; 
return (temp.find(str2) != string::npos); 
} 

/* Driver program to test areRotations */
int main() 
{ 
string str1 = "AACD", str2 = "ACDA"; 
if (areRotations(str1, str2)) 
	printf("Strings are rotations of each other"); 
else
	printf("Strings are not rotations of each other"); 
return 0; 
} 
