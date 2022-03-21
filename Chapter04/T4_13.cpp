/*Filename: T4_13.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: 计算汽车每加仑英里数
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double a,b,sum1=0,sum2=0;
    while(true)
    {
        cout << "Enter miles driven (-1 to quit)：";
        cin >> a;
        cout << "Enter gallons used：";
        cin >> b;
        sum1=sum1+a;
        sum2=sum2+b;
        cout << "MPG this trip：" << a/b << endl;
        cout << "Total MPG：" << sum1/sum2 << endl;
        cout << "\n";
    }
    return 0;
 }
