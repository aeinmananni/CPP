
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;






int main(){

//     for (int i = 0; i <= 5; i++){
//         cout << "*" << i << endl;
//     };
//     cout << "------------------------------------------------" << endl;

//         for (int i = 0; i <= 50; i = i + 2){
//         cout << "*" << i << endl;
//     };

//     cout << "------------------------------------------------" << endl;

//         for (int i = 50; i >= 0; i -= 2)
//         {

//             cout << "*" << i << endl;

//         };


//     cout << "------------------------------------------------" << endl;

//     int X;
//     for (char ch = 'A'; ch <= 'Z'; ch++)
//     {
//         X = ch;
//         cout <<  ch << " = " << X << endl;
//     };

// cout << "------------------------------------------------" << endl;
// int A, B;
//     cout << "Please Inter Your Number : ";
//         cin >> A >> B;

//         for (int i = A; i <= B; i++){
//             if(i % 2 == 0){
//                 cout << "Your Numbers : " << i << endl;
//             }else {
//                 cout << "**" << endl;
//             }
//         }
//-------------------------------جمع اعداد با هم دیگه-------------------------------------
// int SUM = 0;

// for (int i = 1; i <= 5; i ++)
// {
//     SUM += i;

// }

//     cout << "YOUR NUMBERS : " << SUM << endl;


//------------------------------- اعداد زوج دو رقمی-------------------------------------

// int SUM = 0;

// for (int i = 10; i <= 98; i += 2){

       
//             SUM += i;
   
// }
// cout << "YOUR NUMBERS : " << SUM << endl;


//----------------------------استفاده  از دو متغییر در حلقه---------------------------------

// for (int i = 1, j = 3; i <= j; i++ , j--){
//     cout << i << " * " << j << " = " << i * j << endl;

// }
// cout << "---------------------------------------------" << endl;
// for (int i = 1, j = 9; i != j; i++, j--)
// {
//     cout << i << " * " << j << " = " << i * j << endl;
// }

// int N, SUM = 0 , NUM;

//     cout << "INTER YOUR STEP NUMBERS : ";
//         cin >> N;

//         for (int i = 1; i <= N; i++){
//                 cout << "Inter Your Number : ";
//                     cin >> NUM;
//                 SUM += NUM;
//         }

//           cout << "Your Result : " << SUM << endl;

//------------------------------محاسبه فاکتوریل---------------------------------
// فاکتوریل یعنی ضرب از یک تا خوده اون عدد مد نظر
// int NUMBER, FAC = 1;

// cout << "Please Choose Your Number : ";
// cin >> NUMBER;

// for (int i = 1; i <= NUMBER; i++)
// {
//     cout << i;
//     if( i < NUMBER){
//         cout << " * ";
//     }
//     FAC *= i;
// }
//         cout << endl << "Your Factorail : " << FAC << endl;

// ------------------------نوشتن برنامه ای که ببینیم یک رشته چند کارکتر داره--------------------------

// string TEXT;


// cout << "Please Write Your Text : ";
// cin >> TEXT;

// for (int i = 0; i < TEXT.length(); i++)
// {
//     cout << i + 1 << endl;
// }
// cout << " ********* " << TEXT.length() << " ********** " << endl;
// //------------------------------------------------------

// char CHAR;
// cin >> CHAR;
// int i;
// for (i = 1; CHAR = cin.get() != '.'; i++);
// cout << i;

// int SUM = 0, NUM;

// for (;;){
//     cout << "Inter Number  : ";
//       cin >> NUM;
//       SUM += NUM;
//       if(SUM >= 20) break;
// }
// cout << SUM << endl;

// چاپ مقسوم علیه

int N;
cout << "Inter Your Number : ";
cin >> N;
for (int i = 1; i <= N; i++)
{
    if(N % i == 0){
        cout << i << '\t';
    }
}

    return 0;
}