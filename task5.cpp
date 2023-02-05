#include <iostream>
using namespace std;







main()
{
    int number;
    int sum=0;

    cout << "Enter sequence of triangle: ";
    cin >> number;


    for (int i = 1; i <=number; i++)
    {
        
        sum = sum + i;
        
    }

    cout <<"The triangle has: "<< sum <<" dots";
    
}