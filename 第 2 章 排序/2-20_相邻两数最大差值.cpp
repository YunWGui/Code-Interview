/*
题目：
    相邻两数最大差值
描述：
    有一个整形数组A，请设计一个复杂度为O(n)的算法，算出排序后相邻两数的最大差值。
    给定一个int数组A和A的大小n，请返回最大的差值。保证数组元素多于1个。

    测试样例：
        [1,2,5,4,6],5
        返回：2
地址：
    https://www.nowcoder.com/study/vod/1/2/20
备注：
    同《程序员代码面试指南》 8-26 数组排序之后相邻数的最大差值 P416
    https://www.nowcoder.com/practice/2ccf4314d6fc443cb6b6c2372eb6a8f7?tpId=101
*/

#include <iostream>
#include <vector>
using namespace std;

// 方法一：桶排序
class Gap {
public:
    int maxGap(vector<int> A, int n) {
        // write code here
        if ( n <= 1 )
            return 0;
        
        int maxVal = INT_MIN, minVal = INT_MAX;
        for ( int i = 0; i < n; ++i ) {
            maxVal = max( maxVal, A[i] );
            minVal = min( minVal, A[i] );
        }
        
        if ( maxVal == minVal )
            return 0;
        
        vector<bool> buckets( n + 1, false );
        vector<int> maxBucket( n + 1 ), minBucket( n + 1 );  // 分别存放对应每个桶内的最大、最小值
        for ( int i = 0; i < n; ++i ) {
            int bid = bucketNum( A[i], n, maxVal, minVal );  // 计算「桶号」
            maxBucket[bid] = buckets[bid] ? max( maxBucket[bid], A[i] ) : A[i];
            minBucket[bid] = buckets[bid] ? min( minBucket[bid], A[i] ) : A[i];
            buckets[bid] = true;
        }
        
        int res = 0;
        int lastMaxVal = 0;  // 上一个桶的最大值
        for ( int i = 0; i <= n; ++i ) {
            if ( buckets[i] ) {
                res = max( res, minBucket[i] - lastMaxVal );
                lastMaxVal = maxBucket[i];
            }
        }
        
        return res;
    }
    
    int bucketNum( long num, long n, long maxVal, long minVal ) {
        return (int)( ( num - minVal ) * n / ( maxVal - minVal ) );
    }
};

int main()
{
    

    return 0;
}