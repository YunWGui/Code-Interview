/*
题目：
    6-6 最左原位
描述：
    有一个有序数组arr，其中不含有重复元素，请找到满足arr[i]==i条件的最左的位置。
    如果所有位置上的数都不满足条件，返回-1。
    给定有序数组arr及它的大小n，请返回所求值。

    测试样例：
        [-1,0,2,3],4
        返回：2

        [-1, 0, 2, 3, 4, 7, 8], 7
        返回：2
地址：
    https://www.nowcoder.com/study/vod/1/6/6
*/

#include <iostream>
#include <vector>
using namespace std;

class Find {
public:
    int findPos(vector<int> arr, int n) {
        // write code here
        int res = -1;
        int left = 0, right = n - 1;
        while ( left <= right ) {
            int mid = left + ( ( right - left ) >> 1 );
            if ( arr[mid] < mid ) 
                left = mid + 1;
            else if ( mid < arr[mid] )
                right = mid - 1;
            else {  // mid == arr[mid]
                res = mid;  // 更新 res
                right = mid - 1;  // 探索 [left, mid - 1] 范围内是否还有 arr[i] == i
            }
        }
        
        return res;
    }
};

int main()
{
    

    return 0;
}