/*
题目：
    3. 选择排序
地址：
    https://www.nowcoder.com/study/vod/1/2/3
*/

#include <iostream>
#include <vector>
using namespace std;

class SelectionSort {
public:
    int* selectionSort(int* A, int n) {
        // write code here
        for ( int i = 0; i < n - 1; ++i ) {
            int minIndex = i;
            for ( int j = i + 1; j < n; ++j ) {
                if ( A[j] < A[minIndex] )
                    minIndex = j;
            }
            swap( A[i], A[minIndex] );
        }
        
        return A;
    }
};

int main()
{
    

    return 0;
}