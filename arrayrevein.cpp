
#include <iostream>
using namespace std;

class Name {
    int arraysize, newele;
    int arr[100]; // Fixed-size array

public:
    // Constructor
    Name(int a, int b) {
        arraysize = a;
        newele = b % arraysize; // Ensures shift does not exceed array size
    }

    void inputArray() {
        cout << "Enter " << arraysize << " elements: ";
        for (int i = 0; i < arraysize; i++) {
            cin >> arr[i];
        }
    }

    void shiftArray() {
        for (int i = 0; i < newele; i++) { 
            int lastElement = arr[arraysize - 1]; // Store last element
            
            // Shift elements to the right
            for (int j = arraysize - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
            }
            arr[0] = lastElement; // Place last element at the beginning
        }
    }

    void displayArray() {
        cout << "Array after shifting: ";
        for (int i = 0; i < arraysize; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int p, q;
    cout << "Enter array size and number of positions to shift: ";
    cin >> p >> q;

    Name s1(p, q);
    s1.inputArray();
    s1.shiftArray();
    s1.displayArray();

    return 0;
}
