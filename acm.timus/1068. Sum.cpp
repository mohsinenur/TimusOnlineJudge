#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0 || n==1)
        cout << 1 << endl;
    else
    {
        if(n>1)
        {
            int t=0;
            for(int i=1; i<=n; i++)
            {
                t+=i;
            }
            cout << t << endl;
        }else
        {
            int t=-1;
            n=abs(n);
            for(int i=1; i<=n; i++)
            {
                t+=i;
            }
            cout << -(t) << endl;
        }
    }
    return 0;
}
