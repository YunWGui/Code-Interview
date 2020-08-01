/*
题目：
    2-19 最短子数组
描述：
    对于一个数组，请设计一个高效算法计算需要排序的最短子数组的长度。
    给定一个int数组A和数组的大小n，请返回一个二元组，代表所求序列的长度。
    (原序列位置从0开始标号,若原序列有序，返回0)。保证A中元素均为正整数。

    测试样例：
        [1,4,6,5,9,10],6
        返回：2
地址:
    https://www.nowcoder.com/study/vod/1/2/19
*/

#include <iostream>
#include <vector>
using namespace std;

class Subsequence {
public:
    int shortestSubsequence(vector<int> A, int n) {
        // write code here
        if ( A.size() <= 1 )
            return 0;
        
        int maxVal = INT_MIN, minVal = INT_MAX;
        int q = 0, p = 0;
        
        // 「顺序」遍历
        for ( int i = 0; i < (int)A.size(); ++i ) {
            if ( A[i] >= maxVal )
                maxVal = A[i];
            else 
                p = i;
        }
        
        // 「逆序」遍历
        for ( int i = A.size() - 1; i >= 0; --i ) {
            if ( A[i] <= minVal )
                minVal = A[i];
            else 
                q = i;
        }
        
        if ( p == q )
            return 0;
        
        return p - q + 1;
    }
};

int main()
{
    

    return 0;
}