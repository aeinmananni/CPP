
#include <iostream>
#include <string>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;
using std::string;



int main(){
    // int i = 1;

    // while (i <= 10)
    // {
    //     cout << i << " " << endl;
    //     i++;
    // }
    // cout << "--------------------------------------------" << endl;
    // int SUM = 0, NUMBER = 1;

    // while ( NUMBER <= 3)
    // {
    //     SUM += NUMBER;
    //     NUMBER++;
    // }

    // cout << SUM;

//----------------------------چاپ وارونه اعداد------------------------------------

    // int N, A, S =0;

    // cout << "Inter Number : " ;
    //     cin >> N;

    // while (N > 0)
    // {
    //     A = N % 10;
    //     S = S * 10 + A;
    //     N = N / 10;
    // }

    // cout << S;


// -------------------------------سری فیبوناچی---------------------------------

    // int BOUND;
    // cout << "Inter Number : ";
    // cin >> BOUND;

    // int F0 = 0;
    // int F1 = 1;
    // int F2;

    // while (true)
    // {
    //     F2 = F0 + F1;
    //     if (F2 > BOUND) break;
    //     cout << F2 << '\t';
    //     F0 = F1;
    //     F1 = F2;
    // }

    // -------------------------------------میخوایم دو عدد رو بگیریم و اولی رو به توان دومی برسونیم---------------------------------------

    // int I = 1 , X, Y, Z = 1;

    // cout << "Inter Yor Number : ";
    //     cin >> X >> Y;
    // while (I++ <= Y)
    // {
    //     Z *= X;
    // }

    // cout << "Z : " << Z;

// ------------------------------------شمارش تعداد کارکتر های یک حرف در جمله--------------------------------------------

    char CH;
    int N_A = 0, N_B = 0, N_C = 0, N = 0;

    cout << "Inter Your Char : ";
        cin >> CH;

    while ((CH = cin.get()) != '.')
    {
        CH = static_cast<char>(tolower(static_cast<unsigned char>(CH)));
        switch (CH)
        {
        case 'a':
            ++N_A;
            break;

            case 'b' :
                ++N_B;
            break;

            case 'c' :
                ++N_C;
            break;

            default : ++N;
            break;
            }
    }

    cout << "a : " << N_A << endl;
    cout << "b : " << N_B << endl;
    cout << "c : " << N_C << endl;
    cout << "Other : " << N << endl;
    return 0;
}