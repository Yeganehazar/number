#include <iostream>
#include <string>
#include <regex>

using namespace std;


struct MobileNumber {
    string number;

    
    bool isValid() {
        
        regex pattern("^09\\d{9}$");

        
        return regex_match(number, pattern);
    }
};

int main() {
    MobileNumber mobile;

    
    cout << "Enter mobile number (e.g., 09123456789): ";
    cin >> mobile.number;

    
    if (mobile.isValid()) {
        cout << "Valid mobile number." << endl;
    } else {
        cout << "Invalid mobile number. Please enter a valid mobile number." << endl;
    }

    return 0;
}
