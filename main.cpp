/**

25/09/17
Steven O' Brien
Factorial Calculator
Exercise 2


 */



#include <iostream>

using namespace std;

int main()
{
    //Displays Progamme Title
    cout << "\n" << "Factorial Calculator" ;

    //Variables declaired type int
    int n, fact;

    // Assigned values to variables
    n = -1;
    fact = 1;

    //While loop to ensure a positive value is entered
    while (n<0)
    {
        cout << "\n\n" << "Enter a value greater or equal to zero:";
        cin >> n ;
    }

    //For loop to loop while conditions are met
    for (fact=1; n>0; n--)
    {
        fact = fact * n ;

    }

    //Displays the result to the user
    cout << "\n\n" << "The factorial is:" << fact << endl ;


    return 0;
}
