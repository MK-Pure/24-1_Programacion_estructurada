// P010_Conditionals_V0.cpp.
// Carlos Enciso.

#include <iostream>
#include <string>

using namespace std;

// Function to check if the username and password match stored information
bool authenticateUser(const string& username, const string& password) {
    // Define user information within the code
    const string usernames[] = { "user1", "user2", "user3" };
    const string passwords[] = { "pass1", "pass2", "pass3" };

    // Check if the entered username and password match any stored information
    for (size_t i = 0; i < sizeof(usernames) / sizeof(usernames[0]); ++i) {
        if (usernames[i] == username && passwords[i] == password) {
            return true; // Match found
        }
    }

    return false; // No match found
}

int main() {
    string enteredUsername, enteredPassword;

    bool loginSuccess = false;

    // Loop until the correct credentials are provided
    do {
        // /User input
        cout << "Enter your username: ";
        cin >> enteredUsername;

        cout << "Enter your password: ";
        cin >> enteredPassword;

        // Authenticate user
        loginSuccess = authenticateUser(enteredUsername, enteredPassword);

        if (!loginSuccess) {
            cout << "Invalid username or password. Please try again.\n";
        }

    } while (!loginSuccess);

    cout << "Login successful. Welcome, " << enteredUsername << "!\n";

}
