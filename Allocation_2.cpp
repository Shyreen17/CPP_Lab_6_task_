#include <iostream>
using namespace std;
int main() {
     int rows, cols;
    do {
        cout << "Enter number of rows (not exceeding 3): ";
cin >> rows;
    if (rows <= 0 || rows > 3) {
cout << "Invalid input. Please enter a value between 1 and 3." << endl;
        }
   } while (rows <= 0 || rows > 3);
    do {
        cout << "Enter number of columns (not exceeding 3): ";
cin >> cols;
        if (cols <= 0 || cols > 3) {
            cout << "Invalid input. Please enter a value between 1 and 3." << endl;
        }
 } while (cols <= 0 || cols > 3);
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }
   for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
  }}
    cout << "Array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
    cout << dynamicArray[i][j] << " ";
        }
    cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;
    return 0;
}
