// lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Part 1
    int n = 0;
    cout << "Enter number of asterisks per side: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << " ";
        for (int y = 1; y <= n; y++) {
            if (i == 1 || i == n || y == 1 || y == n) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    //Part 2
    int n = 0;
    cout << "Enter number of asterisks per side: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int k = n; k >= i; k--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int m = 2; m <= i; m++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int h = n - 1; h >= 1; h--) {
        cout << "  ";
        for (int q = n - 1; q > h; q--) {
            cout << " ";
        }
        for (int o = 1; o <= h; o++) {
            cout << "*";
        }
        for (int u = 2; u <= h; u++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

    //Part 3
    float sum = 0.0;
    float sumsquare = 0.0;
    float x;
    int n = 0;
    cout << "Enter numbers - Q to quit: ";
    while (1) {
        cin >> x;
        if (x == 0)
            break;
        n++;
        sum += x;
        sumsquare += x * x;
    }
    cout << "n = " << n << ", ";
    cout << "average = " << (sum * 1.0 / n) << ", ";
    cout << "standard deviation = " << pow(((sumsquare - (sum * sum * 1.0) / n) * 1.0 / (n - 1)), 0.5) << endl;
}

