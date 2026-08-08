#include <iostream>
#include <math.h>
using std::cin;
using std::cout;
using std::endl;




int main(){
    int X, Y ;
    float AVRAGE;

    cout << "Please Inter Your X : ";
    cin >> X;

    cout << "Please Inter Your Y : ";
    cin >> Y;

    // به این روش میتونیم تبدیل نوع رو انجام بدیم

    AVRAGE = (float)(X + Y) / 2; 

    cout << "YOUR AVRAGE : " << AVRAGE << endl;
//----------------------------------------------------------------

    //میخوایم سه خونه خالی کنیم  یا داریم در نظر میگیریم و قبلش رو کارکتر قرار بدیم

    int NUMBER = 5;
        cout.width(3);
        cout.fill('*');

        // قرار دارد right  خب حالا بخواهیم تنظیمات چیدمان عدد رو انجام بدیم در حالت دیفالت روی 
        cout.setf(std::ios::left);

        cout << NUMBER << endl;

        cout << INT_MAX << '\t' << INT_MIN << '\t' << SHRT_MAX << '\t' << SHRT_MIN << '\t' << LONG_MAX << '\t' << LONG_MIN << endl;

        cout << pow(2, 3) << endl;
        cout << pow(2, -2) << endl;

        // باقی مانده حاصل تقسیم عدد اول به دوم

        cout << fmod(6, 4) << endl;

        // قدر مطلق
        cout << abs(-6) << endl;
        // قدر مطلق عدد اعشاری
        cout << fabs(-6.54) << endl;

        // برای پیدا کردن کد اسکی کارکتر
        cout << int('a') << endl;
        cout << char(65) << endl;


        //----------------------------
        int x=10, y=20;
cout << "x = " << x++ << " and y = " << --y << endl;
cout << "x = " << x-- << " and y = " << ++y << endl;
        return 0;
}