/*Filename: T4_37.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: ���������˿ڵı仯ֵ
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     double a=70;
     int k=0,b;
     cout << "���һ�������˿�Ϊ70����ÿ�������˿�������Ϊ5%" << endl;
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
         cout << "���������������";
     }
     else
     {
         cout << "��" << b << "�������˿���Ϊ���������";
     }
     return 0;
 }
