#include <iostream>
using namespace std;

int main() {
    cout << "Enter the sentence you would like to make a wave with\n> ";

    string input;
    getline(cin, input);

    cout << endl;

    for(int i = 0; i < input.length(); i++){
        for (int l = 0; l <= i; l++){
            cout << input[l];
        }
        cout << endl;
    }

    for(int i = input.length() - 1; i > 0; i--){
        for (int l = 0; l <= i - 1; l++){
            cout << input[l];
        }
        cout << endl;
    }
    return 0;
}