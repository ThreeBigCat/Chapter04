/*Filename: T4_30.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 计算圆的直径、周长和面积
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double pi=3.14159,r;
     cin >> r;
     cout << "圆的直径：" << 2*r << endl;
     cout << "圆的周长：" << 2*pi*r << endl;
     cout << "圆的面积：" << pi*r*r << endl;
     return 0;
 }
