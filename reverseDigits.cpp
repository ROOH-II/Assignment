#include<iostream>
using namespace std;
int main() {
    int n=0;
    int reversedigit=0;
    cout<<"Enter a number: ";
    cin>>n;;
    while (n!=0) {
        int digit =n % 10;
        reversedigit= reversedigit * 10 + digit;
        n/=10;
    }

    cout <<"Reversed digit: "<< reversedigit<<endl;

    return 0;
}
