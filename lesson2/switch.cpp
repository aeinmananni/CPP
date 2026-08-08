

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;





int main (){

    // char X;
    // cout << "Please Inter Your Char : ";
    //     cin >> X;
    
    //     switch (X)
    //     {
    //     case  'r':
    //         cout << "RED";
    //         break;
    //     case 'b':
    //         cout << "BLUE";
    //         break;
            
    //     case 'g':
    //         cout << "GREEN";
    //         break;

    //     default:
    //         break;
    //     }

//-----------------------------------------------------------------
    int A, B;
    char CH;

    cout << "Please Inter Your Numbers : ";
        cin >> A >> B;

    cout << "Please Inter Your Char : ";
        cin >> CH;
    switch (CH)
    {
    case '+':
        cout << "(+) => " << A + B << endl;

        break;
    case '-':
        cout << "(-) => " << A - B << endl;

        break;
    case '*':
        cout << "(*) => " << A * B << endl;

        break;
    
    default:
        break;
    }
    


    return 0;
}