#include<iostream>
using namespace std;
main(){
 
string titles[100], authors[100];
bool borrowed[100];
int total = 0;
    int c, n;
    while (true) {
        cout << "\n1.Add  2.View  3.Borrow  4.Return  5.Exit\nChoice: ";
        cin >> c;
        if (c == 1) {
            cout << "Title: ";  cin.ignore(); getline(cin, titles[total]);
            cout << "Author: "; getline(cin, authors[total]);
            borrowed[total++] = false;
            cout << "Added!\n";
 
        } else if (c == 2) {
            for (int i = 0; i < total; i++)
                cout << i+1 << ". " << titles[i] << " - " << authors[i]
                     << " [" << (borrowed[i] ? "Borrowed" : "Available") << "]\n";
        } else if (c == 3 || c == 4) {
            cout << "Book number: "; cin >> n; n--;
            if (c == 3) { borrowed[n] = true;  cout << "Borrowed: " << titles[n] << "\n"; }
            else        { borrowed[n] = false; cout << "Returned: " << titles[n] << "\n"; }
        } else if (c == 5) {
            cout << "Goodbye!\n";
        }
    }
}
