#include <iostream>
using namespace std;

class calculator
{
    public:
    int cal()
    {
        int u, num, i, sum = 0, a;
        cout << "enter the number: 1 - addition \n  2 - substraction \n   3 - multiplication \n   4 - division :";
        cin >> u;

        if (u == 1)
        {
            cout << "how many number you want : ";
            cin >> a;

            for (i = 0; i < a; i++)
            {
                cin >> num;
                sum = sum+num;
            }
            cout << "addition is : " << sum;
        }

        else if (u == 2)
        {
            int z;
            cout << "how many number you want : ";
            cin >> a;
            if (a > 0)
            {
                cin >> z;
                for (i = 1; i < a; i++)
                {
                    cin >> num;
                    z =z+ num;
                }
                cout << "substraction is : " << z;
            }
        }

        else if (u == 3)
        {
            int x;
            cout << "how many number you want : ";
            cin >> a;
            if (a > 0)
            {
                cin >> x;
                for (i = 1; i < a; i++)
                {
                    cin >> num;
                    x =x* num;
                }
                cout << "multiplication is : " << x;
            }
        }

        else if (u == 4)
        {
            int y;
            cout << "how many number you want : ";
            cin >> a;
            if (a > 0)
            {
                cin >> y;
                for (i = 1; i < a; i++)
                {
                    cin >> num;
                    y =y/ num;
                }
                cout << "division is : " << y;
            }
        }
        return 0;
    }
};

int main()
{
    calculator c;
    c.cal();

    return 0;
}