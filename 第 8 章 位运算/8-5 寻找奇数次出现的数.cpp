/*
题目：
    8-5 寻找出现次数为奇数的数
描述：
    有一个整型数组A，其中只有一个数出现了奇数次，其他的数都出现了偶数次，请打印这个数。
    要求时间复杂度为O(N)，额外空间复杂度为O(1)。

    给定整形数组A及它的大小n，请返回题目所求数字。

    测试样例：
        [1,2,3,2,1],5
        返回：3
地址：
    https://www.nowcoder.com/study/vod/1/8/5
*/

#include <iostream>
#include <vector>
using namespace std;

// 异或
class OddAppearance {
public:
    int findOdd(vector<int> A, int n) {
        int res = 0;
        for ( int i = 0; i < n; ++i )
            res ^= A[i];
        
        return res;
    }
};

int main()
{
    

    return 0;
}
