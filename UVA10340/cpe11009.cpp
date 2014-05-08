#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1,str2;
    while(cin >> str1 >> str2)
    {
        int i = 0,j = 0;
        int str2len = str2.length();
        while(j < str2len)
        {
            if(str1[i] == str2[j])
            {
                i += 1;
                j += 1;
            }
            else
            {
                j += 1;
            }
        }
        if(i == str1.length())
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}
