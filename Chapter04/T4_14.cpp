/*Filename: T4_14.cpp
 *Author:   YangKun
 *E-mail:   2129885197@qq.com
 *Date:     Mar 18th,2022
 *College:  Henan University
 *Function: �ж��̳��˿͵�֧������Ƿ񳬳�����Ƿ�˻�������
 */

 #include <iostream>

 using namespace std;

 int main()
 {
    double a,b,c,d,e,f;
    while(true)
    {
        cout << "Enter account number (or -1 to quit)��";
        cin >> a;
        cout << "Enter beginning balance��";
        cin >> b;
        cout << "Enter total charges��";
        cin >> c;
        cout << "Enter total credits��";
        cin >> d;
        cout << "Enter credit limit��";
        cin >> e;
        f=b+c-d;
        if(f>e)
        {
            cout << "New balance is " << f << endl;
            cout << "Account:     " << a << endl;
            cout << "Credit limit��" << e << endl;
            cout << "Balance:     " << f << endl;
            cout << "Credit Limit Exceeded" << endl;
            cout << "\n";
        }
        else
        {
            cout << "New balance is " << f << endl;
            cout << "\n";
        }
    }
    return 0;
 }

