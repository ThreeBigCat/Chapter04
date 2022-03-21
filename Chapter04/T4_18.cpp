/*Filename: T4_18.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: ¥Ú”°±Ì
 */

 #include <iostream>

 using namespace std;

 int main()
 {
     int i=1,j=1,a;
     cout << "N" << "\t" << "10*N" << "\t" << "100*N" << "\t" << "1000*N" << endl;
     cout << "\n";
     while(i<=5)
     {
         a=i;
         while(j<=4)
         {
             cout << a << "\t";
             a=a*10;
             j++;
         }
         j=1;
         cout << "\n";
         i++;
     }
     return 0;
 }
