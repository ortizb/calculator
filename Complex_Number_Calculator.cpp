// Complex_Number_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

//Would use addition panel
void complexAddition(double& r1, double& i1, double& r2, double& i2, vector<double>& complexNum)
{
    double r3 = r1 + r2;
    double i3 = i1 + i2;
    complexNum[0] = r3;
    complexNum[1] = i3;
    // return v;
}

//Would use subtraction panel
void complexSubtraction(double& r1, double& i1, double& r2, double& i2, vector<double>& complexNum)
{
    double r3 = r1 - r2;
    double i3 = i1 - i2;
    complexNum[0] = r3;
    complexNum[1] = i3;
    // return v;
}

//Would use multiplication panel
void complexMultiplication(double& r1, double& i1, double& r2, double& i2, vector<double>& complexNum)
{
    vector<double> v1(2);
    vector<double> v2(2);

    v1[0] = r1 * r2;
    v1[1] = r1 * i2;
    v2[0] = -1 * (i1 * i2);
    v2[1] = i1 * r2;
    complexAddition(v1[0], v1[1], v2[0], v2[1], complexNum);
    // return v3;
}

//Would use division panel
void complexDivision(double& r1, double& i1, double& r2, double& i2, vector<double>& complexNum)
{
    complexNum[0] = ((r1 * r2) + (i1 * i2)) / ((r2 * r2) + (i2 * i2));
    complexNum[1] = ((i1 * r2) - (r1 * i2)) / ((r2 * r2) + (i2 * i2));
}

int main()
{
    vector<double> complexNum(2);
    double r1, i1, r2, i2;
    int arith;
    cout << "Enter first real component: " << endl;
    cin >> r1;
    cout << "Enter first imaginary component: " << endl;
    cin >> i1;
    cout << "Enter second real component: " << endl;
    cin >> r2;
    cout << "Enter second imaginary component: " << endl;
    cin >> i2;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Select action: " << endl;
    cin >> arith;
    if (arith == 1)
    {
        complexAddition(r1, i1, r2, i2, complexNum);
        cout << complexNum[0] << " + " << complexNum[1] << "i";
    }
    else if (arith == 2)
    {
        complexSubtraction(r1, i1, r2, i2, complexNum);
        cout << complexNum[0] << " + " << complexNum[1] << "i";
    }
    else if (arith == 3)
    {
        complexMultiplication(r1, i1, r2, i2, complexNum);
        cout << complexNum[0] << " + " << complexNum[1] << "i";
    }
    else if (arith == 4)
    {
        complexDivision(r1, i1, r2, i2, complexNum);
        cout << complexNum[0] << " + " << complexNum[1] << "i";
    }
}
