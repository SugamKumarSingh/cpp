#include <iostream>
using namespace std;

int main()
{
    int n, num = 1;
    cout << "Enter length of base: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num;
            if (num > 9)
            {
                cout << " ";
            }
            else
            {
                cout << "  ";
            }
            num++;
        }
        cout << endl;
    }

    return 0;
}