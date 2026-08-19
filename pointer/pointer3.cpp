#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 
#include <algorithm>
#include <memory>
#include <random>

using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::size;
using std::size_t;
using std::string;
using std::vector;
using std::setw;
using std::unique_ptr;
using std::make_unique;



using std::copy;
using std::find;
using std::fixed;
using std::max_element;
using std::merge;
using std::min_element;
using std::remove;
using std::replace;
using std::reverse;
using std::setprecision;
using std::shuffle;
using std::sort;

using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

namespace GLOBAL
{
    void PRINT() { cout << "--------------------------------------------------" << endl; }
}




int &F(vector<int> &Arr , int i){
    return Arr[i];
};








int &MIN_NUMBER(int &A , int &B){
    return (A < B) ? A : B;
}

int main(){

//------------------------------------برای تولید عدد تصادفی-----------------------------------------

using GLOBAL::PRINT;

random_device rd;
mt19937 GENERATE(rd());
uniform_int_distribution<int> dist(1, 50);

unique_ptr<vector<int>> NUMBERS = make_unique<vector<int>>();

while (size(*NUMBERS) < 30)
{
    int number = dist(GENERATE);

    if (find((*NUMBERS).begin(), (*NUMBERS).end(), number) == (*NUMBERS).end())
    {
        (*NUMBERS).push_back(number);
    }
}
    sort((*NUMBERS).begin(), (*NUMBERS).end());

    for (int i = 0; i < size((*NUMBERS)); i++){
        cout << (*NUMBERS)[i] << endl;
    }

    PRINT();
    //----------------------------------------------------------------------------------------------

    vector<int> A = {1, 4, 5, 6, 8};
    vector<int> B = {7, 9, 10, 3, 2};
    vector<int> RESULT;


    RESULT.resize(size(A) + size(B));

    merge(A.begin(), A.end(), B.begin(), B.end(), RESULT.begin());
    sort(RESULT.begin(), RESULT.end());

    for (int number : RESULT)
    {
        cout << number << '\t';
    }

    cout << endl;
    PRINT();
    //----------------------------------------------------------------------------------------------
    vector<int> NN = {1, 2, 3, 4, 5};
    F(NN, 2) = 9; // با این ترفند میتونیم مثلا خونه ارایه رو عوض کنیم

    for (int i = 0; i < size(NN); i++)
    {
        cout << NN[i] << '\t';
    }


    cout << endl;
    PRINT();
//-----------------------------------------------تابعی مینوسیم که اول کوچکترین عدد رو پیدا کنه و ععدی که میدیم رو توی متغییرش ذخیره کنه-----------------------------------------------
    int X_1 = 4;
    int Y_1 = 5;

    MIN_NUMBER(X_1, Y_1) = 12;

    cout << "X_1 : " << X_1 << endl;
    cout << "Y_1 : " << Y_1 << endl;

    return 0;
}