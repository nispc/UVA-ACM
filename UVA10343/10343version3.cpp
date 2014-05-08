#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char,int> dict;
    for(int i = 0; i < 26; i++)
        dict[(char)i+'A'] = i;
    for(int i = 0; i < 26; i++)
        dict[(char)i+'a'] = i+26;
    for(int i = 0; i < 10; i++)
        dict[(char)i+'0'] = i+52;
    dict['+'] = 62;
    dict['/'] = 63;
    dict['='] = 64;

    int n = 0;
    string input;
    char c;
    string answer;

    bool flag = false;

    while(cin >> c)
    {
        if(c == '#')
        {
            if(flag)
            {
                cout << answer << endl;
                answer = "";
            }
            else
            {
                    answer += '#';
                    flag = true;
            }
        }
        else if(dict.count(c))
        {
            flag = false;
            if(n == 4)
                n = 0,input = "";
            input += c,n++;
        }

        if(n == 4)
        {
            string bitmap;
            for(int i = 0; i < 4; i++)
            {
                for(int mask = 1 << 5; mask > 0; mask >>= 1)
                {
                    if(dict[input[i]]&mask)
                        bitmap += "1";
                    else
                        bitmap += "0";
                }
            }

            for(int i = 0; i < 24; i+=8)
            {
                int tmp = 0;
                for(int j = 0; j < 8; j++)
                {
                    tmp *= 2;
                    tmp += bitmap[i+j] - '0';
                }
                if(tmp)
                    answer += (char)tmp;
            }
        }
    }
    cout << answer;

    return 0;
}
