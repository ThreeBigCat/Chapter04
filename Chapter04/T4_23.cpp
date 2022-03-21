/*Filename: T4_23.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: Êä³öÌØ¶¨Í¼Ïñ
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int x1=9,y1=11,x2=11,y2=9;
     cout << "a)-------------" << endl;
     if(x1<10)
     {
         if(y1>10)
         {
             cout << "*****" << endl;
         }
         else
         {
             cout << "#####" << endl;
         }
     }
     cout << "$$$$$" << endl;
     cout << "\n";
     cout << "b)-------------" << endl;
     if(x2<10)
     {
         if(y2>10)
         {
             cout << "*****" << endl;
         }
     }
     else
     {
         cout << "#####" << endl;
         cout << "$$$$$" << endl;
     }
     return 0;
 }
