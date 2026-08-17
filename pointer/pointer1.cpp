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
    void PRINT() { cout << "--------------------------------------------------" << endl; }
}


/**
 *  pointer = ادرس متغییری رو توش ذخیره میکنیم
 */


int main(){

    using GLOBAL::PRINT;




    int A = 7;
    int *P;
    // محتوای محلی هست که بهش اشاره میشه P بزار توی A یعنی ادرس متغییر 
    P = &A;

    cout << *P << endl; // محتوا رو چاپ میکنه
    cout << P << endl; // ادرس محل رو چاپ میکنه
    cout << sizeof(P) << endl; // اشاره گر به هر نوعی 8 بایت فضا اشغال میکنه فرقی هم نمیکنه نوعش چی باشه
    PRINT();




//-------------------------------------------------------------------------------------------

    int N = 3;
    int *P_N = &N;
    cout << &N << endl;
    cout << P_N << endl;
    cout << *P_N << endl;
    cout << N << endl;
    cout << *&N << endl; // بازم مقدار متغییر رو نمایش میده


PRINT();

//-------------------------------------------انتصاب اشاره گره ها به هم---------------------------------------------------


    int X1 = 1 , Y1 = 2;
    int *PX, *PY;
    PX = &X1;
    PY = &Y1;

    cout << PX << endl;
    cout << PY << endl << endl;

    PY = PX;

    cout << PX << endl;
    cout << PY << endl << endl;

    cout << *PX << endl;
    cout << *PY << endl;

PRINT();

//-------------------------------افزایش اشاره گر----------------------------------

    int X2 = 5;
    int *PX1 = &X2;
    cout << PX1 << endl; 
    cout << *PX1 << endl << endl; 

    *PX1 += 2;
    cout << PX1 << endl;
    cout << X2 << endl;
    cout << *PX1 << endl;

PRINT();

//---------------------------------------------------------------------------------

    int X3 = 3;
    int *PX3 = &X3;


    int Y3 = 5;
    int *PY3 = &Y3;

    // ما فقط میتونیم دو اشاره گر رو از هم کم کنیم و هیچ عملیات دیگه ای نمیشه روش انجام داد

    cout << PY3 - PX3 << endl;

//-----------------------------------------  قرار میدهیم نمیتوانیم مقدار متغییر مربوطه رو تغییر بدیم const زمانی که  ----------------------------------------

    int X4 = 6;
    const int *PX4_1 = &X4;
    


    int *const PX4_2 = &X4;
    *PX4_2 = 8; // حالت مجاز برای تغییر محتوا

PRINT();
//------------------------------------------------------Pointer To Pointer-------------------------------------------------------

    int X5 = 9;
    int *PX5 = &X5;
    int **P1_TO_PX5 = &PX5;
    int ***P2_TO_PX5 = &P1_TO_PX5;

    cout << X5 << endl;
    cout << *PX5 << endl;
    cout << **P1_TO_PX5<< endl;
    cout << ***P2_TO_PX5<< endl << endl;

    **P1_TO_PX5 += 3;

    cout << X5 << endl;
    cout << *PX5 << endl;
    cout << **P1_TO_PX5<< endl;
    cout << ***P2_TO_PX5<< endl << endl;

PRINT();

//------------------------------------------------اشاره گر ها و ارایه ها-------------------------------------------------
    array<int, 3> NUMBER_1 = {1, 2, 3};
    int *P_NUMBERS_1;


    P_NUMBERS_1 = NUMBER_1.data(); // اشاره به اولین عنصر ارایه
    
    cout << *P_NUMBERS_1 << endl;

    *(NUMBER_1.data() + 1) = 8; // NUMBER_1[1] = 8; این حالت رو به رو معدل



    for (int i = 0; i < size(NUMBER_1); i++){
        cout << NUMBER_1[i] << " ";
    }
    cout << endl;

    PRINT();

    //--------------------------------------------------------------------------------------------------------------

    vector<int> NUMBER_2 = {1, 2, 3, 4, 5};
    int *P_NUMBER_2 = NUMBER_2.data() + 4;

    for (int i = 0; i < size(NUMBER_2); i++){
        cout << *P_NUMBER_2 << '\t';
        P_NUMBER_2--;
    }

    cout << endl;
    PRINT();





    //--------------------------------------------------------------------------------------------------------------

    
    vector<int> NUMBER_3 = {4, 2, 3, 10, 1, 6, 3};
    int *X, *Y;

    X = NUMBER_3.data();
    Y = NUMBER_3.data() + 6;
    
    do{
        cout << *X + *Y << setw(6);
        X++;
        Y--;

    } while (X != Y);



PRINT();



return 0;
}