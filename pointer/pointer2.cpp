#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 
#include <algorithm>
#include <memory>


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
using std::min_element;
using std::remove;
using std::replace;
using std::reverse;
using std::setprecision;
using std::sort;



namespace GLOBAL
{
    void PRINT() { cout << "--------------------------------------------------" << endl; }
}


using Operation = int (*)(int, int);


// template <typename T>
// using Pointer = T*;

template <typename T> T GET_VALUE(void* P){
    return *static_cast<T *>(P);
}











int PONTER_FUNCTION(Operation P, int A, int B){
    return (*P)(A, B);
};

int SUM(int A , int B){

    return A + B;
}

int PROD (int A , int B){
    return A * B;
}

// برای تعریف اشاره گر به یک تابع باید اول دقت کنیم پروتوتایپ ما به چه شکلی است






void SEND_ARGUMENT_1(int *N){
    *N = *N + 3;
}



void SEND_ARGUMENT_2(int &N){
    N = N + 3;
}



void SORT_ARRY (vector<int> &ARR){
    sort(ARR.begin(), ARR.end());

    for (int i = 0; i < size(ARR); i++){
        cout << ((i == 0) ? "{ " : " , ") << ARR[i] << ((i == size(ARR) - 1) ? " }" : "") << " ";
    }
}

int main(){

  using GLOBAL::PRINT;



  int (*P)(int, int);

  P = SUM;

  cout << P(6, 2) << endl;

  P = PROD;
  cout << P(6, 2) << endl;

  PRINT();



  //------------------------------------------ارایه ای از اشاره گر ها به توابع-------------------------------------------------

    vector<Operation> FUNCTION_WITH_VECTOR = {SUM, PROD};
    array<Operation , 2> FUNCTION_WITH_ARRAY = {SUM, PROD};

    cout << FUNCTION_WITH_VECTOR[0](8, 2) << endl;
    cout << FUNCTION_WITH_VECTOR[1](8, 2) << endl << endl;

    cout << FUNCTION_WITH_ARRAY[0](8, 2) << endl;
    cout << FUNCTION_WITH_ARRAY[1](8, 2) << endl;

PRINT();


//-------------------------------------------------------------اشاره گر به تابع به عنوان پرامتری از تابع دیگر----------------------------------------------------

cout << PONTER_FUNCTION(SUM, 2, 3) << endl;
cout << PONTER_FUNCTION(PROD, 2, 3) << endl;

PRINT();

//---------------------------------------------------------ارسال ارگومان از طریق پوینتر--------------------------------------------------------------
    int A = 2;
    int B = 3;


    SEND_ARGUMENT_1(&A); // Call By Pointer
    SEND_ARGUMENT_2(B); // Call By Reference

    cout << "AAA : " << A << endl; 
    cout << "AAA : " << B << endl; 

PRINT();
//------------------------------------------------------------------------------------------------------------------------------------------

    vector<int> NUMBERS_1 = {1, 5, 3, 8, 7, 4, 9, 21, 11, 34, 12};
    SORT_ARRY(NUMBERS_1);
    cout << endl;
    PRINT();

    //-----------------------------------------------------------void Pointer--------------------------------------------------------
    // زمانی که پویتری رو به این صورت تعریف میکنیم دیگه نیازی نداریم تایپ بشه اختصاص بدیم هر تایپی رو میتونه توی خوش ذخیره کنه

    int X = 3;
    double Y = 2.43;
    void *P_1;

    P_1 = &X;
    cout << GET_VALUE<int>(P_1) << endl << endl;

    P_1 = &Y;
    cout << GET_VALUE<double>(P_1) << endl;
PRINT();


//---------------------------------------------------حافظه پویا------------------------------------------------------
//   استفاده میکنیم Delete و برای حذف حافظه از دستور  new برای گرفتن حافظه از دستور
// در واقع ما با این کار متغییر هارو به جای گرفتن از سگمنت برنامه از حافظه میگیریم

int *PO_1;
PO_1 = new int; //  با این دستور یک فضا از حافظه پویا گرفتیم که متغییر اشاره میکنه به اون فضا و میتونیم کارمون رو انجام بدیم

//delete PO_1 برای زمانی است که کار ما با اون فضا تموم شده

vector<int> *PO_2;
PO_2 = new vector<int>;
// delete vector<int> PO_2

array<int,4> *PO_3;
PO_3 = new array<int,4>;

// نیست delete با استفاده از روش زیر دیگه نیازی به نوشتن



unique_ptr<array<int, 2>> PO_4 = make_unique<array<int,2>>();

(*PO_4)[0] = 10;
(*PO_4)[1] = 20;

    cout << (*PO_4)[0] << endl;
    cout << (*PO_4)[1] << endl;
PRINT();

//------------------------------------------------------------------------------------------------

    // unique_ptr<int> NUM_1 = make_unique<int>();
    // unique_ptr<int> NUM_2 = make_unique<int>();
    // unique_ptr<int> NUM_3 = make_unique<int>(10);
    // int SUM;

    // cout << "INTER YOUR NUMBERS : ";
    //    cin >> *NUM_1 >> *NUM_2;

    //    SUM = *NUM_1 + *NUM_2 + *NUM_3;
    //    cout << "RESULT : " << SUM;

//--------------------------------------------------------------------------------

int N_IN;
unique_ptr<vector<int>> LEN = make_unique<vector<int>>();

    cout << "Enter Number : ";
        cin >> N_IN;

     //   LEN.reserve(5) :  برای حداقل ۵ عنصر، از الان حافظه آماده کن میگیم VECTOR به 
    LEN->resize(N_IN);

        for (int i = 0; i <= N_IN; i++){
            (*LEN).push_back(i);
        }

    int SUM_NEW = 0;

    for (int i = 0; i < size((*LEN)); i++){
        SUM_NEW += (*LEN)[i];
    }

    cout << endl << "SSS : " << SUM_NEW;

//    cout << LEN.size() << endl   // تعداد عناصر واقعی;
//    cout << LEN.capacity() << endl  تعداد عناصری که فعلاً برایشان حافظه آماده است;
//LEN.resize(5); برای ایجاد 5 عنصر باید از این استفاده کنیم
    return 0;
}