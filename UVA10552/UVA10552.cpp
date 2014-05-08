#include <iostream>
#include <string>
using namespace std;

int main()
{
    int id = 0;
    int n;
    while(true)
    {
        id++;
        string input1;
        cin >> n;
        cin.get();

        if(!n)
            break;

        for(int i = 0;i < n;i++)
        {
            string line;
            getline(cin,line);
            input1 += line+'\n';
        }

        string input2;
        cin >> n;
        cin.get();

        for(int i = 0;i < n;i++)
        {
            string line;
            getline(cin,line);
            input2 += line+'\n';
        }


        if(input1 == input2)
        {
            cout << "Run #" << id << ": Accepted" << endl;
        }
        else
        {
            int inputLen1 = input1.length();
            int inputLen2 = input2.length();

            string numPart1,numPart2;

            while(inputLen1--)
            {
                char tmp = input1[inputLen1];
                if(tmp >= '0' && tmp <= '9')
                    numPart1 += tmp;
            }
            while(inputLen2--)
            {
                char tmp = input2[inputLen2];
                if(tmp >= '0' && tmp <= '9')
                    numPart2 += tmp;
            }
            if(numPart1 == numPart2)
                cout << "Run #" << id << ": Presentation Error" << endl;
            else
                cout << "Run #" << id << ": Wrong Answer" << endl;
        }
    }

    return 0;
}
