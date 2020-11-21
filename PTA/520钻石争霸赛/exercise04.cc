/*************************************************************************
	> File Name: exercise05.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 7:54:49 PM
	> Modified: 06-08-2020 11:10:41 AM
	> Description: 
        给定两个绝对值不超过10^9的整数A和B,计算它们的和A+B 是非常简单的事,但要将和这个数字按照中国古风从上到下竖着输出,就不是那么简单了吧?
    > Input Format:
        输入在一行中给出2个绝对值不超过10^9的整数A和B,其间以空格分隔.
    > Output Format:
        将A+B数值的每一位从上到下竖着输出.如果是负数,那么负号占第1行,其它数字不用输出符号.
    > Input Sample:
        -6666 233
    > Output Sample:
        -
        6
        4
        3
        3
 ************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
     
    int a, b;

    string str;

    cin >> a >> b;

    str = to_string(a + b);

    for (char c : str) {
        printf("%c\n", c);
    }

    return 0;
}
