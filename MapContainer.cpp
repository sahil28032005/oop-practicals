#include <iostream>
using namespace std;
#include <map>
int main()
{
    map<string, int> myMap;
    myMap["uttar_pradesh"] = 199581477;
    myMap["maharashtra"] = 112372972;
    myMap["a"] = 112372972;
    myMap["b"] = 112372972;
    myMap["c"] = 112372972;

    cout << "enter the name of the state";
    string stateName;
    cin >> stateName;
    // cout << "the population of the state is " << myMap[stateName] << endl;
    auto iterator=myMap.find(stateName);
    if(iterator != myMap.end()){
        cout<<"found "<<iterator->second << endl;
    }
    else{
        cout<<"not found";
    }
    return 0;
}