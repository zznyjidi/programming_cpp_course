#include <iostream>
using namespace std;
int main() {
    int intX = 10;
    //Declaring a Pointer to Point to an Ingteger variable
    int *intXPointer;
    //Letting tge intXPointer to point to the memory location of intx
    intXPointer = &intX;
    //Access the the memory location
    cout<<intXPointer<<endl;
    //Accessing the value stored in the specific Pointer location
    cout<<*intXPointer<<endl;
    //Your Task
    //Declare two integer variables and declare two pointers pointing to them
    //assign vaues of 10 and 20 to those variables without using the
    //variables names, but using the Point
    //Using the pointer print the sum, diff, product of those variables
    //Sum of 10 and 20 is 30
    //Diff of 10 and 20 is -10
    //Product of 10 and 20 is 200
    int intA, intB;
    int *pointerA, *pointerB;
    pointerA = &intA;
    pointerB = &intB;
    *pointerA = 10;
    *pointerB = 20;
    cout << *pointerA + *pointerB << endl << *pointerA - *pointerB << endl << *pointerA * *pointerB << endl << pointerA << endl << pointerB << endl;

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
}
