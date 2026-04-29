#include <iostream>
#include <map>
#include <string>
// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main

using namespace std;

int main() {
    
    multimap<int, string> studentMap;

    studentMap.insert({1311333, "Kohki"});
    studentMap.insert({120461, "Alice"});
    studentMap.insert({103374, "Bob"});
    studentMap.insert({120461, "Charlie"});
    studentMap.insert({132234, "Daisy"});

    cout << "ID\tName" << endl;
    cout << "------------------" << endl;
    
    for (const auto& student : studentMap) {
        cout << "ID: " << student.first << " | Name: " << student.second << endl;
    }

    return 0;
}
