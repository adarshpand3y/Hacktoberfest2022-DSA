#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &v)
{

    for (int i = 1; i < v.size();)
    {
        if (v[i] == v[i - 1])
            v.erase(v.begin() + i);
        else
            i++;
    }
    return v.size();
}
int main()
{
    vector<int> v = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    return removeDuplicates(v);
}
