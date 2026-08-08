
#include <iostream>
#include <string>
#include <cctype>


using std::cin;
using std::cout;
using std::endl;
using std::string;



int main (){

/**
 * رو اجرا میکنم در ابتدا شرطی برسی نمیشه do while  پس زمانی که داریم 
 * از دفعات بعد شرط مهم میشود
 * 
 */

// ---------------------چاپ عدد یک تا سه------------------------

// int i = 1;

// do
// {
//     cout << i;

// } while (++i<= 3);


//---------------------------چاپ عدد وارون به -------------------------------

// int N, D = 0 , SUM = 0;

// cin >> N;

// do
// {
//     D = N % 10;
//     cout << D;
//     SUM += D;
//     N = N / 10;
// } while (N != 0);


// cout << endl << "SUM : " << SUM << endl;



//-------------------------فاکتوریل---------------------------
int N = 0, I = 1, FAC = 1;

cout << '\t' << "X " << "Factorial" << endl
     << "--------------------------------" << endl;
do
{
    N++;
    FAC *= N;
    cout << N << '\t' << FAC << endl;
    ++I;
    /* code */
} while (I <= 5);


return 0;
}