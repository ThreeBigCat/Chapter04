/*Filename: T4_28.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: ��ʾ8*8����
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int i,j;
     for(i=1;i<=8;i++)
     {
         if(i%2==0)
         {
             cout << " ";
         }
         for(j=1;j<=8;j++)
         {
             cout << "*";
         }
         cout << endl;
     }
     return 0;
 }
