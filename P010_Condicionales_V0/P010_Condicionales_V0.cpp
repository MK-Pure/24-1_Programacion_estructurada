// P010_Conditionals_V0.cpp.;
// Carlos Enciso.

#include <iostream>
#include <string>

using namespace std;

bool authenticateUser(const string& username, const string& password) {

    const string usernames[] = { "user1", "user2", "user3" };
    const string passwords[] = { "pass1", "pass2", "pass3" };


    for (size_t i = 0; i < sizeof(usernames) / sizeof(usernames[0]); ++i) {
        if (usernames[i] == username && passwords[i] == password) {
            return true; 
        }
    }

    return false; 
}

int main() {
    string enteredUsername, enteredPassword;

    bool loginSuccess = false;


    do {
        cout << "Enter your username: ";
        cin >> enteredUsername;

        cout << "Enter your password: ";
        cin >> enteredPassword;

        loginSuccess = authenticateUser(enteredUsername, enteredPassword);

        if (!loginSuccess) {
            cout << "Invalid username or password. Please try again.\n";
        }

    } while (!loginSuccess);

    cout << "Login successful. Welcome, " << enteredUsername << "!\n";

}
