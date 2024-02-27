#include <iostream>
using namespace std;
#include <fstream>
int main()
{
    ofstream ofs("abc.text");
    ifstream ifs("abc.text");
    if (ifs.is_open()) 
    {
        cout << "sucess"<<cin.fail();
    }
    else
    {
        cout << "error";
    }
    return 0;
}