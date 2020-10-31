/*
This code is for removing duplicates from an array in-place
*/
#include<bits/stdc++.h>
using namespace std;
printArray( vector<int> &arr, int n )
{
    cout<<endl;
    for(int i=0; i<n; i++)  cout<<arr[i]<<" ";
    cout<<endl;
}
int removeDuplicates( vector<int> &arr, int n )
{
    sort(arr.begin(), arr.end());
    return unique( arr.begin(), arr.end() ) - arr.begin();
}
int main()
{
    vector<int> arr = { 1, 2, 7, 3, 2, 8, 3, 2, 7, 1, 2, 9 };
    int n = arr.size();
    int res = removeDuplicates(arr,n);
    printArray(arr,res);
    
    return 0;
}
