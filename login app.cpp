#include <iostream>
using namespace std;

int main()
{
    string username;
    string password;
    string confirmPassword;
    string loginPass;
    
    while (true)
    {
        cout << "\n\n========================================\n";
        cout << "============= REGISTRATION =============\n";
        cout << "========================================\n";

        cout << "\n";

        cout << "Username : ";
        cin >> username;

        cout << "Password : ";
        cin >> password;

        cout << "Confirm your password : ";
        cin >> confirmPassword;
        while (true)
        {
            if (password == confirmPassword) {

                

                cout << "\n========================================\n";
                cout << "======== ENTER IN YOUR ACCOUNT =========\n";
                cout << "========================================\n";

                cout << "\n";

                cout << "Username : ";
                cin >> username;

                cout << "Password : ";
                cin >> loginPass;

                if (password == loginPass) {
                    cout << "======== WELCOME =========\n";
                    break;
                }
                
                else {
                    cout << "======== Wrong Password =========\n";
                }


            }
            else {
                cout << "\n========== PASSWORDS AREN`T THE SAME ========== ";
                break;
            }
        }
        if (password == loginPass) {
            break;
        }
    }
    


}
