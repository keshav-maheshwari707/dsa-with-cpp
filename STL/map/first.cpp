// map - (key, value) pairs.
// keys are always unique but values can be same.

#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;

    m["car"] = 20; // first pair ("car", 20) is created.
    m["car"] = 50; // it will override the previous value(20) to 50. but a new key can not be inserted with the same name.
    m["laptop"] = 100;
    m["earbuds"] = 10;

    m.insert({"bikes", 30});
    
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    } // output will be printed in ascending order (lexicographically here). map automatically sorts our data in ascending order according to the key.

    cout << m.count("laptop") << endl; // count returns how many key are there with the name "laptop". it does not return the value of the key "laptop".

    m.erase("earbuds"); // it will the key-value pair of the key "earbuds".

    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    if(m.find("car") != m.end()) {  // find function checks if there exists a key in the map or not.
        cout << "found\n";
    } else {
        cout << "not found";
    }
}