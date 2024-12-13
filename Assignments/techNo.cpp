#include<iostream>
#include <cmath>

using namespace std;

int len (int n) {
    int count = 0;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }
    return count;
}

int main() {
    int n;

    cout << "Enter No: " << endl;//2024
    cin >> n;

    int noSize = len(n);//4

    if (noSize % 2 == 0) {//even
        int half = noSize / 2;//2


        int l = n / ((int)pow(10, half)); //20
        int r = n % ((int)pow(10, half)); //24

        int sum = l + r; //44

        cout << "sum is: " << sum << endl;

        int res = sum * sum; //202

        cout << "res is: " << res << endl;

        if (n == res) {
            cout << "it is a TechNo" << endl;
        } else {
            cout << "not a TechNo" << endl;
        }

    } else {
        cout << "Not a valid no. " << endl;
    }

    return 0;
}
