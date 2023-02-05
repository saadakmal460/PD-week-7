#include <iostream>
using namespace std;



main()
{

    int period, patients; 
    int treated = 0; 
    int untreated = 0; 
    int doctors = 7;

    cout << "Enter time period: ";
    cin >> period;

    cout << "Enter number of patients: ";

    for (int i =1; i <= period; i++) 
    {
        cin >> patients;

        if (patients <= doctors) 
        {

            treated = treated +  patients;
        }

        if(patients > doctors) 
        {

            treated = treated +  doctors;
            untreated = untreated + (patients - doctors);
        
        }

        
        if (i % 3 == 0 && treated < untreated) 
        {
            doctors = doctors + 1;
        }
    
    
    }

    cout << "Treated patients: " << treated << "." << endl;
    cout << "Untreated patients: " << untreated << "." << endl;

    
}

    


    
