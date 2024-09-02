#include <iostream>
using namespace std;
int perfectNum(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin>>n;

    if (perfectNum(n)) {
        cout<<"is a perfect number"<<n<<endl;
    } else {
        cout<<"not perfect"<<endl;
    }
    return 0;
}