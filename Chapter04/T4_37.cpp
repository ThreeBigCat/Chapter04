/*Filename: T4_37.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 计算世界人口的变化值
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double a=70;
     int k=0,b;
     cout << "设第一年世界人口为70亿且每年世界人口增长率为5%" << endl;
     for(int j=1;j<=75;j++)
    {
        cout << j << "\t";
    }
     cout << endl;
     for(int i=1;i<=75;i++)
     {
         a=1.05*a;
         if(a==140)
         {
             k=k+1;
             b=i;
         }
         cout << a << "\t";
     }
     if(k==0)
     {
         cout << "不存在这样的年份";
     }
     else
     {
         cout << "第" << b << "年世界人口数为今年的两倍";
     }
     return 0;
 }
