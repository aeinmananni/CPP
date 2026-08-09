#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const double PI = 3.14159;



//----------------------ارگومان های فرضی---------------------------

int FUNCTION_1(int A = 1 , int B = 2 ,int C = 3){
    return A + B + C;
}


/**
 *  inline : اگر در ابتدای تعریف یک تابعی این کلمه رو قرار دهیم سرعت اجرا برنامه را بالا میبرد
 *          و فقط یک کپی از تابع را به حالت اجرا در می اورد و اینکه حجم برنامه نیز بالا میرد 
 *          در صورتی که چند بار  این تابع فراخوانی شود
 *          پس فقط برای تابع های کوچک استفاده میشود
 *          
 *          مثال: 
 *              برای پیاده سازی تابع مساحت دایره
 * 
 */

inline double CIRCLE_CACULTE(const double r){
    return PI * pow(r, 2);
}










// micro : شبیه به تابع ولی نوع وردی ها تایین نمیشود

#define min(X, Y) (X < Y ? X : Y);



/**
 *  ارسال با مقدار و با فرخوانی 
 * اینکه ارگومان ها ومقادیر رو با مقدار پاس میکنیم چه معنی خواهد  داشت
 *   خب زمانی که ما این علامت را اضافه میکنیم & در این حالت فرخوانی با ارجاع را خواهیم داشت 
 *  و میبینیم متغییر ما بعد از پاس دادن به تابع تغییر میکند 
 *  (Call By Reference) چون تاثییر تغییر را برمیگرداند 
 * 
 *  Call By Value OR Call By Reference
 */



 void CALL_1 (int &A){
     A += 1;
 }


 // جابه جایی اعداد

void SWAP(int &X , int &B){
    int TEMP;
    TEMP = X;
    X = B;
    B = TEMP;
}





//----------------------------------جمع اعداد------------------------------------


int CALC_1 (int &X , int &Y){

    X++;
    Y++;
    return X + Y;
}






//-----------------------------------چاپ معکوس اعداد------------------------------------------


int CALC_2 (int N ,int &R , int &C){
    int D;
    int SUM = 0;
    R = 0;

    while (N != 0)
    {
        D = N % 10;
        N = N / 10;
        R = R * 10 + D;
        C++;
        SUM += D;
    }
    return SUM;
}


/**
 *      function Overloading :  زمانی که دو تابع هم نام با ورودی ها یمتفاوت داشته باشم به نوعی این اسم را برای ایم سیاست قرار میدهند
 *                              و کامپالر خروجی را بر اساس ورودی ها تشخیص میدهد
 */

 int SQUARE (int A){
    return A * A;
}

double SQUARE (double A){
    return A * A;
}


/**
 *  Template : فرض میکنیم ما عددی رو از ورودی گرفته ایم و میخواهیم بزرگترین ان را مشخص کنیم
 *             به نوعی میتوانیم از این روش برای جنریک کردن ورودی ها استفاده کنیم
 * 
 */

 template < class T >  T MAXIMUM (T X , T Y){

     T MAX;
     MAX = (X > Y) ? X : Y;

     return MAX;
 }


template <class T> T INCREAMENT (T &X){
    X += 3;

    return X;
}





template  <class T , class U> T CALCULTE_1(U X){

    U SUM;

    SUM = X + 1;

    return SUM;
}

int main(){


    // int X = 4, Y = 5, Z = 6;
    // cout << "FUNCTION : " << FUNCTION_1(X, Y, Z) << endl;
    // cout << "FUNCTION OPTIONAL 1 : " << FUNCTION_1(X,Y) << endl;
    // cout << "FUNCTION OPTIONAL 2: " << FUNCTION_1(X) << endl;
    // cout << "FUNCTION OPTIONAL 3 : " << FUNCTION_1() << endl;

    //------------------------------------------------------------------------




    // int R;
    // cout << "Enter R : ";
    //     cin >> R;
    //     cout << "Your Calculation Result : " << CIRCLE_CACULTE(R) << endl;



//---------------------------------------------------------------------------

    // int A = 2, B = 5;

    // cout << "MIN : " << min(A, B);

//-----------------------------------------------------------------------------------

    // int X = 2;
    // CALL_1(X);
    // cout << "X : " << X << endl;


//----------------------------------------------------------------------------------

    // int X = 3;
    // int Y = 5;
    
    // SWAP(X, Y);

    //     cout << "X : " << X << endl;
    //     cout << "Y : " << Y << endl;
    

//----------------------------------------------------------------------------------

    // int X = 5, Y = 5;

    // cout << "RESULT : " << CALC_1(X, Y) << endl;





//----------------------------------------------------------------------------------

// int N, R = 0, C = 0, SUM = 0;

// cout << "Enter N : ";
// cin >> N;

// SUM = CALC_2(N, R, C);

// cout << "N = " << N << endl;
// cout << "REVERSE = " << R << endl;
// cout << "C = " << C << endl;
// cout << "SUM = " << SUM << endl;

//-----------------------------------------------------------------
    // int A, B;
    // cout << "Inter Integer Number : ";
    //     cin >> A >> B;
    // cout << "MAXIMUM :" << MAXIMUM(A , B) << endl;


    // double A1, B1;
    // cout << "Inter Double Number : ";
    //     cin >> A1 >> B1;
    // cout << "MAXIMUM :" << MAXIMUM(A1 , B1) << endl;


    // char A2, B2;
    // cout << "Inter Char Number : ";
    //     cin >> A2 >> B2;
    // cout << "MAXIMUM :" << MAXIMUM(A2 , B2) << endl;

    //---------------------------------------------------------------------------------

    // int A = 1;
    // double B = 2.13;
    // char CH = 'A';

    // cout << "A : " << INCREAMENT<int>(A) << endl;
    // cout << "B : " << INCREAMENT<double>(B) << endl;
    // cout << "CH : " << (int)INCREAMENT<char>(CH) << endl;

//-----------------------------------------------------------------
    int A = 1;
    char CH = 'A';
    double D = 97.2;

    cout << "A : " << CALCULTE_1<int,int>(A) << endl;
    cout << "CH NUMBER : " << CALCULTE_1<int , char>(CH) << endl;
    cout << "CH CHAR: " << CALCULTE_1<char ,char>(CH) << endl;
    cout << "CH : " << CALCULTE_1<char ,double>(D) << endl;

    return 0;
}