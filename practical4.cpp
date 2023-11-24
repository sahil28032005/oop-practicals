#include <iostream>
using namespace std;
#include <fstream>
class FileOperations
{
public:
    void writeDataToFile(string filename)
    {
        ofstream ofs(filename);
        if (ofs.is_open())
        {
            cout << "success..." << endl;
            for (int i = 0; i <= 100; i++)
            {
                if (i % 10 == 0 && i > 0)
                {
                    ofs << " " << i << "\n";
                    continue;
                }

                ofs << " " << i;
            }
        }
        else
        {
            cout << "failure..." << endl;
        }
        ofs.close();
    }
    void readFromFile(string filename)
    {
        ifstream ifs(filename);
        if (ifs.is_open())
        {
            string ipline;
            cout << "success..." << endl;
            while (getline(ifs, ipline))
            {
                cout << ipline;
            }
        }
        else
        {
            cout << "failure..." << endl;
        }
        ifs.close();
    }
};

int main()
{
    FileOperations fop;
    fop.writeDataToFile("output.txt");
    fop.readFromFile("output.txt");
    return 0;
}