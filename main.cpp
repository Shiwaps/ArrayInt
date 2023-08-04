#include <iostream>
#include "Array.h"
using namespace std;

void testIntegerArray() {
    try {
        Array<int> arr(5);

        arr.resize(10);

        arr.insert(2, 100);
        arr.pushFront(50);
        arr.pushBack(200);

        arr[0] = 10;
        arr[1] = 20;
        arr[3] = 30;

        arr.remove(4);

        cout << "Find 100: " << arr.find(100) << endl;
        cout << "Find 500: " << arr.find(500) << endl;

        cout << "Size: " << arr.getSize() << endl;

    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << endl;
    }
}

int main() {
    testIntegerArray();

    return 0;
}
