#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;



namespace A {
    void F() { cout << "A \n"; }
}


namespace B {
    void F() { cout << "B \n"; }
}

void F(){
    { cout << "C \n"; }
}


template <class U, class T> T CALCULATE_1(U X) {
    T SUM;

    SUM = X - 1;

    return SUM;
}





template <class T> void REVERSE(T &X , T &Y){
    T TEMP;

    TEMP = X;
    X = Y;
    Y = TEMP;
}









/**
 *   Recursive Function : تابعی هست که خودش رو فراخوای میکند
 *                        متطق پشته اخرین چیزی که توش رفته
 *                       اولین چیزی هست که ازش خارج میشه
 */




 unsigned int FACT (unsigned int N){

    if(N == 0 || N == 1)
        return 1;

    return N * FACT(N - 1);
 }



 int CALCULATE_2 (int N){
    if(N == 0 || N == 1)
        return N;

    return N + CALCULATE_2(N - 1); // CALCULATE_2(4) = 4 + CACULATE_2(3)  = 4 + 6 = 10
 }



int FIBO (int N){
    if(N == 0 || N == 1 )
        return N;

    return FIBO(N - 1) + FIBO(N - 2);
}







int PROD(int A , int B){
    if(B == 1)
        return A;

    return A + PROD(A, B - 1);
}


int POW(int A , int B){
    if(B == 1)
        return A;

    return A * POW(A, B - 1);
}



int RECURSIVE(int N, int RESULT = 0)
{
    if (N == 0)
        return RESULT;

    return RECURSIVE(N / 10, RESULT * 10 + N % 10);
}


void PRINT(int X ,int Y){
    if(X >= 3){
        cout << "( " << X << " , " << Y << " )" << endl; 

        PRINT(X - 1, Y + 1);
    }
}




int main()
{
    // char CH = 'B';
    // cout << CALCULATE_1<char, int>(CH) << endl;
    // cout << CALCULATE_1<char, char>(CH) << endl;



    // double X = 97.88;
    // cout << CALCULATE_1<char, double>(X) << endl;
    // cout << CALCULATE_1<double, char>(X) << endl;
    // cout << CALCULATE_1<double, double>(X) << endl;


//-------------------------------REVERSE-------------------------------------------

    // int X = 2, Y = 5;
    // REVERSE<int>(X, Y);
    // cout << "X : " << X << '\t' << "Y : " << Y << endl;


    // char CH_1 = 'A', CH_2 = 'B';
    // REVERSE<char>(CH_1, CH_2);
    // cout << "CH_1 : " << CH_1 << '\t' << "CH_2 : " << CH_2 << endl;


    // string ST_1 = "HeLLO", ST_2 = "WELLCOM";
    // REVERSE<string>(ST_1, ST_2);
    // cout << "ST_1 : " << ST_1 << '\t' << "ST_2 : " << ST_2 << endl;



//--------------------------------Facorial------------------------------------------

    // int A = 4;

    // cout << FACT(A) << endl;


//-------------------------------------جمع اعداد به روش بازگشتی---------------------------------------------


    // int NUMBER = 4;
    // cout << CALCULATE_2(NUMBER) << endl;


//----------------------------------Fibinachi-----------------------------------------

    // int N;
    // cout << "Inter N : ";
    //     cin >> N;
    // cout << "FIBO : " << FIBO(N) << endl;


//------------------------------------ضرب دو عدد---------------------------------------------




    // int A = 3, B = 5;
    // cout << "RESULT : " << PROD(A, B) << endl;






//------------------------------------محاسبه توان--------------------------------------------

    // int A = 2, B = 10;
    // cout << "RESULT : " << POW(A, B) << endl;



//------------------------------------برعکس کردن اعداد ورودی-------------------------------------------

//     int N = 125;
//     int RESULT_FUNCTION;
//    RESULT_FUNCTION = RECURSIVE(N);
//    cout << "RESULT : " << RESULT_FUNCTION << endl;

//----------------------------------------------تابع چاپ-----------------------------------------------------


//    int X = 10, Y = 20;
//    PRINT(X, Y);


//-----------------------------------------------------------------------------------------------------

    using B::F;

    A::F();
    F();
    ::F();
    return 0;
}
