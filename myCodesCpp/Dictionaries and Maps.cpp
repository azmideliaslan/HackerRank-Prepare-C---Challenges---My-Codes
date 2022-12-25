#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    std::cin >> n;  // read the number of entries in the phone book

    // create a map to store the phone book
    std::map<std::string, std::string> phone_book;
    for (int i = 0; i < n; i++) {
        std::string name, phone;
        std::cin >> name >> phone;  // read the name and phone number
        phone_book[name] = phone;  // store the entry in the map
    }

    // read and process the queries
    std::string query;
    while (std::cin >> query) {
        // check if the query is in the map
        if (phone_book.count(query) > 0) {
            std::cout << query << "=" << phone_book[query] << std::endl;
        }
        else {
            std::cout << "Not found" << std::endl;
        }
    }

    return 0;
}
