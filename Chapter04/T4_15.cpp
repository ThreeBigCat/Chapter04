/*Filename: T4_15.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 计算销售佣金
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double a,sum;
     while(true)
     {
         cout << "Enter sales in dollars (-1 to end)：";
         cin >> a;
         sum=200+a*0.09;
         cout << "Salary is：" << "$" << sum;
         cout << "\n";
     }
     return 0;
 }
