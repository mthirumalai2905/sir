#include <iostream>
using namespace std;

class Complex {
private:
    double real;   
    double imag;   

public:
    // Default constructor (initializes to 0 + 0i)
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator * (const Complex& other) {
        double newReal = real * other.real - imag * other.imag; // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
        double newImag = real * other.imag + imag * other.real;
        return Complex(newReal, newImag);
    }

    // Overload << operator for output (printing the complex number)
    friend ostream& operator << (ostream& out, const Complex& c) {
        out << c.real;
        if (c.imag >= 0) {
            out << " + " << c.imag << "i";
        } else {
            out << " - " << -c.imag << "i";
        }
        return out;
    }

    // Overload >> operator for input (reading the complex number)
    friend istream& operator >> (istream& in, Complex& c) {
        in >> c.real >> c.imag;
        return in;
    }
};

int main() {
    Complex num1, num2, sum, product;

    cout << "Enter the first complex number (real and imaginary parts): ";
    cin >> num1;

    cout << "Enter the second complex number (real and imaginary parts): ";
    cin >> num2;

    sum = num1 + num2;
    cout << "Sum: " << sum << endl;

    product = num1 * num2;
    cout << "Product: " << product << endl;

    return 0;
}
