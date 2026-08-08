#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;




void cout_function(){

 cout << "------------------------------------------------------" << endl;

}

void print(char NUM){

    cout << NUM << endl;
    
}


int CALCULATE(int a , char CH , int b ){

    switch(CH){
        case '+' :
            return a + b;
        case '-' :
            return a - b;
        case '*' :
            return a * b;
        case '/' :
            return a / b;
        default :
            return 0;
        }
}


int FUN1(int A){
    int SUM = 1;
    SUM = A * A;

    return SUM;
}


int IS_ODD(int NUMBER){

    int FLAG = 1;
    if(NUMBER % 2 == 0){
        FLAG = 0;
    }
    return FLAG;
}



unsigned long FACT(unsigned int NUMBER){
    unsigned long F = 1;

    for (int i = 1; i <= NUMBER; i++){
        F = F * i;
        cout << i;
        if(i < NUMBER){
            cout << " * ";
        } else{
            cout << " = ";
        }
    }

    return F;
}


int SELECTED_MAX_NUMBER(int X , int Y , int Z){
    int MAX_NUMBER = X;

    if(MAX_NUMBER < Y){
        MAX_NUMBER = Y;
    }
    if(MAX_NUMBER < Z){
        MAX_NUMBER = Z;
    }

    return MAX_NUMBER;
}

int CALC1(int X , int Y ,int Z){
    int RESULT = (2 * X) + (3 * (Y + Z));

    return RESULT;
}


int CALC2(int X){
    int RESULT = (pow(X , 2)) - (5 * X) + 6;

    return RESULT;
}

int main(){
    // print('A');

    // cout_function();

    
    // int X, Y, RESULT = 0;
    // char CH;
    // cout << "Intered Numbers : ";
    // cin >> X >> CH >> Y;

    // RESULT = 1ULATE(X, CH , Y);
    // cout << "RESULT_NUMBERS : " << RESULT << endl;

//-----------------------------------------------------------------

    // for (int i = 0; i <= 3;i++){
    //     cout << i << '\t' << " * " << '\t' << i << '\t' << " = "<< '\t' << "( " << FUN1(i) << " )" << endl;
    // }
//-----------------------------------------------------------------

    // int number;
    // char CH;
    // while (1)
    // {


    // cout << "Inter Your Number : ";
    //     cin >> number;

    // if(IS_ODD(number)){
    //     cout <<  "YES" ;
    // } else{
    //     cout << "NO";
    // }
    // cout << endl << "Continue ? (y / n)" << endl;
    //     cin >> CH;
    // if(CH == 'n') break;
    // }

 //-------------------------------------------------------------------

 // unsigned : برای زمانی که میخوایم محدوده های اعدا رو بدون علامت در نظر بگیریم
//    unsigned int X;
//     cout << "Inter Number : ";
//         cin >> X;
//         unsigned long RESULT = FACT(X);

//         cout << RESULT << endl;

//-------------------------------------------------------------------------

    // int X, Y, Z , RESULT;

    // cout << "Inter Your Number : ";
    //     cin >> X >> Y >> Z;

    // RESULT = SELECTED_MAX_NUMBER(X, Y, Z);

    // cout << "MAX_NUMBER : " << RESULT << endl;
//-----------------------------------------------------------------------------------
    // int X, Y, Z;
    // cout << "Inter Your Numbers : ";
    //     cin >> X >> Y  >> Z;

    //     cout << "RESULT CACULATE : " << CALC1(X, Y, Z) << endl;
//--------------------------------------------------------------------------

    int X;
    cout << "Inter Your Number : ";
        cin >> X;
    cout << "RESULT : " << CALC2(X) << endl;
    return 0;
}