#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string nn = "123";
    int n;
    stringstream ss;
    ss << nn;
    ss >> n;
    cout << nn << " " << n << endl;
    reverse(nn.begin(),nn.end());
    ss.clear();
    ss << nn;
    ss >> n;
        cout << nn << " " << n << endl;
}
