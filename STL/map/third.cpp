#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // unordered map - it stores data in unsorted mannner, unlike map.
    // and it can not have keys with same name, it can only have keys with unique  name.

    unordered_map<string, int> m;
    m.emplace("tv", 10);
    m.emplace("tv", 10);
    m.emplace("tv", 10);
    m.emplace("tv", 10); // only one key with the name "tv" will be created.

    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }

    m.emplace("laptop", 34);
    m.emplace("cycle", 34);
    m.emplace("car", 34);

    for(auto i : m) {
        cout << i.first << " " << i.second << endl;
    }  // data will not be printed in sorted order, it will be random.
}



// we use unordered map more than map because operations like count, insert, earse in unordered map has a time complexity of O(1) while it is O(n log n) in the case of map.