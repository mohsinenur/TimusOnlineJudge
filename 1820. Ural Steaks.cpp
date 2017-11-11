#include<iostream>
using namespace std;
int main()
{
    long long n,k;
    cin >> n >> k;
    if((2*n)%k >= 1)
    {
        k=((2*n)/k)+1;
        cout << k << endl;
    }else
    {
        cout << (2*n)/k << endl;
    }
    return 0;
}
