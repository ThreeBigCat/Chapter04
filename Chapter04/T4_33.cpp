/*Filename: T4_33.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 判断输入的三个值能否组成直角三角形
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int a,b,c;
    cin >> a >> b >> c;
    if(a<0||b<0||c<0)
    {
        cout << "不能组成直角三角形";
    }
    else
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            cout << "能组成直角三角形";
        }
        else
        {
            cout << "不能组成直角三角形";
        }
    }
    return 0;
 }
