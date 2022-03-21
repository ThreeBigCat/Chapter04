/*Filename: T4_24.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 输出else摇摆问题的结果
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int x=5,y=8,y1=7;
     cout << "a)------------" << endl;
     if(y==8)
     {
         if(x==5)
         {
             cout << "@@@@@" << endl;
         }
         else
         {
             cout << "#####" << endl;
         }
     }
     cout << "$$$$$" << endl;
     cout << "&&&&&" << endl;
     cout << "\n";
     cout << "b)------------" << endl;
     if(y==8)
     {
         if(x==5)
         {
             cout << "@@@@@" << endl;
         }
         else
         {
             cout << "#####" << endl;
             cout << "$$$$$" << endl;
             cout << "&&&&&" << endl;
         }
     }
     cout << "\n";
     cout << "c)-------------" << endl;
     if(y==8)
     {
         if(x==5)
         {
             cout << "@@@@@" << endl;
         }
         else
         {
             cout << "#####" << endl;
             cout << "$$$$$" << endl;
         }
     }
     cout << "&&&&&" << endl;
     cout << "\n" << endl;
     cout << "d)----------------" << endl;
     if(y1==8)
     {
         if(x==5)
         {
             cout << "@@@@@" << endl;
         }
     }
     else
    {
        cout << "#####" << endl;
        cout << "$$$$$" << endl;
        cout << "&&&&&" << endl;
    }
     return 0;
 }
