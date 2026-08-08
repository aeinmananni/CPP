#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

// int X  = 6;

/**
 * 
 * (1 / 1) + (1 / 2) + (1 / 3) + (1 / 4) +....
 */
float CALCULATE_1(int N){

float SUM = 0;
float K = 1;
for (int i = 1; i <= N; i++)
{
    SUM += K / i;
}
        return SUM;
}



/**
 * 
 * (1 / 1) + (1 / 2) - (1 / 3) + (1 / 4) -....
 */


float CALCULATE_2(int N){

float SUM = 0;
float K = 1;
for (int i = 1; i <= N; i++)
{
    SUM += K / i;
    K = -K; // برای تغییر یک در میون علامت ها
}
        return SUM;
}





/**
 *  (2 * 4 * 6 * 8 * ....) / (1 * 3 * 5 * 7)
 */

 float CALCULATE_3(int N){
     float SUM = 1;

     for (float i = 2; i <= N; i += 2){
         SUM *= (i / (i - 1));
     }

     return SUM;
 }







/**
 * 
 * A(X1 , Y1)
 * B(X2 , Y2)
 * 
 * distance  = sqrt ((X2 - X1) ^ 2 + (Y2 - Y1) ^ 2)
 */


double CALCULATE_DISTANCE (double X1 , double X2 ,double Y1 , double Y2){
    double RESULT = 0;

    RESULT = sqrt(pow(X2 - X1, 2) + pow(Y2 - Y1, 2));

    return RESULT;
}






/**
 *  f(a , b) = (a ^ b) / ((a + 3b) ^ 2);
 */




 double CALCULATE_4(int A , int B){

     double RESULT = 0;

     RESULT = pow(A, B) / pow(A + (3 * B), 2);

     return RESULT;
 }







int GCD (int X ,int Y){
    int RESULT;
    RESULT = X % Y;

    while (RESULT != 0)
    {
        X = Y;
        Y = RESULT;
        RESULT = X % Y;
    }

    return Y;
}



void FUNCTION_HANDLER(){
   static int X = 1;
    cout << X << endl;
    X++;
}

int main() {
//------------------------------- محاسبات با تابع--------------------------------
    // int N;
    // cout << "Inter SUM : ";
    //     cin >> N;


    //     cout << "SUM POSITIVE : " << CALCULATE_1(N) << endl;
    //     cout << "SUM NEGATIVE : " << CALCULATE_2(N) << endl;



//--------------------------------ضرب اعداد زوج و تقسیم ان بر اعدا فرد----------------------------------


    // int NUMBER;

    // cout << "Inter Your Number : ";
    //     cin >> NUMBER;

    //     cout << "RESULT : " << CALCULATE_3(NUMBER) << endl;





//---------------------------------------------برای پیدا کردن فاصله یا همون محاسبه مختصات----------------------------------------------------

    // double X1 , X2 , Y1 , Y2;

    // cout << "Inter A : ";
    //     cin >> X1 >> Y1;
    // cout << "Inter B : ";
    //     cin >> X2 >> Y2;

    //     cout << "CALCULATE DISTANCE : " << CALCULATE_DISTANCE(X1, X2, Y1, Y2) << endl;





//--------------------------------------------محاسبه تابع---------------------------------------------------

    // int A , B;
    // cout << "Enter A , B : ";
    //     cin >> A >> B;

    //     cout << "RESULT : " << CALCULATE_4(A, B) << endl;






//---------------------------------------محاسبه بزرگترین مقسوم علیه مشترک ب.م.م -----------------------------------------
    // int X , Y;
    // cout << "Inter X , Y : ";
    //     cin >> X >> Y;

    //     cout << "GCD : " << GCD(X, Y) << endl;




//------------------------------------نحوه فراخوانی متغییر سراسری-----------------------------------------

// int X = 7;

// cout << X << endl;
// cout << ::X << endl; // برای فراخوانی متغییر سراسری


//---------------------------------------------Static-------------------------------------------------------

// اگر بخواهیم در این تابع اخرین مقداری را که داشتیم در نظر بگیرد و دیگه متغییر رو تبدیل به یک نکند میتونیم درون تابع نتغییر رو به صورت استاتیک تعریف کنیم
//  است auto  زمانی که ما متغییر رو به حالت استاتیک قرار نمیدهیم پیش فرض   



// FUNCTION_HANDLER();
// FUNCTION_HANDLER();
// FUNCTION_HANDLER();

    return 0;
}