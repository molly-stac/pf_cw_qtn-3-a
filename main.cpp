#include <iostream>
using namespace std;

int sum_from_to(int first, int last) {
    int sum = 0;
    
    if (first > last) {
    	swap(first, last);
    }
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
	int first =1, last =5;
    cout << "Enter the first integer: ";
    cin >> first;
    cout << "enter the last integer: ";
    cin >> last;
    
    int result = sum_from_to(first, last);
    cout << "The sum from " << first << " to " << last << " is: " << result << endl;
    
    return 0;
}
