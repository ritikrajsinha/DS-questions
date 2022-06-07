#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int A[] = {1, 1, 9};
    int n = sizeof(A)/sizeof(A[0]);
  
    int B[] = {2, 12, 11, 11};
    int m  = sizeof(B)/sizeof(B[0]);
  
    /*Merging in sorted order*/
    int C[m + n];
    merge(A, (A + n), B, (B + m), C);
    sort(C,C+m+n);
  
    // Print the merged array.
    for (int i = 0; i < (m + n); i++)
        cout << C[i] << " ";
        
  
    return 0;
}
