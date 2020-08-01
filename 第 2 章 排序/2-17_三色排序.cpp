/*
题目：
    三色排序
描述：
    有一个只由0，1，2三种元素构成的整数数组，请使用交换、原地排序而不是使用计数进行排序。
    给定一个只含0，1，2的整数数组A及它的大小，请返回排序后的数组。保证数组大小小于等于500。

    测试样例：
        [0,1,1,0,2,2],6
        返回：[0,0,1,1,2,2]
地址：
    https://www.nowcoder.com/study/vod/1/2/17
*/

#include <iostream>
#include <vector>
using namespace std;

// 本质上是「荷兰国旗问题」

// 方法一：
class ThreeColor {
public:
    vector<int> sortThreeColor(vector<int> A, int n) {
        int left = 0, right = n - 1;
        int i = 0;
        while ( i <= right ) {
            if ( A[i] == 0 )
                swap( A[i++], A[left++] );
            else if ( A[i] == 1 )
                ++i;
            else 
                swap( A[i], A[right--] );
        }
        
        return A;
    }
};


// 方法二：
class ThreeColor_2 {
public:
    vector<int> sortThreeColor(vector<int> A, int n) {
        // write code here
        int leftIndex = 0, rightIndex = n - 1;
        for ( int i = 0; i <= rightIndex;  ) {
            if ( A[i] == 1 )
                ++i;
            else if ( A[i] == 0 )
                swap( A[i++], A[leftIndex++] );
            else 
                swap( A[i], A[rightIndex--] );
        }
        
        return A;
    }
};


int main()
{
    

    return 0;
}