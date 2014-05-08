/*************************************************************
 * Super Long Sums (CPE10510,UVA10013)- http://goo.gl/qOiegE *
 *                      2014/1/2 <WA>                        *
 *************************************************************/
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

            //�N�Ʀr1,�Ʀr2�s���r��n1,n2
            string n1,n2;
            for(int j = 0;j < m;j++)
            {
                char tmp1,tmp2;
                cin >> tmp1 >> tmp2;
                n1 += tmp1,n2 += tmp2;
            }

            reverse(n1.begin(), n1.end());
            reverse(n2.begin(), n2.end());

            //length of sum = m+1,filled with 0(!ASCII code)
            string sum(m+1,0);

            //sum = n1+n2
            for(int j = 0;j < m;j++)
                sum[j] += (n1[j]-'0') + (n2[j]-'0');

            //�վ�i��
            for(int j = 0;j < m;j++)
            {
                sum[j+1] += sum[j]/10;
                sum[j] = sum[j]%10;
            }

            //�վ㦨ASCII code
            for(int j = 0;j < m+1;j++)
                sum[j] += '0';

            reverse(sum.begin(), sum.end());

            //�h���e���h�l���s�Aex: 012 -> 12
            int digit = 0;
            while(sum[digit] == '0')
                digit++;
            sum = sum.substr(digit);

            //�ƪ�
            if(i)
                answer += "\n";
            answer += sum + "\n";
        }
        cout << answer;
    }
    return 0;
}
