/*Filename: T4_33.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: �ж����������ֵ�ܷ����ֱ��������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int a,b,c;
    cin >> a >> b >> c;
    if(a<0||b<0||c<0)
    {
        cout << "�������ֱ��������";
    }
    else
    {
        if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
        {
            cout << "�����ֱ��������";
        }
        else
        {
            cout << "�������ֱ��������";
        }
    }
    return 0;
 }
