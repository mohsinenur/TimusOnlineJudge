#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x > 1)
    {
        int sum = 0, i;
        for(i=1; i <= x; i++)
        {
            sum = i+sum;
        }
        cout << sum << endl;

    }else if(x < 1)
    {
        int sum = 0, i;
        for(i=1; i >= x; i--)
        {
            sum = i+sum;
        }
        cout << sum << endl;
    }else if(x == 1 || x == 0)
    {
        cout << x << endl;
    }

    return 0;
}
