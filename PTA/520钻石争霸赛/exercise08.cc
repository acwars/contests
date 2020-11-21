/*************************************************************************
	> File Name: exercise08.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 12:00:49 PM
	> Modified: 06-08-2020 12:52:11 AM
	> Description: 
        当三个国家中的任何两国实力都大于第三国的时候,这三个国家相互结盟就呈"三国鼎立"之势,这种状态是最稳定的. 
        现已知本国的实力值,又给出其他国家的实力值.我们需要从这个国家中找2个结盟,以成三足鼎立.有多少种选择呢?
    > Input Format:
        输入首先在第一行给出2个正整数n(2≤n≤10^5)和P(≤10^9)分别为其他国家的个数、以及本国的实力值. 随后一行给出n个正整数,表示n个其他国家的实力值.每个数值不超过10^9,数字间以空格分隔.
    > Output Format:
        在一行中输出本国结盟选择的个数.
    > Input Sample:
        7 30
        42 16 2 51 92 27 35
    > Output Sample:
        9
    样例解释:
        能联合的另外2个国家的9种选择分别为：
        {16, 27}, {16, 35}, {16, 42}, {27, 35}, {27, 42}, {27, 51}, {35, 42}, {35, 51}, {42, 51}。

    解题思路: ABC三个国家, 已知A, 穷举B, 寻找C, 寻找条件: 满足A + B > C && B - A < C && A - B < C
 ************************************************************************/

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(int argc, const char *argv[])
{
    int n, x, i;

    cin >> n >> x;

    int a[n];

    // 避免下标从0开始
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    ll ans = 0;

    // 穷举B
    for (i = 1; i <= n; i++) {
        // 搜索C, a + 1 + i 避免与B和C重复
        ll l = lower_bound(a + 1 + i, a + 1 + n, x + a[i]) - (a + 1);
        ll r = upper_bound(a + 1 + i, a + 1 + n, abs(x - a[i])) - (a + 1);
        
        // 中间就是满足条件的C, 相加得结果
        ans += l - r;
    }

    cout << ans << endl;

    return 0;
}
