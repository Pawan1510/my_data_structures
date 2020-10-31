/*
                                Quick Sort
*/
#include<bits/stdc++.h>
using namespace std;
void swap( int *a, int *b )
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSort( int arr[], int l, int r )
{
    if( l >= r )
        return;
    int pivot = arr[r];
    int cnt = l;
    for( int i=l; i<=r; i++ )
    {
        if( arr[i] <= pivot ) {
            swap( &arr[cnt], &arr[i] );
            cnt++;
        }
    }
    quickSort( arr, l, cnt-2 );
    quickSort( arr, cnt, r );
}
void printArray( int arr[], int n )
{
    cout<<endl;

    for( int i=0; i<n; i++ )
        cout<<arr[i]<<" ";

    cout<<endl;
}
int main()
{
    int arr[] = { 6, 2, 4, 7, 1, 2, 6, 9, 5 };
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort( arr, 0, n-1 );
    printArray( arr, n );

    return 0;
}
