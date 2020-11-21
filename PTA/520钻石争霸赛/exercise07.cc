/*************************************************************************
	> File Name: exercise07.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-08-2020 11:17:44 AM
	> Modified: 06-08-2020 12:12:09 PM
	> Description: 
        "求N阶乘末尾的第一个非零数字"是一道常见的企业笔试题.这里我们略微做个变化,求N阶乘末尾的第一个非零K位数,同时输出末尾有多少个零.
    > Input Format:
        输入给出一个不超过10^7的正整数N和要求输出的位数0<K<10.
    > Output Format:
        在一行中输出N阶乘末尾的第一个非零K位数(注意前导零也要输出)、以及末尾0的个数,其间以1个空格分隔,
    > Input Sample:
        18 5
    > Output Sample:
        05728 3
 ************************************************************************/

#include <bits/stdc++.h>

#define ll __int128 //超大整型

using namespace std;

void write(ll ans, int start, int end);
void write(ll ans);

int main(int argc, const char *argv[])
{
    
    int n, k, cnt, i;

    cnt = 0; // 统计尾数0

    cin >> n >> k;

    ll ans = 1; //存储阶乘
    ll mod = pow(10, k); //取余

    for (i = 1; i <= n; i++) {
        ans *= i;
        while (ans % 10 == 0) { //尾数有0则去除并统计
            ans /= 10;
            cnt++;
        }

        ans %= mod; //取余
    }

    write(ans, 0, k);
    cout << ' ' << cnt << endl;

    return 0;
}

// 不含前导零, 含负数
void write(ll ans){
    if (ans < 0) {
        putchar('-');
        ans = -ans;
    }

    if (ans > 9) {
        write(ans / 10);      
    }

    putchar(ans % 10 + '0');
}

// 含前导零输出k位数(不含负数)
// 参数: 超大整型, 第0位数, 第k位数
void write(ll ans, int start, int end){
    // 补全前导0
    if (start == end) {
        return;
    }

    write(ans / 10, start + 1, end);
    putchar(ans % 10 + '0');
}
