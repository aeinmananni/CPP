#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 
#include <algorithm>
#include <memory>
#include <random>
#include <cstring>
#include <cstdlib>

using std::atof; // رشته رو تبدیل به اعشاری میکند
using std::atoi; // رشته رو تبدیل به اینتیجر میکند
using std::atol; // برای تبدیل به عدد اعداد بزرگ
using std::isalnum;
using std::isalpha;
using std::isdigit;
using std::strlen;
using std::strcat; // اتصال دو رشته به هم
using std::strcpy; // کارش کپی کردن یک رشته توی رشته دیگه هست
using std::strncpy; // میتونیم مشخص کنیم چند حرف کپی بشه
using std :: strncat; // اتصال دو رشته بهم با توجه به مقدار کارکتری که بهش میدیم
using std:: strcmp; // برای مقایسه دو رشته
using std:: strncmp; // چه مقداری از رسته دوم با اول مقایسه بشه
using std::strchr; // یک کارکتر رو در یک رشته جست و جو میکنه
using std::strstr; // یک زیر رسته رو در یک رشته جست و جو میکنه 
using std::strrchr ; // از اخر جست و جو رو در یک رشته برای پدا کردن کارکتر انجام میده
using std::strtok; // ازابتدای رشته تا قبل از کارکتمری که به عنوان ورودی بهش میدیم رو برامون چاپ میکنه
using std::strtol; // عددی که توی رشته داریم را میتوانیم بیرون بکشیم از ابتدا شروع میکنه و فقط اعدادی رو که تا ابتدای اولین حرف هستند را میدهد
using std::strtod; // برای اعداد اعشاری
using std::strspn; // نگاه میکنه ببینه کارکتر های جمله اول در رشته دوم وجود داره و کدومه
using std::strcspn;
using std::stringstream;



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



int main(){
    using GLOBAL::PRINT;

    string Name_1 = "Ali";
    cout << "Name_1 : " << Name_1 << endl << endl;

    for (size_t i = 0; i < size(Name_1); i++){
        cout << Name_1[i] << setw(6);
    }

cout << endl;
PRINT();

    //----------------------------------------------------------------




    const char Name_2[] = "ALi Reza";

    cout << "NAME_2 : " << *Name_2 << endl;

    for (size_t i = 0; i < size(Name_2); i++){
        cout << Name_2[i] << setw(6);
    }


cout << endl;
PRINT();

//------------------------------------------------------------------

const char *Name_3 = "Mohamad";

    cout << Name_3 << endl;


PRINT();
//-------------------------------strlen (طول رشته)-------------------------------------

 string First_Name_1 = "Ayin";
    cout << size(First_Name_1) << endl << endl;

    cout << First_Name_1.length() << endl << endl;

    //strlen برای تبدیل استرینگ و استفاده از 
    cout << strlen(First_Name_1.data()) << endl << endl;
    cout << sizeof(First_Name_1) << endl << endl;


const char *First_Name_2 = "Hossine";
    cout << strlen(First_Name_2) << endl;
    
PRINT();



//----------------------------------گرفتن ورودی رشته ای---------------------------------------
//     string First_Name_3;

//         cout << "Enter Name : ";
//         // برای گرفتن ورودی رشته ای
//             getline(cin,First_Name_3 ,'n');
            
        
//         cout << "My Name Is : " << First_Name_3 << endl;
// PRINT();


//----------------------------------------------------------------------
//      char First_Name_4[50];

//      cout << "Enter Name : ";
//         cin.get(First_Name_4,50, 'M'); // میتونیم با مشخص کردن کارکتر بگیم تا چه محدوده ای رو بگیره
//     cout << "My Name Is : " << First_Name_4 << endl;

// PRINT();

//--------------------------------خب حالا میخواهیم اخرین کلمه یا حرف را گبریم----------------------------------

    string Message_1 = "This is My First Message";

    size_t Last_Space = Message_1.find_last_of(' ');
    string Last_Word_1 = Message_1.substr(Last_Space + 1);
    string Last_Word_2 = Last_Word_1.substr(size(Last_Word_1) - 2);

        cout << "SPACE : " << Last_Space << endl <<endl;
        cout << "WORD_1 : " << Last_Word_1 << endl << endl ;
        cout << "WORD_2 : " << Last_Word_2 << endl ;
PRINT();






//----------------------------جایگزین کردن حروف------------------------------

    string Message_2 = "This Is My First Message In System..";
    replace(Message_2.begin(), Message_2.end(), 's', 'f');

        cout << "My Message : " << Message_2 << endl;
PRINT();


    // char CH;

    // while (cin.get(CH))
    // {
    //     if(CH == 'b'){
    //         cin.putback('f');
    //     }else{
    //         cout << CH;
    //     }
    // }

    string Message_3 = "Ali Baba";

    for(char &Text : Message_3){
        Text = static_cast<char>(tolower(static_cast<char>(Text)));
        if (Text == 'b')
        {
            Text = 'f';
        }
    }
    cout << "Message_3 : " << Message_3 << endl;

PRINT();
//---------------------------------------برای نمایش ندادن یک کلمه-------------------------------------------

// char CH;

// while (cin.get(CH))
// {
//     cout << CH;

//     while (cin.peek() == 'b')
//     {
//         cin.ignore(1, 'b');
//     }
//     if(CH == '.')
//         break;
// }
//---------------------------------------------------------------------------

string STR_1 = "12";
cout << atoi(STR_1.data()) << endl;


//اگر بعد از عدد حروف داشته باشیم تبدیل انجام میشه ولی اگر قبل از عدد حروف داشته باشیم تبدلی انجام نمیشه
string STR_2 = "47.54ADASD";
cout << atof(STR_2.data()) << endl;



string STR_3 = "123456789";
cout << atol(STR_3.data()) << endl;

PRINT();

//-----------------------------------------------------------------

string STR_5 = "This Is My Message";

for(char &CH :  STR_5){
    if(islower(CH)){
        CH = static_cast<char>(toupper(static_cast<char>(CH)));
    } 
}
cout << "STR : " << STR_5 << endl;


string STR_6 = "This Is My Message";

for(char &CH :  STR_6){
    if(isupper(CH)){
        CH = static_cast<char>(tolower(static_cast<char>(CH)));
    } 
}
cout << "STR : " << STR_6 << endl;

PRINT();
//----------------------------------------------------------------------

// برای چک کردن حروف الفبا
string STR_ALF = "ABCDEF";

bool Is_Alpha = true;

for (char &C : STR_ALF)
{
    if (!isalpha(static_cast<unsigned char>(C)))
    {
        Is_Alpha = false;
        break;
    }
}

cout << (Is_Alpha ? "YES" : "NO") << endl;


// برسی عدد بودن یک رشته
string STR_DIG = "123456";

bool Is_Digit = true;

for (char &C : STR_DIG)
{
    if (!isdigit(static_cast<unsigned int>(C)))
    {
        Is_Digit = false;
        break;
    }
}

cout << (Is_Digit ? "YES" : "NO") << endl;




// برسی وجود هم عدد و هم رشته 
string STR_DIGORALF = "123456ABHGTR321122Hl";
int COUNTER_ALFA = 0 , COUNTER_DIGIT = 0 , COUNTER_ALL = 0;

bool Is_Digit_ALFA = true;

for (char &C : STR_DIGORALF)
{

    if(isalpha(static_cast<unsigned char>(C))){
        COUNTER_ALFA++;
    }
    if(isdigit(static_cast<unsigned int>(C))){
        COUNTER_DIGIT++;
    }

    if (!isalnum(static_cast<unsigned char>(C)))
    {
        Is_Digit_ALFA = false;
        
        break;
    }
    COUNTER_ALL++;
    
}

cout
    << setw(10) << (Is_Digit_ALFA ? "YES" : "NO")
    << setw(20) << "COUNTER_ALL : "
    << setw(6)  << COUNTER_ALL
    << setw(20) << "COUNTER_ALFA : "
    << setw(6)  << COUNTER_ALFA
    << setw(20) << "COUNTER_DIGIT : "
    << setw(6)  << COUNTER_DIGIT
    << endl;
PRINT();


//------------------------------------------کپی کردن رشته---------------------------------------------

    string First_Name_3 = "Ayin";
    string Last_Name_3 = "Mannani";

    First_Name_3.append(" ");
    First_Name_3.append(Last_Name_3);

    cout << "FullName : " << First_Name_3 << endl;

    char F_Name_1[] = "Ayin";
    char L_Name_1[] = "Mannani";

    char F_Name_2[] = "Ayin";
    char L_Name_2[] = "Mannani";

    char F_Name_3[] = "Ayin";
    char L_Name_3[] = " Mannani";


    char F_Name_4[] = "Ayin";
    char L_Name_4[] = " Mannani";


    char F_Name_5[] = "Ayi";
    char L_Name_5[] = "Ayin";


    char F_Name_6[] = "Ayin";
    char L_Name_6[] = "Mannani";

    strcpy(F_Name_1, L_Name_1); // کارکتر دوم روی اول کپی میشود
    strncpy(F_Name_2, L_Name_2,2); 
    strcat(F_Name_3, L_Name_3); 
    strncat(F_Name_4, L_Name_4,3); 


    cout << "FullName : " << F_Name_1 << endl;
    cout << "FullName : " << F_Name_2 << endl;
    cout << "FullName : " << F_Name_3 << endl;
    cout << "FullName : " << F_Name_4 << endl;


    /**
     *  اگر با هم برابر باشن = 0
     *  اگر اولی از دومی بزرگتر باشه = 1
     *  اگر دومی از اولی بزرگتر باشه = -1
     */

    cout << "CMP : " << strcmp(F_Name_5, L_Name_5) << endl; // اگر 1 بده یعنی با هم برابر نیستن
    cout << "CMPN : " << strncmp(F_Name_6, L_Name_6,4) << endl; // اگر 1 بده یعنی با هم برابر نیستن

PRINT();
//--------------------------------------------پدا کردن یک رشته و زیر رشته--------------------------------------------------

    char Message_4[] = "This is My Message";
    char Message_5[] = "This is My Message";
    char *P;
    char *P_1;
    char *P_2;
    // کارکتر رو پیدا میکنه و به بعدش رو بهشت میده
    P = strchr(Message_4, 'M');
    P_2 = strstr(Message_5, "Me");
    P_1 = strrchr(Message_5, 'M');

    cout << P << endl;
    cout << P_2 << endl;
    cout << P_1 << endl;

PRINT();

//--------------------------------------------------------------------------------

char STR_7[] = "This is My Picture";

// cout << strtok(STR_7, " ") << endl;
// cout << strtok(STR_7, "is") << endl;

char *PO;
PO = strtok(STR_7, " ");
int CO = 0;

do {
    ++CO;
    cout << PO << endl;
    PO = strtok(nullptr, " ");

} while (PO);

cout << "Number Token : " << CO << endl << endl;

//-------------------------------------------------------
string STR_8 = "This is My Message";

stringstream SS(STR_8);
string TOKEN;
int COUNTER_STR_8 = 0;

while (SS >> TOKEN)
{
    ++COUNTER_STR_8;
    cout << TOKEN << endl;
}
cout << "Number Token : " << COUNTER_STR_8 << endl << endl;

PRINT();

//---------------------------------------------------------------------------------------------------------------

    char CH_1[] = "123456HG123";
    char *PO_1;
    long int X_1;

    X_1 = strtol(CH_1, &PO_1, 10);

    cout << "X_1 : " << X_1 << endl;



    char CH_2[] = "12.3HG123";
    char *PO_2;
    double X_2;

    X_2 = strtod(CH_2, &PO_2);

    cout << "X_2 : " << X_2 << endl;

PRINT();


//----------------------------------------------------------------------------------
const char *S_1 = "Ayin";
const char *S_2 = "AyinMannani";

cout << strspn(S_1, S_2) << endl;
cout << strcspn(S_1, S_2) << endl;
return 0;
}