/*
题目：
    8-6 寻找奇数次出现的数II
描述：
    给定一个整型数组arr，其中有两个数出现了奇数次，其他的数都出现了偶数次，找到这两个数。
    要求时间复杂度为O(N)，额外空间复杂度为O(1)。
    给定一个整形数组arr及它的大小n，请返回一个数组，其中两个元素为两个出现了奇数次的元素,
    请将他们按从小到大排列。

    测试样例：
        [1,2,4,4,2,1,3,5],8
        返回：[3,5]
地址：
    https://www.nowcoder.com/study/vod/1/8/6
*/

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class OddAppearance {
public:
    vector<int> findOdds(vector<int> arr, int n) {
        vector<int> res;
        
        if ( n < 2 )
            return res;
        
        map<int, int> M;
        
        for ( int num : arr )
            ++M[num];
        
        for ( auto iter = M.begin(); iter != M.end(); ++iter ) {
            if ( iter->second == 1 )
                res.push_back( iter->first );
        }
        
        return res;
    }
};


int main()
{
    

    return 0;
}