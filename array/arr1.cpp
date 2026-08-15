#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 


using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::size;
using std::size_t;
using std::string;
using std::vector;
using std::setw;

namespace GLOBAL
{
    void PRINT() { cout << endl << "--------------------------------------------------" << endl; }
}










void SHOW_ARRAY_1 (vector<int> &A){

    for (size_t i = 0; i < size(A); i++){
        cout << A[i] << setw(10);
    }
}


template<typename T> void SHOW_ARRAY_2 (const vector<T> &A){

    for (size_t i = 0; i < size(A); i++){
        cout << A[i] << setw(10);
    }
}



template <typename T , size_t N> void SHOW_ARRAY_3(const array<T,N> &X){
        for (size_t i = 0; i < size(X); i++)
    {
        cout << X[i] << setw(10);
    }
}







int main(){

    using GLOBAL::PRINT;

    float grade[10];
    grade[0] = 18.05;
    grade[1] = 16.43;
    grade[2] = 12.33;
    grade[3] = 19;

    for (int i = 0; i <= 3; i++){
        cout  << grade[i] << '\t';
    }

PRINT();
//--------------------------------------------------------------------------


    int NUMBERS[4] = {1, 2, 3, 4};

    for (int i = 0; i <= 3; i++){
        cout << NUMBERS[i] << '\t';
    }




PRINT();
//-----------------------------------------------------------------------------------------------------



string NAMES[] = {"HELLO", "MEHDI", "ALI AKBAR", "SEPAH"};

for (size_t i = 0; i < size(NAMES) ; i++){
    cout << NAMES[i] << '\t';
}

PRINT();


//--------------------------------------------------------------------------------------

array<int , 5> NUMBERS_1 = { 13, 56, 23, 123, 54 };

int SUM = 0;
for (int i = 0; i < NUMBERS_1.size(); i++)
{
    SUM += NUMBERS_1[i];
}
cout << "SUM : " << SUM;

PRINT();

//-----------------------------------برای اینکه بخواهیم طول نامشخصی از ارایه ها را ذخیره کنیم----------------------------------------

vector<double> SCORE = {12.43, 34.54, 13.44, 11.11, 99.43};

double RESULT = 0;

for (size_t i = 0; i < size(SCORE); i++){
    RESULT += SCORE[i];
}

cout << "RESULT :: " << (int)RESULT << endl;


PRINT();
//-----------------------------------------------------------------

// vector<int> X_1;
// int number;
// int CIN_RESULT = 0;

//     for (int i = 0; i <= 3; i++){
        
//         cout << "Enter Your Number  Index " << i << ": ";
//         cin >> number;

//         X_1.push_back(number);
//     }

//     for (size_t i = 0; i < size(X_1); i++){
//         CIN_RESULT += X_1[i];
//     }

//     cout << "RESULT IN CIN : " << CIN_RESULT << endl;

//     PRINT();

//--------------------------------------خب میخواهیم ارایه ای تعریف کنیم بعد از ذخییره عدد از ورودی محتویات رو از کوچیک به بزرگ بچینیم---------

    // vector<int> NUMBER_2;
    // int CIN_NUMBER;

    // for (int i = 0; i < 4; i++){
    //     cout << "Enter Your Number  Index " << i << ": ";
    //         cin >> CIN_NUMBER;

    //     NUMBER_2.push_back(CIN_NUMBER);
    // }

    // for (size_t i = size(NUMBER_2); i-- > 0;)
    // {
    //     cout << NUMBER_2[i] << '\t';
    // }

    // PRINT();
//---------------------------------چاپ محتویات زوج ارایه-------------------------------------

    array<int, 10> NUMBER_3 = {1, 2, 3, 4, 5, 6 , 7, 8, 9, 19};

    for (size_t i = 0; i < size(NUMBER_3); i++){
        if(NUMBER_3[i] % 2 == 0){
            cout << NUMBER_3[i] << '\t';
        }
    }

    PRINT();

//--------------------------------چاپ اعدا منفی---------------------------------------

    // vector<int> NUMBER_4;
    // int NUM = 0;
    // int HOW_TO_NEGATIVE_NUMBER = 0;

    // for (int i = 0; i <= 6; i++){
    //     cout << "Enter Number : ";
    //         cin >> NUM;
    //     NUMBER_4.push_back(NUM);
    // }

    //     for (int i = 0; i < size(NUMBER_4); i++)
    //     {
    //         if (NUMBER_4[i] < 0)
    //         {
    //             cout << NUMBER_4[i] << '\t';
    //             HOW_TO_NEGATIVE_NUMBER++;
    //         }
    //     }
    //     cout << endl << "RESULT_NEGATIVE : " << HOW_TO_NEGATIVE_NUMBER;
    // PRINT();


//-------------------------------------------------------------------
    array<int, 22> NUMBERS_5 = {1, 2, 3, 3, 3, 4, 5, 5, 5, 4, 4,4,4,4 ,4, 6, 6, 6, 9, 9, 2 , 0};
    // vector<int> HOW_MATCH(10, 0); => این یعنی 10 عضو بساز و مقداره همش رو صفر بده 
    array<int, 10> HOW_MATCH = {0};

    for (size_t i = 0; i < size(NUMBERS_5); i++){
        HOW_MATCH[NUMBERS_5[i]]++;
    }

    for (size_t i = 0; i < size(HOW_MATCH); i++) {
        cout << "Number " << i << " = " << "( " << HOW_MATCH[i] << " )" << endl;
    }
    PRINT();
//------------------------------------------پیدا کردن بزرگترین عدد و مقدار ایندکس-------------------------------------------------

    // vector<int> NUMBERS_6;
    // int NUMBER_INPUT;
    // int INDEX = 0;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << "Enter Your Number : ";
    //         cin >> NUMBER_INPUT;

    //         NUMBERS_6.push_back(NUMBER_INPUT);
    // }

    // int MAX = NUMBERS_6[0];

    // for (size_t i = 0; i < size(NUMBERS_6) ; i++){
    //         if(NUMBERS_6[i] > MAX){
    //             MAX = NUMBERS_6[i];
    //             INDEX = i;
    //         }
    // }

    // cout << "MAX NUMBER : " << MAX << endl;
    // cout << "INDEX : " << INDEX << endl;


//------------------------------setw = میتونیم بجای فاصله و تب ازش استفاده کنیم-------------------------------------------------

    array<int, 5> X_2 = {4, 3, 13, 6, 20};

cout << "Element : "
     << setw(13)
     << "Value : "
     << setw(20)
     << "Histogram"
     << endl;

for (size_t i = 0; i < size(X_2); i++)
{
    cout << setw(10) << i
         << setw(14) << X_2[i]
         << setw(15);

    for (size_t j = 0; j < X_2[i]; j++)
    {
        cout << "*";
    }

    cout << endl;
}

PRINT();

//--------------------------------------------ذخیره اعداد اول-------------------------------------------

vector<int> FRIST_NUMBER;
int N;

for (int i = 10; i <= 50; i++)
{
    N = 0;
    for (int j = 2; j <= i - 1; j++)
    {
        if(i % j == 0){
            N++;
        }
    }
    if(N == 0){
        FRIST_NUMBER.push_back(i);
    }
}

for (size_t i = 0; i < size(FRIST_NUMBER); i++){
    cout << FRIST_NUMBER[i] << setw(12);
}

PRINT();

//---------------------------------------برای کار کردن با توابع---------------------------------------------

vector<int> XX  = {1, 2, 3, 4, 5};
SHOW_ARRAY_1(XX);




PRINT();

//--------------------------------------------------------------------------------------------------------

vector<int> MY_NUMBER = {1, 2, 3, 4, 5, 6, 7, 8};
vector<string> MY_NAMES = {"HADI","AYIN","MORTEZA"};
SHOW_ARRAY_2<int>(MY_NUMBER);
cout << endl;
SHOW_ARRAY_2<string>(MY_NAMES);

PRINT();

//--------------------------------------------------------------------------------------------------------
array<int, 5> XXX = {1, 2, 3, 4, 5};
array<char, 5> CH = {'a', 'b', 'c', 'd', 'e'};

SHOW_ARRAY_3<int>(XXX);
cout << endl;
SHOW_ARRAY_3<char>(CH);

return 0;
}