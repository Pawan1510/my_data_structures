#include <bits/stdc++.h> 
using namespace std; 
  
int getSum(int X[], int n) 
{ 
    int sum = 0; 
    for (int i = 0; i < n; i++) 
        sum += X[i]; 
    return sum; 
} 
  
int getTarget(int A[], int n, int B[], int m) 
{ 
    int sum1 = getSum(A, n); 
    int sum2 = getSum(B, m); 
  
    if ((sum1 - sum2) % 2 != 0) 
        return 0; 
    return ((sum1 - sum2) / 2); 
} 
  
void findSwapValues(int A[], int n, int B[], int m) 
{ 
    sort(A, A + n); 
    sort(B, B + m); 
  
    int target = getTarget(A, n, B, m); 
    
    if (target == 0) 
        return; 
  
    int i = 0, j = 0; 
    while (i < n && j < m) { 
        int diff = A[i] - B[j]; 
        if (diff == target) { 
            cout << A[i] << " " << B[j]; 
            return; 
        } 
        else if (diff < target) 
            i++; 
  
        else
            j++; 
    } 
} 

int main() 
{ 
    int A[] = { 1, 1, 3, 3 }; 
    int n = sizeof(A) / sizeof(A[0]); 
  
    int B[] = { 3, 2, 5 }; 
    int m = sizeof(B) / sizeof(B[0]); 
  
    findSwapValues(A, n, B, m); 
    return 0; 
} 
