/*Filename: T4_26.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: �ж���λ�����Ƿ�Ϊ������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    int a,sum=0,b;
    cin >> a;
    b=a;
    if(a>0)
    {
        for(;a;)
        {
            sum=sum*10+a%10;
            a=a/10;
        }
        if(sum==b)
        {
            cout << "�ǻ�����";
        }
        else
        {
            cout << "���ǻ�����";
        }
    }
    else
    {
        cout << "���ǻ�����";
    }
    return 0;
 }

