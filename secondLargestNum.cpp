#include<iostream>
using namespace std;
int findseclargest(int a[],int s){
   int largest = a[0];
    int secLargest = a[0];
    for (int i=1;i<s;i++) {
        if (a[i]>largest) {
            secLargest = largest; 
            largest = a[i];
        } else if (a[i] > secLargest && a[i] != largest) {
            secLargest = a[i];
        }
    }
    if (secLargest == largest) {
        cout << "NOT FOUND" <<endl;
        return -1;  
    }
    return secLargest;
}

int main() {
    int a[5] = {4,11,43,36,10};
    int s = sizeof(a) / sizeof(a[0]);
    int secLargest = findseclargest(a,s);
    if (secLargest != -1) {
        cout << "second largest num: " << secLargest <<endl;
    }

    return 0;
}
