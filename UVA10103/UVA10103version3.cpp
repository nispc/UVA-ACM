#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

char n1[1000001],n2[1000001],sum[1000002];

int main()
{
    int n;
    while(cin >> n)
    {
        for(int i = 0;i < n;i++)
        {
            int m;
            cin >> m;

            for(int j = 0;j < m;j++)
            {
                int tmp1,tmp2;
                cin >> tmp1 >> tmp2;
                n1[j] = tmp1,n2[j] = tmp2;
            }

            for(int j = 0;j < m+1;j++)
                sum[j] = 0;
            sum[m+1] = '\0';

            reverse(n1,n1+m);
            reverse(n2,n2+m);

            for(int j = 0;j < m;j++)
                sum[j] += n1[j] + n2[j];

            for(int j = 0;j < m;j++)
            {
                sum[j+1] += sum[j]/10;
                sum[j] = sum[j]%10;
            }

            for(int j = 0;j < m+1;j++)
                sum[j] += '0';

            reverse(sum,sum+m+1);

            int digit = 0;
            while(sum[digit] == '0')
                digit++;

            if(i)
               cout << endl;

            for(int j = digit;j < m+1;j++)
                cout << sum[j];

            cout << endl;
        }
    }
    return 0;
}
