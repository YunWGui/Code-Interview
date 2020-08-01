/*
题目：
    10-8. 随机数打印
描述：
    给定一个长度为N且没有重复元素的数组arr和一个整数M，实现函数等概率随机打印arr中的M个数。
地址：
    https://www.nowcoder.com/study/vod/1/10/8
*/

#include <iostream>
#include <vector>
using namespace std;

class RandomPrint {
public:
    vector<int> print(vector<int> arr, int N, int M) {
        vector<int> res( M );
        for ( int i = 0; i < M; ++i ) {
            int index = rand() % N;
            res[i] = arr[index];
            swap( arr[index], arr[N - 1] );
            N--;
        }
        
        return res;
    }
};

int main()
{
    

    return 0;
}