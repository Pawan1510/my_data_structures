/*
How do you reverse an array in place?
*/
#include<bits/stdc++.h>
#define sizeOfArray 5 //Size of the array
using namespace std;

void swap(int* a, int* b)
{
  *a ^= *b;
  *b ^= *a;
  *a ^= *b;

  return;
}

int main(void) {

  int arr[sizeOfArray] = {0, 1, 2, 3, 4};

/* Start the algorithm from both ends */
  int *begin = arr, *end = arr + sizeOfArray - 1;

/* Algorithm stops when two ends meet */
  while(begin < end)
        swap(begin++, end--);

    for(int i=0; i<sizeOfArray; i++) cout<<arr[i]<<" ";

  return 0;
}
