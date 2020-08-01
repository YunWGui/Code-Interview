/*
题目：
    10-2 足球比赛
描述：
    有2k只球队，有k-1个强队，其余都是弱队，随机把它们分成k组比赛，每组两个队，问两强相遇的概率是多大？
    给定一个数k，请返回一个数组，其中有两个元素，分别为最终结果的分子和分母，请化成最简分数

    测试样例：
        4
        返回：[3,7]
地址：
    https://www.nowcoder.com/study/vod/1/10/2
*/

#include <iostream>
#include <vector>
using namespace std;

// http://www.jeepxie.net/article/1033826.html
// https://blog.csdn.net/lynn_Kun/article/details/82390537
class Championship {
  public:
    vector<int> calc(int k) {
        vector<int> ret(2);
        
        int b = 1;  // 所有可能的组合是(2k-1)*(2k-3)*.....*3
        for (int i = 3; i <= (2 * k - 1); i += 2)
            b = b * i;     
        
        int a = 1;  // 两强「不相遇」的组合是(k+1)*k*...*3
        for (int j = 3; j <= k + 1; j++)
            a = a * j;     
        
        a = b - a;         // 两强「相遇」的组合数
        
        int g = gcd(b, a); // 辗转相除法求得最大公约数，
        ret[0] = a / g;
        ret[1] = b / g;
        
        return ret;
    }

    int gcd(int a, int b) {
        int r;
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }

        return a;
    }
};

int main()
{
    

    return 0;
}