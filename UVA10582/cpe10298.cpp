#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    while(cin >> input)
    {
        if(input == ".")
            break;

        int length = input.length();
        for(int i = 1;i < length+1;i++)
        {
            if(length % i == 0)
            {
                string substr = input.substr(0,i);
                bool flag = true;
                int findTimes = length/i;
                for(int j = 0;j < findTimes;j++)
                {
                    if(input.find(substr,j*i) != j*i)
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    cout << length/i << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
