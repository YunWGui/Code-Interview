/*
题目：
    6. 快速排序
地址：
    https://www.nowcoder.com/study/vod/1/2/6
*/

#include <iostream>
#include <vector>
using namespace std;

class QuickSort {
public:
    int* quickSort(int* A, int n) {
        // write code here
        qSort( A, 0, n - 1 );
        
        return A;
    }
    
    void qSort( int* A, int left, int right ) {
        if ( right - left < 1 )
            return;
        
        int mid = partition( A, left, right );
        qSort( A, left, mid );
        qSort( A, mid + 1, right );
    }
    
    int partition( int* A, int left, int right ) {
        swap( A[left], A[left + rand() % ( right - left + 1)] );
        int pivot = A[left];
        
        while ( left < right ) {
            while ( ( left < right ) && ( pivot <= A[right] ) )
                --right;
            A[left] = A[right];
            
            while ( ( left < right ) && ( A[left] <= pivot ) )
                ++left;
            A[right] = A[left];
        }
        A[left] = pivot;
        
        return left;
    }
};

int main()
{
    

    return 0;
}