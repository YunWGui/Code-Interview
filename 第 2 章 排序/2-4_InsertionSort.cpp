/*
题目：
    4. 插入排序
地址：
    https://www.nowcoder.com/study/vod/1/2/4
*/

#include <iostream>
#include <vector>
using namespace std;

class InsertionSort {
public:
    int* insertionSort(int* A, int n) {
        // write code here
        for ( int i = 1; i < n; ++i ) {  // 默认数组第一个数字「已排序」
            int value = A[i];
            int j = i - 1;
            for ( ; j >= 0; --j ) {
                if ( value < A[j] )
                    A[j + 1] = A[j];  // 移动数据
                else
                    break;
            }
            A[j + 1] = value;  // 插入数据
        }
        
        return A;
    }
};

int main()
{
    

    return 0;
}