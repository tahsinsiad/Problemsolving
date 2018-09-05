#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int n;
    int carry = 0;
    cin >>n;
    int a[200];
    a[0] = 1;

    int k = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            a[j] = a[j] * i + carry;
            carry = a[j] / 10;
            a[j] = a[j] % 10;
        }
        while(carry)
        {
            k++;
            a[k] = carry % 10;
            carry /= 10;
        }
    }

    for(int i = k; i >= 0; i--)
    {
        cout << a[i];
    }
    return 0;
}
