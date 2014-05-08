#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<char,int> dict;
    for(int i = 0;i < 26;i++)
        dict[(char)i+'A'] = i;
    for(int i = 0;i < 26;i++)
        dict[(char)i+'a'] = i+26;
    for(int i = 0;i < 10;i++)
        dict[(char)i+'0'] = i+52;
    dict['+'] = 62;
    dict['/'] = 63;
    dict['='] = 64;

    char c;
    string input;
    int count = 0;

    while(cin >> c)
    {
        if(c == '#')
        {
            int inputLen = input.length();
            if(inputLen)
            {
                string bitmap ;
                for(int i = 0;i < inputLen;i++)
                {
                    for(int mask = 1 << 5;mask > 0;mask >>= 1)
                    {
                        if(dict[input[i]]&mask)
                            bitmap += "1";
                        else
                            bitmap += "0";
                    }
                }

                int bitmapLen = bitmap.length();
                string ouput;

                for(int i = 0;i < bitmapLen;i+=8)
                {
                    int tmp = 0;
                    for(int j = 0;j < 8;j++)
                    {
                        tmp *= 2;
                        tmp += bitmap[i+j] - '0';
                    }
                    if(tmp)
                        ouput += (char)tmp;
                }

                cout << ouput << "#";

                input.erase();
                count = 0;
            }
            else
            {
                cout << endl;
                break;
            }
        }
        else if(dict.count(c))
        {
            input += c;
            count++;
        }
    }
    return 0;
}
