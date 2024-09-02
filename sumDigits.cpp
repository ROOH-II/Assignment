#include<iostream>
using namespace std;

#include <iostream>

int main() {
    int n;
    int sum=0;
    cout<<"enter a positive digit"<<endl;
    cin>>n;

    for (; n > 0; n /= 10) {
        sum += n%10;
    }

    cout << "Sum of digits "<<"  "<< sum <<endl;

    return 0;
}


