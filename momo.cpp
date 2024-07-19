#include <iostream>
using namespace std;

string shortcode;
int option1;
int option2;
string momoNumber;
double amount;

int main() {
    cout << "####### Welcome to Mini MoMo..! ########" << endl;
    cout << "Please Enter your shortcode: ";
    cin >> shortcode;

    if (shortcode == "*170#") {
        cout << "1. Transfer Money\n";
        cout << "2. MoMo Pay & PayBill\n";
        cout << "3. Airtime & Bundles\n";
        cout << "4. Allow Cashout\n";
        cout << "5. Financial Services\n";
        cout << "6. My Wallet" << endl;
        cin >> option1;

        if (option1 == 1) {
            cout << "1. MoMo User\n";
            cout << "2. Non-MoMo User\n";
            cout << "3. Send With Care\n";
            cout << "4. Favourite\n";
            cout << "5. Other Networks\n";
            cout << "6. Bank Account" << endl;
            cin >> option2;

            if (option2 == 1) {
                cout << "Enter MoMo Number: ";
                cin >> momoNumber;
                cout << "Enter Amount to Send: ";
                cin >> amount;
                cout << "You have sent " << amount << " Ghana cedis to " << momoNumber << "." << endl;
            } else if (option2 == 2) {
                cout << "You selected Non-MoMo User" << endl;
            } else if (option2 == 3) {
                cout << "You selected Send With Care" << endl;
            } else if (option2 == 4) {
                cout << "You selected Favourite" << endl;
            } else if (option2 == 5) {
                cout << "You selected Other Networks" << endl;
            } else if (option2 == 6) {
                cout << "You selected Bank Account" << endl;
            } else {
                cout << "Invalid Option" << endl;
            }
        } else if (option1 == 2) {
            cout << "1. MoMo Pay\n";
            cout << "2. Pay Bill\n";
            cout << "3. GHQR\n";
            cout << "4. Fuels\n";
            cout << "5. Ghana.gov" << endl;
        } else if (option1 == 3) {
            cout << "1. Airtime\n";
            cout << "2. Data Bundles\n";
            cout << "3. Combo Bundles\n";
        } else if (option1 == 4) {
            cout << "You selected Allow Cashout" << endl;
        } else if (option1 == 5) {
            cout << "1. Bank Services\n";
            cout << "2. Savings & Loans\n";
            cout << "3. Pensions\n";
        } else if (option1 == 6) {
            cout << "1. Check Balance\n";
            cout << "2. My Statements\n";
            cout << "3. Change Pin\n";
            cout << "4. Reset Pin" << endl;
        } else {
            cout << "Invalid Option" << endl;
        }
    } else {
        cout << "Invalid Shortcode" << endl;
    }

    return 0;
}
