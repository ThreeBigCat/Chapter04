/*Filename: T4_34.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: ��������ֵ�Ľ׳ˣ���������ֵ��e�����ݵĽ���ֵ
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double n,m=1,e=1,k=1,x=1;
    cout << "����������Ҫ�ľ���ֵ" << endl;
    cin >> n;
    cout << "����n�Ľ׳�-------" << endl;
    if(n==0||n==1)
    {
        cout << "n!=" << 1;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            m=m*i;
        }
        cout << m << endl;
    }
    cout << "����e�Ľ���ֵ-------" << endl;
    for(int i=1;i<=n-1;i++)
    {
        e=1.0/(i*i)+e;
    }
    cout << "e=" << e << endl;
    cout << "����e^x��ֵ-------" << endl;
    for(int i=1;i<=n-1;i++)
    {
        x=n*x;
        k=k+x/(i*i*1.0);
    }
    cout << "e^x=" << k <<endl;
    return 0;
 }

