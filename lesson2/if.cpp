
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;




int main(){


    // int X;
    // cout << "Please Inter Your Number : ";
    // cin >> X;
    // if(X > 0){
    //     cout << "Positive" << endl;
    // } else{
    //     cout << "Negative" << endl;
    // }




    // cout << "---------------------------------------------------------" << endl;


    // int X1, Y1;

    // cout << "Please Inter Your X1 : ";
    //     cin >> X1;

    // cout << "Please Inter Your Y1 : ";
    //     cin >> Y1;

    // if(X1 % Y1 == 0){
    //     cout << "YES" << endl;
    // }else{
    //     cout << "NO" << endl;
    // }



    // cout << "---------------------------------------------------------" << endl;

    // int NUMBER1, NUMBER2;

    //  cout << "Please Inter Your NUMBER1 : ";
    //     cin >> NUMBER1;

    // cout << "Please Inter Your NUMBER21 : ";
    //     cin >> NUMBER2;

    // if(NUMBER1 > NUMBER2){
    //     cout << "NUMBER1 BEGGER!!!" << endl;
    // }
    // else
    // {
    //     cout << "NUMBER1 SAMLLER!!!" << endl;
    // }

    // cout << "---------------------------------------------------------" << endl;

    // int X;

    // cout << "Please Inter Your Numbers : ";
    //     cin >> X;

    // if(X == 13){
    //     cout << "Your Number Valid : "  << X << endl;
    // }
    // else
    // {
    //     cout << "Your Number Not Valid : " << X << endl;
    // }

    // int A, B, C;
    // string RESULT_STRING;

    // cout << "Please Inter Tree Numbers : ";
    //     cin >> A >> B >> C;

    // int MIN = A;
    // RESULT_STRING = "A";

    // if (MIN > B)
    // {

    //     MIN = B;
    //     RESULT_STRING = "B";
    // }
    // if (MIN > C)
    // {
    //     MIN = C;
    //     RESULT_STRING = "C";
    // }

    // cout << "YOUR MIN NUMBER : " << RESULT_STRING  << "=> "  << MIN << endl;

    //-------------------------------------------برای چیدمان از کوچک به بزرگ------------------------------------------------------

    // int X, Y, TEMP;

    // cout << "Please Inter Your Numbers : ";
    //   cin >> X >> Y;

    // if( X > Y){
    //     TEMP = X;
    //     X = Y;
    //     Y = TEMP;
    // }

    // cout << X << '\t' << Y;

    /*
        ارزیابی میانبری یا مدار کوتاه
      شده اگر شرط اول فالس بشه شرط دوم برسی نمیشه AND یک عبارتی داریم که حاصل دوشرطی هست که باهم 
      و باید دقت کنیم اثر ساید افکت را خنثی کنیم
      مثلا اکر ما شرطی برای اضافه کردن عدد اول داشتیم 
      در صورتی که هرکدوم از این شرط ها برقرار نباشد عملا شرط اضافه شدن متغیر نیز برقرا نخواهد بود

    */
    // int A, B;
    //   cin >> A >> B;

    // if(B != 0  && A != 0 && A % B == 0){
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }
//-------------------------------------شرط های تو در تو---------------------------------------------

    // int A, B;
    // cout << "Inter Your Numbers : ";
    //   cin >> A >> B;
    
    //   if(B != 0){
    //         if(A % B == 0){
    //             cout << "YES" << endl;
    //         }
    //         else{
    //             cout << "NO";
    //         }
    //   } else{
    //       cout << "Your B Number is Zero";
    //   }


    //--------------------------------------Smaller Number--------------------------------------------
    // int A, B, C;
    // cout << "Inter Your Number : ";
    //     cin >> A >> B >> C;
    
    // if( A < B){
    //     if(A < C){
    //         cout << "A : " << A << endl;
    //     }else{
    //         cout << "C : " << C << endl;
    //     }
    // }else{
    //     if (B < C){
    //         cout << "B : " << B << endl;
    //     }else{
    //         cout << "C : " << C << endl;
    //     }
    // }
//----------------------------------else if--------------------------------------------

    float SCORE;
    cout << "Please Inter Your Score : ";
        cin >> SCORE;
    
    if(SCORE >= 0 && SCORE <= 10)
        cout << "C";
    else if (SCORE > 10 && SCORE <= 15)
        cout << "B";
    else
        cout << "A";

    return 0;
}