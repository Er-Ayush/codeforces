#include <iostream>
using namespace std;
int b2d(int n)
{
    int no = n;
    int d = 0;
    int base = 1;
    int t = no;
    while (t) 
    {
        int final = t % 10;
        t = t / 10;
        d += final * base;

        base = base * 2;
    }

    return d;
}
int main()
{
    int num = 10101001;
    cout<<b2d(num)<<endl;
}