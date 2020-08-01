/*
题目：
    蚂蚁
描述：
    n只蚂蚁从正n边形的n个定点沿着边移动，速度是相同的，问它们碰头的概率是多少？
    给定一个正整数n，请返回一个数组，其中两个元素分别为结果的分子和分母，请化为最简分数。

    测试样例：
        3
        返回：[3,4]
地址：
    https://www.nowcoder.com/study/vod/1/10/3
*/

#include <iostream>
#include <vector>
using namespace std;

typedef long long int ll;

// 方法一：快速幂
class Ants {
public:
    vector<int> collision(int n) {
        vector<int> res( 2 );
        
        int a = qpow( 2, n - 1 );
        
        res[0] = a - 1;
        res[1] = a;
        
        return res;
    }
    
    ll qpow( ll a, ll n ) {
        ll res = 1;
        while ( n != 0 ) {
            if ( n & 1 != 0 )
                res *= a;
            a *= a;
            n >>= 1;
        }
        
        return res;
    }
};

int main()
{
    

    return 0;
}