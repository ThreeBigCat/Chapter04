/*Filename: T4_27.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 打印二进制数的十进制
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int a,sum=0;
     cin >> a;
     {
         for(;a;)
         {
             sum=sum*2+a%10;
             a=a/10;
         }
         cout << "相应的十进制数为：" << sum;
     }
     return 0;
 }
