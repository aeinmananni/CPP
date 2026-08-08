#define PI 3.14
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{
    string myAppName = "Hello My Arduino World";
    
    cout << "welcom Ayin" << "\t" << myAppName << endl;

    cout << "--------------------------------------------------" << endl;

    
        cout << "PART 1 : My name is Ayin" << "\n"
             << "Im 28 Years Old" << endl;

cout << "--------------------------------------------------" << endl;

    
        cout << "PART2 : My name is Ayin" << endl
             << "Im 28 Years Old" << endl;

cout << "--------------------------------------------------" << endl;

    cout << "Wellcom" << "\b" << "Ayin" << endl;

cout << "--------------------------------------------------" << endl;

cout << "MY BEESER : " << "\a" << endl;
cout << "--------------------------------------------------" << endl;
// خب میخواهیم عددی را از ورودی دریافت کنیم و ان را چاپ کنیم

int number;
cout << "Please Inter Your Number : ";
cin >> number;
cout << "RESULT : " << 2 * number << endl;
cout << "--------------------------------------------------" << endl;

//در ادامه میخوایم برنامه دو عدد رو از ورودی بگیریم و حاصل اون هارو باهم جمع کنیم

int input_number1 , input_number2;
cout << "Plaese Inter Your Number 1 : ";
cin >> input_number1;

cout << "Plaese Inter Your Number 2 : ";
cin >> input_number2;

cout << "Your Result Sum : " << input_number1 + input_number2 << endl;

cout << "--------------------------------------------------" << endl;

// برای اینکه بدونیم یک متغییر چقدر فضا اشغال میکند

int a;
cout << "YORE SIZE OF : " << sizeof a << endl;

cout << "--------------------------------------------------" << endl;

//ما میتوانیم کاکتر تعریف کنیم و عملی رو روی کارکتر انجام دهیم

char Name = 'A';
cout << Name + 1 << endl;
cout << "--------------------------------------------------" << endl;

int sum1 = 2, result;

result = sum1 * sum1++;

cout << sum1 << endl;
cout << result << endl;
cout << "--------------------------------------------------" << endl;
int X, Y;
X = 8;
Y = X << 1;

cout << Y << endl;

int Z;

Z = X >> 1;

cout << Z << endl;
cout << "--------------------------------------------------" << endl;

int NUM1 = 2, NUM2;

NUM2 = NUM1 > 10 ? 'A' : 'B';

cout << "RESULT : " << NUM2 << endl;
cout << "--------------------------------------------------" << endl;

int COUNT_1 = 2, COUNT_2;

COUNT_2 = (COUNT_1 += 10, COUNT_1 + 5);
cout << "RESULT_COUNT : " << COUNT_2 << endl;


cout << "--------------------------------------------------" << endl;
int r;
float X_1;
cout << "Enter the radius : ";
cin >> r;
X_1 = PI * r * r;
cout << "YOUR radius : " << X_1 << endl;
return 0;
}