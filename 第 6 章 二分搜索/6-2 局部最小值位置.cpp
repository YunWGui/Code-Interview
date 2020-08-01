/*
题目：
    6-2 局部最小值位置
描述：
    定义局部最小的概念。arr长度为1时，arr[0]是局部最小。
    arr的长度为N(N>1)时，如果arr[0]<arr[1]，那么arr[0]是局部最小；
    如果arr[N-1]<arr[N-2]，那么arr[N-1]是局部最小；
    如果0<i<N-1，既有arr[i]<arr[i-1]又有arr[i]<arr[i+1]，那么arr[i]是局部最小。 
    给定无序数组arr，已知arr中任意两个相邻的数都不相等，写一个函数，
    只需返回arr中任意一个局部最小出现的位置即可。
地址：
    https://www.nowcoder.com/study/vod/1/6/2
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int getLessIndex(vector<int> arr) {
        if ( arr.empty() )
            return -1;
        if ( arr.size() == 1 )
            return 0;
        
        int left = 0, right = arr.size() - 1;
        if ( arr[left] < arr[left + 1])
            return left;
        if ( arr[right] < arr[right - 1] )
            return right;
        
        // 二分查找
        ++left; --right;
        while ( left <= right ) {
            int mid = left + ( ( right - left ) >> 1 );
            if ( arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1] )
                return mid;
            else if ( arr[mid] > arr[mid - 1] )
                right = mid - 1;
            else if ( arr[mid] > arr[mid + 1] )
                left = mid + 1;
        }
        
        return -1;
    }
};

int main()
{
    

    return 0;
}