#include <iostream>
using namespace std;

int bestCase(int x,int n)
{
    if(n == 0)
        return 0;
    else if(x < (1<<n-1))
        return bestCase(x,n-1);
    else
        return bestCase(x-(1<<n-1),n-1) + 1;
}

int worstCase(int x,int n)
{
    int rev = (1<<n)-x;
    int i = 0;
    while(rev % 2 == 0)
    {
        rev /= 2;
        i++;
    }
    return (1<<n)-(1<<i)+1;

}

int main()
{
    int times;
    cin >> times;
    while(times--)
    {
        int n,x;
        cin >> n >> x;

        cout << bestCase(x,n)+1 << " ";
        cout << worstCase(x,n) << endl;

    }

}
