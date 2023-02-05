#include <iostream>
using namespace std;







main()
{
    float number ;
    int  num2;
    float i1=0 , i2=0 , i3=0;
    float p1 , p2 , p3;

    cout << "Enter number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cin >> num2;
    
        if (num2%2==0)
        {
            i1 = i1+1;
                    
        }

        if (num2%3 == 0)
        {
            i2 = i2+1;
    
        }

        if (num2%4 == 0)
        {
            i3 = i3+1;
                    
        }

    }


   
    


    p1 = (i1/number)*100;
    p2 = (i2/number)*100;
    p3 = (i3/number)*100;   

    cout << "Numbers divided by 2 are: "<< p1 << " %" <<endl;
    cout << "Numbers divided by 3 are: "<< p2 << " %" <<endl;
    cout << "Numbers divided by 4 are: "<< p3 << " %" <<endl;


}



