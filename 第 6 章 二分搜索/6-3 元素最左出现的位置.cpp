/*
题目：
    6-3 元素最左出现的位置
描述：
    对于一个有序数组arr，再给定一个整数num，请在arr中找到num这个数出现的最左边的位置。
    给定一个数组arr及它的大小n，同时给定num。请返回所求位置。若该元素在数组中未出现，请返回-1。
    测试样例：
        [1,2,3,3,4],5,3
    返回：2
地址：
    https://www.nowcoder.com/study/vod/1/6/3
*/


#include <iostream>
#include <vector>
using namespace std;

class LeftMostAppearance {
public:
    int findPos(vector<int> arr, int n, int num) {
        // write code here
        int left = 0, right = n - 1;
        while ( left <= right ) {
            int mid = left + ( ( right - left ) >> 1 );
            if ( arr[mid] < num )
                left = mid + 1;
            else if ( num < arr[mid] )
                right = mid - 1;
            else {  // num == arr[mid]
                while ( arr[mid - 1] == arr[mid] )
                    --mid;
                return mid;
            }
        }
        
        return -1;
    }
};

int main()
{
    

    return 0;
}