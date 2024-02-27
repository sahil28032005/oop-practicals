#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

class PersonDetails
{
public:
    string name;
    string doB;
    string phoneNumber;

    bool operator<(const PersonDetails pd) const
    {
        return name < pd.name;
    }
};
void displayPerson(PersonDetails p)
{
    cout << "Person name: " << p.name << endl;
    cout << "Phone number: " << p.phoneNumber << endl;
    cout << "DoB: " << p.doB << endl;
}
int main()
{
    vector<PersonDetails> data;
  
    int choise = 0;
    while (1)
    {
        // cin.ignore();
PersonDetails p;
        cout << "enter your choise...\n1:add personDetails\n2:display personDetails in sorted manner\n3:search personDetails by name\n4:exit" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            
            cout << "Enter your name" << endl;
            cin >> p.name;
            cout << "Enter phone number" << endl;
            cin >> p.phoneNumber;
            cout << "Enter doB" << endl;
            cin >> p.doB;
            data.push_back(p);
            break;

        case 2:
            sort(data.begin(), data.end());
            for (auto &personIterator : data)
            {
                displayPerson(personIterator);
            }
            break;
        case 3:
            cout << "enter name to search in previous records" << endl;
            string name;
            cin >> name;
            const bool found = binary_search(data.begin(), data.end(), PersonDetails{name, "", ""});
            if (found)
            {
                cout << "entered name was found" << endl;
            }
            else
            {
                cout << "no data found" << endl;
            }
            break;
        }
    }

    return 0;
}