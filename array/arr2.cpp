#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 
#include <algorithm>

using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::size;
using std::size_t;
using std::string;
using std::vector;
using std::setw;
using std::sort;
using std::reverse;
using std::max_element;
using std::min_element;
using std::find;
using std::copy;
using std::remove;
using std::replace;



namespace GLOBAL
{
    void PRINT() { cout << endl << "--------------------------------------------------" << endl; }
}


template <typename T >
void FIND_MAX_NUMBER(string Message ,vector<T>& INPUT , T STOP)
{
    T X;

    while (true)
    {
        cout << Message;
        cin >> X;

        if (X == STOP)
            break;

        INPUT.push_back(X);
    }

    if (INPUT.empty())
    {
        cout << "No Number Entered!" << endl;
        return;
    }

    T MAX_NUMBER = INPUT[0];
    size_t INDEX = 0;

    for (size_t i = 1; i < INPUT.size(); i++)
    {
        if (MAX_NUMBER < INPUT[i])
        {
            MAX_NUMBER = INPUT[i];
            INDEX = i;
        }
    }

    cout << "MAX Number : "
         << MAX_NUMBER
         << setw(20)
         << "In Index : "
         << INDEX
         << endl;
}












// با رفرنس مینویسیم چون هر بار باعث کپی شدن تابع نشه


int SUM (vector<int> &ARR , size_t C){

    if(C == 1){
        return ARR[0];
    }
    return ARR[C - 1] + SUM(ARR, C - 1);
}




// میخوام ارایه رو معکوس کنه

void REVERSE (vector<int> &Arr , int K , size_t LEN){
    if(K < LEN){
        REVERSE(Arr, K + 1, LEN);
        cout << Arr[K] << "  ";
    }
}

int main(){

    using GLOBAL::PRINT;

    // ده تا عدد از ورودی دریافت میکنیم و توی یک ارایه ذخیره میکنیم و میگوییم بزرگترین عدد کدومه
    // عددی گه وارد میکنیم اگر 0 باشه یعنی خاتمه برنامه 



    // vector<int> NUMBERS;
    // vector<char> CHs;
    // FIND_MAX_NUMBER<int>("Enter Your Number : " ,NUMBERS , 0);
    // FIND_MAX_NUMBER<char>("Enter Your Char : ",CHs , 'q');



//--------------------------------------------میخواهیم مجموع عناصر ارایه رو حساب کنیم-----------------------------------------------

    vector<int> Numbers = {6, 4, 8};
    cout << "SUM : " << SUM(Numbers,Numbers.size()) << endl;

    PRINT();



    // ---------------------------------ارایه ای داریم میخوایم محتوایاتش رو معکوس کنیم--------------------------------------------

    vector<int> ARR = {3, 2, 8};
    REVERSE(ARR, 0, ARR.size());

    PRINT();

    //---------------------------------------------------معکوس کردن ارایه--------------------------------------------------------------

    array<int, 8> NUMS = {1, 2, 3, 4, 5 , 6 , 7 , 8};
    int TEMP;
    for (int i = 0; i < size(NUMS) / 2; i++)
    {
        TEMP = NUMS[i];
        NUMS[i] = NUMS[(size(NUMS) - 1) - i];
        NUMS[(size(NUMS) - 1) - i] = TEMP;
    }

    
    for (int i = 0; i < size(NUMS); i++)
    {
        cout << ((i == 0) ? "{ " : "") << NUMS[i] << ((i == size(NUMS) - 1) ? " }" : "") << " ";
        
        if(i < size(NUMS) - 1 ){
            cout << " , ";
        }
    }

    PRINT();

    //------------------------------------------مرتب کردن ارایه-------------------------------------------------



    vector<int> NUMBERS_1 = {1, 4, 6, 3, 2, 5, 8, 9, 10, 7 ,11 , 16 ,22};
    sort(NUMBERS_1.begin(), NUMBERS_1.end());
    cout << "Increment : ";

        for (int NUMBER : NUMBERS_1)
        {
            cout << NUMBER << " ";
        }

    cout << endl;



    reverse(NUMBERS_1.begin(), NUMBERS_1.end());
    cout << "Decremant : ";

        for (int NUMBER : NUMBERS_1)
        {
            cout << NUMBER << " ";
        }

    cout << endl;

//----------------------------------برای پیدا کردن عنصر------------------------------------------
    vector<int> DD = {1, 2, 3, 4, 5, 6};
    auto RESULT = find(DD.begin(), DD.end(), 44);
    size_t INDEX = RESULT - DD.begin();
    cout << *RESULT << endl;
    cout  << "INDEX : "<< INDEX  << endl;
    if (RESULT != DD.end())
        {
            cout << "Index : " << RESULT - DD.begin() << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }

    return 0;
}