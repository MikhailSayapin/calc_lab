#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char* argv[])
{
    cout << "z:\t" << argc - 1 << endl;
    for (int a = 1; a <= argc - 1; a++)
    {
        cout << "argv\t[" << a << "]\t=\t" << argv[a] << endl;
    }
    {
        char b;
        b = argv[2][0];
        int x, y;
        y = atoi(argv[3]);
        x = atoi(argv[1]);
        switch (b)
        {
            case '+':
            {
                cout << x << "+" << y << "=" << x + y;
                break;
            }
            case '-':
            {
                cout << x << "-" << y << "=" << x - y;
                break;
            }
            case '*':
            {
                cout << x << "*" << y << "=" << x * y;
                break;
            }
            case '/':
            {
                if (y != 0)
                    cout << x << "/" << y << "=" << (double)x / y;
                else
                    cout << "err";
                break;
            }
            default:
                cout << "err";
        }
        return 0;
    }
}
