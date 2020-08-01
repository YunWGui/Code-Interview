/*
题目：
    2-15 有序数组合并 
描述：
    有两个从小到大排序以后的数组A和B，其中A的末端有足够的缓冲空容纳B。请编写一个方法，
    将B合并入A并排序。
    给定两个有序int数组A和B，A中的缓冲空用0填充，同时给定A和B的真实大小int n和int m，
    请返回合并后的数组。
地址：
    https://www.nowcoder.com/study/vod/1/2/15
*/

#include <iostream>
#include <vector>
using namespace std;

class Merge {
public:
    int* mergeAB(int* A, int* B, int n, int m) {
        int i = n - 1, j = m - 1, k = n + m - 1;
        while ( i >= 0 && j >= 0 ) {
            if ( A[i] <= B[j] )
                A[k--] = B[j--];
            else
                A[k--] = A[i--];
        }
        
        while ( j >= 0 )
            A[k--] = B[j--];
        
        return A;
    }
};

int main()
{
    

    return 0;
}