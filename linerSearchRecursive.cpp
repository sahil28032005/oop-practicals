#include <iostream>
using namespace std;
// linear search recursive approach
int anotherlinearSearch(int key, int *arr, int size)
{
    if (*arr == key)
    {
        return 1;
    }
    else if (size == 1)
    {
        return -1;
    }

    return anotherlinearSearch(key, (arr + 1), size - 1);
}
int linearSearch(int val, int *arr, int size, int index)
{
    if (index > size)
    {
        return -1;
    }
    else if (arr[index] == val)
    {
        return index;
    }
    return linearSearch(val, arr, size, (index + 1)); // iff base case calls it provide -1 to all functions chain because of tail recursion
}
// used two pointers
// string reverseStr(string &s, int i, int j)
// {
//     if (i > j)
//     {
//         return s;
//     }
//     int temp = s[i];
//     s[i] = s[j];
//     s[j] = temp;
//     return reverseStr(s, i + 1, j - 1);
// }
// using one pointer
void mergeSort(int *arr,int low,int high){
  if(low>high){
    return;
  }

}
string reverseStr(string &s, int i)
{
    if (i > s.length() - 1-i)
    {
        return s;
    }
    int temp = s[i];
    s[i] = s[s.length() - 1 - i];
    s[s.length() - 1 - i] = temp;
    return reverseStr(s, i + 1);
}
int main()
{
    int a[5] = {12, 22, 34, 56, 78};
    string s = "abcde";
    // linearSearch(565, a, 5, 0) > 0 ? cout << "found" : cout << "not found" << endl;
    cout << reverseStr(s, 0) << endl;
    cout << s;

    return 0;
}
