#include <iostream>
using namespace std;







main()
{
    int cargo , weight ;
    float price = 0 , price2 = 0 , price3 = 0;
    float c1 = 0 , c2 = 0 , c3 =0 , avg , p1 , p2 , p3 , sum;

    cout <<"Enter number of cargo: ";
    cin >> cargo;

    for (int i = 1; i <= cargo; i++)
    {
        cin >> weight;

        if (weight <=3)
        {
            c1 = c1 + weight;          
            price = 200 * c1;
        }

        else if (weight >4 && weight <=11)
        {
            c2 = c2 + weight;
            price2 = 175 * c2;
        
        }

        else
        {
            c3 = c3 + weight;
            price3 = 120 * c3;
        }
        
        
    }

    sum = c1 + c2 + c3;
    
    p1 = (c1/sum)*100;
    p2 = (c2/sum)*100;
    p3 = (c3/sum)*100;
    avg = (price + price2 + price3)/sum;
   

    cout << "Average is: " <<avg <<endl;
    cout << "Percentage of the cargo by minibus: " <<p1 << " %"<<endl;
    cout << "Percentage of the cargo by truck: " <<p2  << " %" <<endl;
    cout << "Percentage of the cargo by train: " <<p3 << " %" <<endl;


}