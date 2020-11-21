/*************************************************************************
	> File Name: exercise01.c
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 6:05:15 PM
	> Modified: 06-07-2020 11:09:28 PM
	> Description: 
        考试周快到了, 浙江大学的电子屏又调皮了……本题请你帮小编写一个自动倒计时的程序,对给定的日期(例如"腊八""就对应8)和倒计时天数(例如电子屏上的"四天之后"就对应4), 自动调整公式里的分母(例如8/2=4里面的那个2).
    > Input Format:
        输入在一行中给出两个正整数: A是给定的日期, 不超过30; B是倒计时天数, 不超过10.
    > Output Format:
        在一行中输出公式A/X=B, 其中X是满足等式的数字, 输出时保留小数点后1位即可.
    > Input Sample:
        8 3
    > Output Sample:
        8/2.7=3

 ************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    
    double a, b;

    cin >> a >> b;

    printf("%.0lf/%.1lf=%.0lf\n", a, a / b, b);

    return 0;
}
