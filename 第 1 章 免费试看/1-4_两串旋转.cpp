/*
题目：
    两串旋转
描述：
    如果对于一个字符串A，将A的前面任意一部分挪到后边去形成的字符串称为A的旋转词。
    比如A="12345",A的旋转词有"12345","23451","34512","45123"和"51234"。
    对于两个字符串A和B，请判断A和B是否互为旋转词。
    给定两个字符串A和B及他们的长度lena，lenb，请返回一个bool值，代表他们是否互为旋转词。
地址：
    https://www.nowcoder.com/study/vod/1/1/4
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rotation {
public:
    bool chkRotation(string A, int lena, string B, int lenb) {
        // write code here
        if ( lena != lenb )
            return false;
        int i = 0;
        for ( ; i < lena; ++i )
            if ( A[i] == B[0] )
                break;
        
        int j = 0;  // 字符串 B 的起点
        for (  ; i < lena;  ) 
            if ( A[i++] != B[j++] )
                return false;
        i = 0;
        for (  ; j < lenb;  )
            if ( A[i++] != B[j++] )
                return false;
            
        return true;
    }
};

int main()
{
    string A { "RFSPUYLYR" };
    string B { "UYLYRRFSP" };

    Rotation solve;
    cout << solve.chkRotation( A, A.size(), B, B.size() );

    return 0;
}