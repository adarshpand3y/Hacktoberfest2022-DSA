#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;
 
bool isIsomorphic(string X, string Y)
{
    if (X.length() != Y.length()) {
        return false;
    }
     unordered_map<char, char> map;
     unordered_set<char> set;
 
    for (int i = 0; i < X.length(); i++)
    {
        char x = X[i], y = Y[i];
 
        if (map.find(x) != map.end())
        {
            if (map[x] != y) {
                return false;
            }
        }
 
        else {
            if (set.find(y) != set.end()) {
                return false;
            }
 
            map[x] = y;
            set.insert(y);
        }
    }
 
    return true;
}
 
int main()
{
    string X = "ACAB";
    string Y = "XCXY";
 
    if (isIsomorphic(X, Y)) {
        cout << X << " and " << Y << " are Isomorphic";
    }
    else {
        cout << X << " and " << Y << " are not Isomorphic";
    }
 
    return 0;
}
