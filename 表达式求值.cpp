/*
给定一个字符串描述的算术表达式，计算出结果值。
输入字符串长度不超过100，合法的字符包括”+, -, *, /, (, )”，”0-9”，字符串内容的合法性及表达式语法的合法性由做题者检查。本题目只涉及整型计算
*/

#include <iostream>
#include <string>
#include <sstream>
#include <deque>

using namespace std;

void addNum(deque<string> &Q, int num)
{
    if (!Q.empty())
    {
        int cur = 0;
        if (Q.back() == "*" || Q.back() == "/")
        {
            string top = Q.back();
            Q.pop_back();
            stringstream ss(Q.back());
            ss >> cur;
            Q.pop_back();
            num = top == "*" ? (cur * num) : (cur / num);
        }
    }
    stringstream ss;
    ss << num;
    Q.push_back(ss.str());
}

int getNum(deque<string> &Q)
{
    int num = 0, R = 0;
    string f("+");
    while (!Q.empty())
    {
        stringstream ss(Q.front());
        ss >> num;
        Q.pop_front();
        R = (f == "+") ? (R + num) : (R - num);
        if (!Q.empty())
        {
            f = Q.front();
            Q.pop_front();
        }
    }
    return R;
}

int *value(string &s, int i)
{
    deque<string> Q;
    int pre = 0;
    while (i < s.length() && s[i] != ')')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            pre = pre * 10 + s[i++] - '0';
        }
        else if (s[i] != '(')
        {
            addNum(Q, pre);
            string ss;
            ss += s[i++];
            Q.push_back(ss);
            pre = 0;
        }
        else
        {
            int *bra = NULL;
            bra = value(s, i + 1);
            pre = bra[0];
            i = bra[1] + 1;
        }
    }
    addNum(Q, pre);
    int *R = new int[2];
    R[0] = getNum(Q);
    R[1] = i;
    return R;
}

int main()
{
    string s;
    while (cin >> s)
    {
        int *R = value(s, 0);
        cout << R[0] << endl;
    }
    return 0;
}