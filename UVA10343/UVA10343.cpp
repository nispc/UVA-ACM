#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghi";
    map += "jklmnopqrstuvwxyz0123456789+/=";

    char input;
    stringstream buffer;

    int inputTimes = 0;

    while(cin >> input)
    {
        if(map.find(input) == std::string::npos && input != '#')
           continue;

        inputTimes++;

        if(input != '#')
            buffer << input;
        else if(inputTimes == 1)
            break;
        else
        {
            inputTimes = 0;

            string str;
            buffer >> str;

            int length = str.length();

            for(int i = 0;i < length;i+=4)
            {
                stringstream bit;
                for(int j = 0;j < 4;j++)
                {
                    int code = map.find(str[i+j]);

                    for(int mask = 1 << 5;mask > 0;mask >>= 1)
                    {
                        if(mask & code)
                            bit << "1";
                        else
                            bit << "0";
                    }
                }
                string tmp;
                bit >> tmp;
                for(int j = 0;j < 24;j += 8)
                {
                    string subTmp = tmp.substr(j,8);
                    //cout << subTmp << " ";
                    int sum = 0;
                    for(int k = 0;k < 8;k++)
                    {
                        sum *= 2;
                        sum += subTmp[k] - '0';
                    }
                    if(sum)
                        cout << (char)sum;
                }
            }
            cout << "#";
            buffer.clear();
         }
    }
    return 0;
}
