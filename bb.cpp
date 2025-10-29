// Task 1
#include <iostream>
using namespace std;

int main() {
    int base, exp;
    cout << "Enter the base and exponent: ";
    cin >> base >> exp;
    int result = 1;
    for (int i = 0; i < exp; i++)
        result *= base;
    cout << base << "^" << exp << " = " << result << endl;
    return 0;
}

// Task 2
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    int sum = 0;
    for (int i = a; i <= b; i++)
        sum += i;
    cout << "Sum of numbers from " << a << " to " << b << " = " << sum << endl;
    return 0;
}

// Task 3
#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter the start and end of the range: ";
    cin >> start >> end;

    cout << "Perfect numbers in the range: ";
    for (int n = start; n <= end; n++) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0)
                sum += i;
        if (sum == n && n != 0)
            cout << n << " ";
    }
    cout << endl;
    return 0;
}

// Task 4
#include <iostream>
using namespace std;

int main() {
    string suit, rank;
    cout << "Enter the suit and rank of the card (for example: Hearts Queen): ";
    cin >> suit >> rank;
    cout << "Card: " << rank << " of " << suit << endl;
    return 0;
}

// Task 5
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a six-digit number: ";
    cin >> num;

    if (num < 100000 || num > 999999) {
        cout << "Error: The number is not six-digit!" << endl;
        return 0;
    }

    int d1 = num / 100000 % 10;
    int d2 = num / 10000 % 10;
    int d3 = num / 1000 % 10;
    int d4 = num / 100 % 10;
    int d5 = num / 10 % 10;
    int d6 = num % 10;

    if (d1 + d2 + d3 == d4 + d5 + d6)
        cout << "Lucky number!" << endl;
    else
        cout << "Not a lucky number." << endl;

    return 0;
}

// Task 6
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int pos = -1;
    for (int i = 0; i < size; i++)
        if (arr[i] == key) {
            pos = i;
            break;
        }

    if (pos == -1)
        cout << "Element not found." << endl;
    else
        cout << "Element found at position: " << pos << endl;

    delete[] arr;
    return 0;
}

// Task1
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the number to search for: ";
    cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1)
        cout << "Element " << key << " found at index " << result << endl;
    else
        cout << "Element " << key << " not found in the array." << endl;

    return 0;
}