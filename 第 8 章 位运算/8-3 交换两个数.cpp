/*
题目：
    8-3 交换两个数
描述：
    请编写一个算法，不用任何额外变量交换两个整数的值。

    给定一个数组num，其中包含两个值，请不用任何额外变量交换这两个值，并将交换后的数组返回。

    测试样例：
        [1,2]
        返回：[2,1]
地址：
    https://www.nowcoder.com/study/vod/1/8/3
*/

#include <iostream>
#include <vector>
using namespace std;


// 异或
/*
    a = a ^ b;  //a=10100111
    b = b ^ a;  //b=10100001
    a = a ^ b;  //a=00000110
*/
class Swap {
public:
    vector<int> getSwap(vector<int> nums) {
        // write code here
        nums[0] = nums[0]^nums[1];
        nums[1] = nums[1]^nums[0];
        nums[0] = nums[0]^nums[1];
        
        return nums;
    }
};


int main()
{
    

    return 0;
}