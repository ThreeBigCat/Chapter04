/*Filename: T4_17.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: ��ʮ�����е����ֵ
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int counter=1,number,largest;
     while(counter<=10)
     {
         cin >> number ;
         if(counter==1)
         {
             largest=number;
         }
         if(largest<=number)
         {
             largest=number;
         }
         counter++;
     }
     cout << largest << endl;
     return 0;
 }
