/*Filename: T4_32.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 判断输入的三个值能否组成三角形
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double a,b,c;
    cin >> a >> b >> c;
    if(a<0||b<0||c<0)
    {
        cout << "不能组成三角形";
    }
    else
    {
        if(a+b>c&&b+c>a&&a+c>b)
        {
            cout << "能组成三角形";
        }
        else
        {
            cout << "不能组成三角形";
        }
    }
    return 0;
 }
