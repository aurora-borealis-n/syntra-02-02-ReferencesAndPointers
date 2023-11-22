// ReferencesAndPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Example.h"
#include "Example2.h"

int main()
{
    Example test; //Use the default constructor

    test.Value1 = 3;
    test.Value2 = 5;

    int result = test.Addition();

    std::cout << "Hello World " << result << "!";
}



////void DoSomething(int x) { //do something here
////    x = x + 5;
////
////    std::cout << "after calling function DoSomething, x is  " << x << "!\n";
////}
////
////int main()
////{
////    int a = 2;
////
////    std::cout << "before calling function DoSomething, a is  " << a << "!\n";
////
////    DoSomething(a);
////
////    std::cout << "return value of function DoSomething, a is " << a << "!\n";
////}


//////void DoSomethingWithAReferenceType(Example2 example) { //do something here
//////    example.CalculationValue = example.CalculationValue + 5;
//////
//////    std::cout << "after calling function DoSomethingWithAReferenceType with an object of Example, its CalculationValue is " << example.CalculationValue << "!\n";
//////}
//////
//////int main()
//////{
//////    Example2 test;
//////    test.CalculationValue = 3;
//////
//////    std::cout << "before calling function DoSomethingWithAReferenceType, test.CalculationValue is  " << test.CalculationValue << "!\n";
//////
//////    DoSomethingWithAReferenceType(test);
//////
//////    std::cout << "return value of function DoSomethingWithAReferenceType, test.CalculationValue is " << test.CalculationValue << "!\n";
//////}