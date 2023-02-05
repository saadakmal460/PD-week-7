#include<iostream>
using namespace std;


void triangles(int rows);


main()
{

    int rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    triangles(rows);
    
}



void triangles(int rows)
{
    for (int i = rows; i>=1; i--)
    {
        for (int j = 1; j <=rows-i; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <=2*i-1; k++)
        {
            if (k==1 || k==2*i-1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        for (int l = 1; l <= rows-i; l++)
        {
            cout << "*";
        }
        cout <<endl;
        
        
    }
    cout <<endl;
    


  
        
}
     
    
