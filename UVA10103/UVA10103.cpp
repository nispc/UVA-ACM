#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        string answer;
        for(int i = 0;i < n;i++)
        {
            int m;
            cin >> m;

            string n1,n2;
            for(int j = 0;j < m;j++)
            {
                char tmp1,tmp2;
                cin >> tmp1 >> tmp2;
                n1 += tmp1,n2 += tmp2;
            }

            reverse(n1.begin(), n1.end());
            reverse(n2.begin(), n2.end());

            string sum(m+1,'0');

            for(int j = 0;j < m;j++)
            {
                sum[j] += (n1[j]+n2[j]-2*'0')%10;
                sum[j+1] += (n1[j]+n2[j]-2*'0')/10;
            }

            reverse(sum.begin(), sum.end());
            if(sum[0] == '0')
                sum = sum.substr(1);

            if(i)
                answer += "\n\n";
            answer += sum;
        }
        cout << answer;
    }
    return 0;
}
