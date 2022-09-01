#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a, b, c, shulian, u;
    int d, e, f, g;
    d = 812703947;
    f = 123481234;
    e = 908720934;
    g = 872390749;
    cout << "请输入模式：";
    cin >> c;
    do
    {
        ifstream myfile("C:\\Users\\zc830\\Desktop\\点券.txt");
        myfile >> shulian;
        if (c == 0)
        {
            cout << "请输入模式：";
            cin >> c;
        }
        if (c == 1)
        {
            cout << "购买模式" << endl;
            system("pause");
            cout << "请输入购买数量：";
            cin >> a;
            cout << "请输入兑换码(没有则输入0)";
            cin >> b;
            if ((b == d) || (b == f) || (b == e) || (b == g))
            {
                cout << "应付金额为：" << a * 0.6 / 10 << endl;
                cout << "按下付款" << endl;
                system("pause");
                a = a + shulian;
                ofstream outfile("C:\\Users\\zc830\\Desktop\\点券.txt");
                outfile << a;
                c = 0;
            }
            else if (b == 0)
            {
                cout << "应付金额为：" << a / 10 << endl;
                cout << "按下付款" << endl;
                system("pause");
                ofstream outfile("C:\\Users\\zc830\\Desktop\\点券.txt", ios::trunc);
                outfile << a+shulian;
                c = 0;
            }
            else
            {
                cout << "输入错误，请重新输入" << endl;
            }
        }
        else if (c == 2)
        {
            c = 0;
            cout << "游戏开始" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■你■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "■■■■■■■■■■■■■■" << endl;
            cout << "6是前进，5是左，7是右：";
            cin >> u;
            if (u == 6)
            {
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■你■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                u = 0;
                cout << "6是前进，5是左，7是右：";
                cin >> u;
                if (u == 6)
                {
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■你■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    u = 0;
                }
                else if (u == 5)
                {
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■你■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                    cout << "■■■■■■■■■■■■■■" << endl;
                }
            }
            else if (u == 5)
            {
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■你■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                u = 0;
            }
            else if (u == 7)
            {
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■你■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                cout << "■■■■■■■■■■■■■■" << endl;
                u = 0;
            }
            system("pause");
        }
        else if (c == 3)
        {
            cout << "皮肤商城" << endl;
            system("pause");
            cout << "模式未开发完成（施工队回家了）" << endl;
            c = 0;
            cout << "欢迎来到皮肤商城";
        }
        else if (c == 4)
        {
            cout << "退出" << endl;
            system("pause");
            break;
        }
        else if (c == 5)
        {
            cout << "清屏" << endl;
            system("pause");
            system("cls");
            c = 0;
        }
        else if (c == 6)
        {
            cout << "点券查询模式" << endl;
            system("pause");
            ifstream myfile("C:\\Users\\zc830\\Desktop\\点券.txt");
            myfile >> shulian;
            cout << "您的点券还剩" << shulian << endl;
            c = 0;
        }
    } while (1);
}