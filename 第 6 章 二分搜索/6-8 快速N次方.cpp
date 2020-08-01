/*
题目：
    6-8 快速 N 次方
描述：
    如果更快的求一个整数k的n次方。如果两个整数相乘并得到结果的时间复杂度为O(1)，
    得到整数k的N次方的过程请实现时间复杂度为O(logN)的方法。
    给定k和n，请返回k的n次方，为了防止溢出，请返回结果Mod 1000000007的值。

    测试样例：
        2,3
        返回：8
地址：
    https://www.nowcoder.com/study/vod/1/6/8
*/

#include <iostream>
#include <vector>
using namespace std;


// 快速幂
class QuickPower {
public:
    int getPower(long long int k, long long int N) {
        // write code here
        long long int res = 1;
        while ( N > 0 ) {
            if ( N & 1 == 1 )
                res = res * k % 1000000007;  // 步步取模
            
            k = k * k % 1000000007;  // 步步取模
            N >>= 1;
        }
        
        return res;
    }
};

int main()
{
    

    return 0;
}