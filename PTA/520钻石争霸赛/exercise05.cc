/*************************************************************************
	> File Name: exercise06.cc
	> Author: acwars
	> Mail: codeacwars@gmail.com
	> Created: 06-07-2020 11:59:29 AM
	> Modified: 06-08-2020 12:07:47 PM
	> Description: 
        甲想好了一个n位数字让乙来猜,只要猜的数字位数正确,至多有1位与谜底不同,且不同的数字相差不超过1,就算猜对了.例如谜底是67,若乙猜66、68、77、57,就都算对了;猜167就不能算对.
    > Input Format:
        输入首先在第一行给出一个不超过1000位数的、最高位不是0的正整数,是甲给出的谜底.随后若干行,每行给出一个乙猜的数字,都是最高位不是0的正整数.直到出现-1表示输入结束,这个数字不要做任何处理.题目保证乙至少猜了一次.
    > Output Format:
        对每一个乙猜的数字,如果猜对了就输出Yes,否则输出No.
    > Input Sample:
        12345678909876
        2345678909876
        12345678900876
        12345678809876
        12345678909888
        1234567890987
        -1
    > Output Sample: 
        No
        No
        Yes
        No
        No
 ************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char *argv[])
{
    string s, t;

    cin >> s;

    while (cin >> t && t != "-1") {
        if (t.size() != s.size()) {
            cout << "No" << endl;;
            continue;
        }
        int cnt, i;
        
        cnt = 0;

        for (i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                cnt++;
                if (s[i] != t[i] - 1 && s[i] != t[i] + 1) {
                    cnt++;
                }
            }
        }

        if (cnt <= 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    

    return 0;
}
