/*
 * 题目：
 *      10.5 随机 01
 * 地址：
 *      https://www.nowcoder.com/study/vod/1/10/5
 * 备注：
 *      同《程序员代码面试指南》 P445
 */

#include <iostream>
using namespace std;

class RandomP {
public:
    static int f ();
};


// RandomP 函数以 P 的概率产生 0，以 1-P 的概率产生 1，但产生 [0, 1], [1, 0] 的概率都是 p(1-p)
// 方法一：
class Random01 {
public:
    // 用RandomP::f()实现等概率的01返回
    int random01 () {
        int num = 0;

        do {
            num = RandomP::f();
        } while (num == RandomP::f()); // 直到 num != RandomP::f()，此时对应的值分别可能是 [0, 1] 或 [1, 0]

        return num;
    }
};

// 方法二：
class Random01_2 {
public:
    // 用RandomP::f()实现等概率的01返回
    int random01() {
        while ( true ) {
            int a = RandomP::f();
            int b = RandomP::f();

            if ( a != b )
                return a == 1 ? 1 : 0;
        }

        return 0;
    }
};

int main ()
{
    return 0;
}
