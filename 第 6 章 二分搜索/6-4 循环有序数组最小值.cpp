/*
题目：
    6-4 循环有序数组最小值
描述：
    对于一个有序循环数组arr，返回arr中的最小值。有序循环数组是指，有序数组左边任意
    长度的部分放到右边去，右边的部分拿到左边来。比如数组[1,2,3,3,4]，是有序循环数
    组，[4,1,2,3,3]也是。
    给定数组arr及它的大小n，请返回最小值。

    测试样例：
        [4,1,2,3,3],5
        返回：1
地址：
    https://www.nowcoder.com/study/vod/1/6/4
*/

#include <iostream>
#include <vector>
using namespace std;

class MinValue {
public:
    int getMin(vector<int> arr, int n) {
        // write code here
        int left = 0, right = n - 1;
        while ( left <= right ) {
            int mid = left + ( ( right - left ) >> 1 );
            if ( arr[mid] < arr[right] )
                right = mid;
            else if ( arr[mid] == arr[right] )  // 跳过极端情况：[4, 5, 6, 0, 0, 1]
                --right;
            else if ( arr[right] < arr[mid] )
                left = mid + 1;
        }
        
        return arr[left];
    }
};

int main()
{
    

    return 0;
}