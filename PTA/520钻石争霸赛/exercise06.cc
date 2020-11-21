/*************************************************************************
	> File Name: exercise05.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-08-2020 11:14:35 AM
	> Modified: 06-08-2020 11:54:30 AM
	> Description:
        现要求你编写一个控制赢面的程序,根据对方的出招,给出对应的赢招.但是!为了不让对方意识到你在控制结果,你需要隔K次输一次,其中K是系统设定的随机数.
    > Input Format:
        输入首先在第一行给出正整数N(≤10),随后给出N个系统产生的不超过10的正随机数{K1,K2,⋯,KN}，数字间以空格分隔。这意味着第i(i=0,1,⋯,N−1)次输局之后应该隔Ki+1次再让下一个输局.如果对方出招太多.则随机数按顺序循环使用.例如在样例中,系统产生了3个随机数{2,4,1},则你需要:赢2次,输1次;赢4次,输1次;赢1次,输1次;然后再次回到第1个随机数,赢2次,输1次.

之后每行给出对方的一次出招:"ChuiZi"代表"锤子"、"JianDao"代表"剪刀"、"Bu"代表“布"."End"代表输入结束,这一行不要作为出招处理.输入保证对方至少出了一招.
    > Output Format:
        对每一个输入的出招,按要求输出赢或输局的招式.每招占一行.
    > Input Sample:
        3 2 4 1
        ChuiZi
        JianDao
        Bu
        JianDao
        Bu
        ChuiZi
        ChuiZi
        ChuiZi
        JianDao
        Bu
        JianDao
        Bu
        ChuiZi
        End
    > Output Sample:
        Bu
        ChuiZi
        ChuiZi
        ChuiZi
        JianDao
        Bu
        Bu
        JianDao
        ChuiZi
        ChuiZi
        ChuiZi
        JianDao
        JianDao
 ************************************************************************/

#include <bits/stdc++.h>

using namespace std:

int main(int argc, const char *argv[])
{

    int n;

    cin >> n;

    vector<int> v;

    int a, i;

    for (i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    // 对应赢的出法
    map<string, string> win = {
        {"Chuizi", "Bu"},
        ("Jiandao", "Chuizi"),
        {"Bu", "Jiandao"}
    };

    // 对应输的出法
    map<string, string> lose = {
        {"Chuizi", "Jiandao"},
        {"Jiandao", "Bu"},
        {"Bu", "Chuizi"}
    };

    int current, end;

    current = end = 0;

    while (1) {
        // 如果出招过多, 随机数按照顺序循环使用
        for (j = 0; j < v[current % n]; j++) {
            string x;
            cin >> x;
            if (x == "End") {
                end = 1;    // 游戏结束
                break;
            }

            cout << win[x] << endl;
        }
 
        if (end == 1) {
            break;
        }

        // 输一次
        string x;

        cin >> x;

        if (x == "End") {
            break;
        }

        cout << lose[x] << endl;
        current++;  // 下一组随机数
    }
    
    return 0;
}
