/*************************************************************************
	> File Name: exercise03.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 6:13:17 PM
	> Modified: 06-07-2020 11:09:08 PM
	> Description: 
        当别人告诉你自己考了x分的时候,你要回答说:"恭喜你考了 x 分!"比如小明告诉你他考了90分,你就用汉语拼音打出来 gong xi ni kao le 90 fen!.
        但是如果小明没考好,比如只考了20分,你也"恭喜"人家就不对了.这时候你应该安慰他说:"考了20分别泄气!"用汉语拼音写出来就是 kao le 20 fen bie xie qi!.
    > Input Format:
        输入在一行里给出一位小朋友的分数.这个分数是一个0到100之间的整数.
    > Output Format:
        在一行中输出你对这位小朋友说的话.如果人家考到不低于90分,就说 gong xi ni kao le X fen!;如果不到90分,就说 kao le X fen bie xie qi!.其中X是小朋友输入的分数.
    > Input Sample 1:
        95
    > Output Sample 1:
        gong xi ni kao le 95 fen!
    > Input Sample 2:
        89
    > Output Sample 2:
        kao le 89 fen bie xie qi!

 ************************************************************************/

#include <bits/stdc++.h>

int main(int argc, const char *argv[])
{
    int n;

    cin >> n;

    if (n >= 90) {
        printf("gong xi ni kao le %d fen!\n", n);
    } else {
        printf("kao le %d fen bie xie qi!\n", n);
    }

    return 0;
}
