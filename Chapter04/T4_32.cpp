/*Filename: T4_32.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: �ж����������ֵ�ܷ����������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double a,b,c;
    cin >> a >> b >> c;
    if(a<0||b<0||c<0)
    {
        cout << "�������������";
    }
    else
    {
        if(a+b>c&&b+c>a&&a+c>b)
        {
            cout << "�����������";
        }
        else
        {
            cout << "�������������";
        }
    }
    return 0;
 }
