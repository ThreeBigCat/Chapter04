/*Filename: T4_26.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 判断五位整数是否为回文数
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int a,sum=0,b;
    cin >> a;
    b=a;
    if(a>0)
    {
        for(;a;)
        {
            sum=sum*10+a%10;
            a=a/10;
        }
        if(sum==b)
        {
            cout << "是回文数";
        }
        else
        {
            cout << "不是回文数";
        }
    }
    else
    {
        cout << "不是回文数";
    }
    return 0;
 }

