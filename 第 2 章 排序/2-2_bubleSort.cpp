/*
题目：
    2. 冒泡排序
地址：
    https://www.nowcoder.com/study/vod/1/2/2
*/

#include <iostream>
#include <vector>
using namespace std;

class BubbleSort {
public:
    int* bubbleSort(int* A, int n) {
        // write code here
        for ( int i = 0; i < n; ++i ) {
            bool flag = false;  // 是否有数据交换
            for ( int j = 0; j < n - i - 1; ++j ) {
                if ( A[j] > A[j + 1] ) {
                    swap( A[j], A[j + 1] );
                    flag = true;
                }
            }
            
            if ( flag == false )
                break;
        }
        
        return A;
    }
};

int main()
{
    

    return 0;
}