#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int>parseInts(std::string str)
{ std:: vector<int>parseInts;
    parseInts.push_back( std::string str);	// Complete this function
     return vector<int>parseInts;
  }

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}


