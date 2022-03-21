/*Filename: T4_25.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 打印出边长为1到20的正方形图形
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int i,n,j,k=1;
     cin >> n;
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n;j++)
         {
             if(i==1||i==n)
             {
                 cout << "*";
             }
             else
             {
                 if(k==1||k==n)
                 {
                     cout << "*";
                 }
                 else
                 {
                     cout << " ";
                 }
                 k=k+1;
             }
         }
         k=1;
         cout << "\n";
     }
     return 0;
 }
