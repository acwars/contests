/*************************************************************************
	> File Name: exercise04.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 6:20:41 PM
	> Modified: 06-08-2020 12:52:09 AM
	> Description: 
        给定一所学校学生的体育成绩,请你统计全班的平均成绩和男生、女生的平均成绩.
    > Input Format:
        输入首先在第一行中给出一个正整数N(≤10000),即全校学生人数.最后N行,每行按照格式性别 成绩给出一位学生的信息.其中性别为1表示男生,0表示女生;成绩是一个0到100之间的整数.
    > Output Format:
        在一行中依次输出全班的平均成绩、男生的平均成绩、女生的平均成绩.输出小数点后1位,数字间有一个空格分隔.
        注意:如果全是男生或全是女生,则缺少的性别就没有办法计算平均分,相应的位置应该输出一个X表示没有.
    > Input Sample 1:
        5
        1 97
        0 91
        0 98
        1 95
        1 90
    > Output Sample 1:
        94.2 94.0 94.5
    > Input Sample 2:
        5
        0 97
        0 91
        0 98
        0 95
        0 90
    > Output Sample 2:
        94.2 X 94.2
 ************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    
    int n, sex, score, i, women, men;
    double womenAvgScore, menAvgScore, totalAvgScore;

    womenAvgScore = menAvgScore = totalAvgScore = 0.0;

    women = men = 0;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> sex >> score;
        if (sex == 1) {
            men++;
            menAvgScore += score;
        } else {
            women++;
            womenAvgScore += score;
        }
        totalAvgScore += score;
    }
    
    if (men == 0) {
        printf("%.1lf X %.1lf\n", totalAvgScore / (women + men), womenAvgScore / women);
    } else if (women == 0) {
        printf("%.1lf %.1lf X\n", totalAvgScore / (women + men), menAvgScore / men);
    } else {
        printf("%.1lf %.1lf %.1lf\n", totalAvgScore / (women + men), menAvgScore / men, womenAvgScore / women);
    }

    return 0;
}
