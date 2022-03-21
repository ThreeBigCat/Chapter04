/*Filename: T4_16.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 计算员工薪资
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double a,b,sum;
     while(true)
     {
         cout << "Enter hours worked(-1 to end)：";
         cin >> a;
         cout << "Enter hourly rate of the employee($00.00)：";
         cin >> b;
         if(a-40>0)
         {
             sum=40*b+(a-40)*b*1.5;
         }
         else
         {
             sum=a*b;
         }
         cout << "Salary is $" << sum << endl << endl;
     }
     return 0;
 }
