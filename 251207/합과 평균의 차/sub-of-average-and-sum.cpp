#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a+b+c;
    double avg = sum/3;

    cout << sum << '\n' << avg << '\n' << sum-avg;
    // Please write your code here.
    return 0;
}