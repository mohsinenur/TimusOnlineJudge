#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int n);
int main()
{
   float n;
   cout << "Enter binary number: ";
   cin >> n;
   cout << binaryToDecimal(n) << endl;
   return 0;
}

int binaryToDecimal(int n)
{
    int decimal=0, i=0, rem;
    while (n!=0)
    {
        rem = n%10;
        n/=10;
        decimal += rem*pow(2,i);
        ++i;
    }
    return decimal;
}
