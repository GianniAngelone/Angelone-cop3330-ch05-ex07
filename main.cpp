/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Gianni Angelone
 */

#include "std_lib_facilities.h" //We include our given header file
void OutputPrinter(double root1, double root2);
int main()
{
    double a, b, c, discriminant, root, result1, result2;
    cout << "Quadratic Equation\n";
    cout << "Enter value for 'a': ";
    cin >> a;
    cout << "Enter value for 'b': ";
    cin >> b;
    cout << "Enter value for 'c': ";
    cin >> c;

    discriminant = (b * b) - (4 * a * c); //Our discriminant calculation which will be square rooted

    if (discriminant > 0) {
        root = sqrt(discriminant);
        result1 = (0 - b + root) / (2 * a); //Simplified version of the quadratic equation.
        result2 = (0 - b - root) / (2 * a); //Account for plus AND minus in the quadratic equation
        OutputPrinter(result1, result2);
    }
    else if (discriminant == 0) {
        result1 = result2 = (0 - b) / (2 * a);
        OutputPrinter(result1, result2);
    }
    else {
        cout << "No roots discovered.\n";
    }
    return 0;
}
void OutputPrinter(double root1, double root2) //Here we print the results
{
    if (root1 == root2) {
        cout << "Both roots are the same, which equal " << root1 << "\n";
    }
    else {
        cout << "Root #1 is " << root1 << " and Root #2 is " << root2 << "\n";
    }
    return;
}