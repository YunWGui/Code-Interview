/**
 * 题目：
 *      随机函数
 * 地址：
 *      https://www.nowcoder.com/study/vod/1/10/4
*/

#include <iostream>
#include <vector>
using namespace std;

// 以下内容请不要修改
class Random5 {
public:
	static int randomNumber();
};

class Random7 {
public:
    int rand5() {
        return Random5::randomNumber();
    }
    // 以上内容请不要修改
    

    int randomNumber() {
        // 代码写这里,通过rand5函数随机产生[1,7]
        int num = 0;
        do {
            num = ( rand5() - 1 ) * 5 + ( rand5() - 1 );
        } while ( num > 20 );
        
        return num % 7 + 1;
    }
};

int main()
{
    

    return 0;
}