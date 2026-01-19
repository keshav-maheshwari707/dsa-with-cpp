#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> m; 

    // multimap - it can have multiple keys of same name. 
    // and for data to be inserted in multimap we can not use [], we have to insert or emplace function.

    m.insert({"tv", 10});
    m.insert({"tv", 10});
    m.emplace("tv", 10);  
    m.emplace("tv", 10);  
    // both function works same.

    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    // m.erase("tv"); // it will delete all the keys with name "tv".

    // if we want to delete any one instance of tv, then we have to paas iterator.

    m.erase(m.find("tv"));  // find function will give the iterator.

    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }  // only 3 values will be printed, 1 gets erased.
}