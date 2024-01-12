#include <iostream>

using namespace std;

// Class to represent a 1D matrix
class Matrix1D {
private:
    int size;
    int* elements;

public:
    // Constructor to initialize the matrix
    Matrix1D(int s) : size(s) {
        elements = new int[size];
    }

    // Destructor to free memory
    ~Matrix1D() {
        delete[] elements;
    }

    // Overloaded + operator to perform matrix addition
    Matrix1D operator+(const Matrix1D& other) const {
        // Ensure matrices have the same size for addition
        if (size != other.size) {
            cerr << "Error: Matrices should have the same size for addition." << endl;
            return *this; // Returning the original matrix for simplicity
        }

        Matrix1D result(size);

        // Perform element-wise addition
        for (int i = 0; i < size; ++i) {
            result.elements[i] = elements[i] + other.elements[i];
        }

        return result;
    }

    // Function to input matrix elements
    void inputMatrix() {
        cout << "Enter " << size << " elements for the matrix:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << "Element " << i + 1 << ": ";
            cin >> elements[i];
        }
    }

    // Function to display matrix elements
    void displayMatrix() const {
        cout << "Matrix Elements:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int matrixSize;

    // Input size for the matrices
    cout << "Enter the size of the matrices: ";
    cin >> matrixSize;

    // Create two matrices
    Matrix1D matrixA(matrixSize);
    Matrix1D matrixB(matrixSize);

    // Input elements for the matrices
    cout << "\nEnter elements for Matrix A:" << endl;
    matrixA.inputMatrix();

    cout << "\nEnter elements for Matrix B:" << endl;
    matrixB.inputMatrix();

    // Perform matrix addition
    Matrix1D resultMatrix = matrixA + matrixB;

    // Display the matrices and the result
    cout << "\nMatrix A:" << endl;
    matrixA.displayMatrix();

    cout << "\nMatrix B:" << endl;
    matrixB.displayMatrix();

    cout << "\nMatrix A + Matrix B:" << endl;
    resultMatrix.displayMatrix();

    return 0;
}
