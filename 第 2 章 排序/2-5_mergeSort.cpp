/*
题目：
    5. 归并排序
地址：
    https://www.nowcoder.com/study/vod/1/2/5
*/

#include <iostream>
#include <vector>
using namespace std;

class MergeSort {
public:
    int* mergeSort(int* A, int n) {
        // write code here
        mSort( A, 0, n - 1 );
        
        return A;
    }
    
    void mSort( int* A, int left, int right ) {
        if ( right - left < 1 )
            return;
        
        int mid = left + ( ( right - left ) >> 1 );
        mSort( A, left, mid );
        mSort( A, mid + 1, right );
        merge( A, left, mid, right );
    }
    
    void merge( int* A, int left, int mid, int right ) {
        int n1 = mid - left + 1;
        int n2 = right - mid;
        int Left[n1], Right[n2];
        
        for ( int i = 0; i < n1; ++i )
            Left[i] = A[left + i];
        for ( int j = 0; j < n2; ++j )
            Right[j] = A[mid + 1 + j];
        
        int i = 0, j = 0, k = left;
        while ( i < n1 && j < n2 ) {
            if ( Left[i] <= Right[j] )
                A[k++] = Left[i++];
            else 
                A[k++] = Right[j++];
        }
        while ( i < n1 )
            A[k++] = Left[i++];
        while ( j < n2 )
            A[k++] = Right[j++];
    }
};

int main()
{
    

    return 0;
}