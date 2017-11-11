#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
    string bsNum;
    int cntNmbr = 0;
    cin >> bsNum;

    for(int a=0; a<=bsNum.length(); a++)
    {
        if(bsNum[a] == '.')
            break;
        cntNmbr++;
    }
    int  cntNmbrc = cntNmbr-1;
    int des1 = 0;
    for(int a=0; a<=cntNmbr; a++)
    {
        if(bsNum[a] == '1')
        {
            des1 += pow(2,cntNmbrc);
        }
        cntNmbrc--;
    }

    int  cntNmbrcd = bsNum.length() - cntNmbr -1;
    float des2 = 0;
    for(int a=1; a<=cntNmbrcd; a++)
    {
            des2 += 1/(pow(2,a));
    }
    cout << des1 + des2  << endl;

    return 0;

}
