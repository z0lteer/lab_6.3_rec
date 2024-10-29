#include <iostream>
#include <iomanip>
#include <random>

void randomnum(int a[], int size) {
    const int MIN_VALUE = -100;
    const int MAX_VALUE = 100;

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(MIN_VALUE, MAX_VALUE);

    for (int i = 0; i < size; ++i) {
        a[i] = distribution(generator);
    }
}

void printArray(int a[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << std::setw(4) << a[i];
    }
    std::cout << std::endl;
}


int negetiveellements(int a[], int size) {
    if (size == 0) {
        return 0;
    }

    int lastElementIsNegative = (a[size - 1] < 0) ? 1 : 0;

    return lastElementIsNegative + negetiveellements(a, size - 1);
}

template <typename T>
int negetiveellementsT(T a[], int size) {
    if (size == 0) {
        return 0;
    }
    int lastElementIsNegative = (a[size - 1] < 0) ? 1 : 0;
    return lastElementIsNegative + negetiveellementsT(a, size - 1);
}


int main() {
    const int size = 10;
    int a[size];

    randomnum(a, size);

    std::cout << "Array elements: ";
    printArray(a, size);

    int count = negetiveellements(a, size);

    std::cout << "Number of negative elements: " << count << std::endl;

    int countRecursiveTemplate = negetiveellementsT(a, size);
    std::cout << "Number of negative elements (Recursive Template): " << countRecursiveTemplate << std::endl;

    return 0;
}