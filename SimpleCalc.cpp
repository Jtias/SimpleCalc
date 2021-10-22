/*

Major Variable

float n1,n2,r
int c

Progress limitation: N/A
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
    srand(time(NULL));
    int c=0;

    float r=0;
    cout << "Main Menu" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    while(c!=5)
    {
        float n1=(rand() %10) + 1;
        float n2=(rand() %10) + 1;
        cout << "Enter a choice: ";
        cin >> c;
        switch (c){
        case 1:
            cout << "What is " << n1 << "+" << n2 << " ? ";
            cin >> r;
            if (r==n1+n2)
               {
                cout << "Correct" << endl;
               }
            else
                {
                cout << "Your answer is wrong. The correct answer is " << n1+n2 << endl;
                }

            break;
        case 2:
            if(n1>n2)
            {
            cout << "What is " << n1 << "-" << n2 << " ? ";
            cin >> r;
            if (r==n1-n2)
               {
                cout << "Correct" << endl;
               }
            else
                {
                cout << "Your answer is wrong. The correct answer is " << n1-n2 << endl;
                }
            }
            else if (n2>n1)
            {
                cout << "What is " << n2 << "-" << n1 << " ? ";
            cin >> r;
            if (r==n2-n1)
               {
                cout << "Correct" << endl;
               }
            else
                {
                cout << "Your answer is wrong. The correct answer is " << n2-n1 << endl;
                }
            }

            break;
        case 3:
            cout << "What is " << n1 << "*" << n2 << " ? ";
            cin >> r;
            if (r==n1*n2)
               {
                cout << "Correct" << endl;
               }
            else
                {
                cout << "Your answer is wrong. The correct answer is " << n1*n2 << endl;
                }

            break;
        case 4:
            cout << "What is " << n1 << "/" << n2 << " ? ";
            cin >> r;
            if (r==n1/n2)
               {
                cout << "Correct" << endl;
               }
            else
                {
                cout << "Your answer is wrong. The correct answer is " << n1/n2 << endl;
                }

            break;
        case 5:
            break;
        default:
            cout << "Invalid Input" << endl;
            }
    }
    return 0;
}
