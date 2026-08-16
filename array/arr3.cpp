#include <iostream>
#include <string>
#include <cmath>
#include <array>
#include <vector>
#include <iomanip> 
#include <algorithm>

using std::array;
using std::cin;
using std::cout;
using std::endl;
using std::size;
using std::size_t;
using std::string;
using std::vector;
using std::setw;
using std::sort;
using std::reverse;
using std::max_element;
using std::min_element;
using std::find;
using std::copy;
using std::remove;
using std::replace;
using std::fixed;
using std::setprecision;


namespace GLOBAL
{
    void PRINT() { cout << endl << "--------------------------------------------------" << endl; }
}



double MEAN(vector<int> &NUM ){
    int SUM = 0;
    
    for (int i = 0; i < size(NUM); i++){
        SUM += NUM[i];

    }
    cout << fixed << setprecision(4);

    return static_cast<double>(SUM) / size(NUM);
}




int MEDAIN(vector<int> &NUM_1){
    return NUM_1[size(NUM_1) / 2];
}


int main(){
    using GLOBAL::PRINT;

    //------------------------پیدا کردن میانگین بین ارایه------------------------
    vector<int> NUMBERS = {12, 43, 11, 2, 55, 3, 7, 65, 88, 29};
    cout << "MEAN : " << MEAN(NUMBERS) << endl;

PRINT();
    //--------------------------------پیدا کردن میانه--------------------------------------------

    vector<int> NUMBERS_1 = {5 , 1 , 1 , 8 , 3 , 4 , 2 , 9 , 10 , 7 , 6 , 21};
    sort(NUMBERS_1.begin(), NUMBERS_1.end());

    for (int i = 0; i < size(NUMBERS_1); i++) {
                cout << ((i == 0) ? "{ " : " , ") << NUMBERS_1[i] << ((i == size(NUMBERS_1) - 1) ? " }" : "") << " ";

    }

    cout <<endl  << "medain : " << MEDAIN(NUMBERS_1) << endl;
PRINT();

//-------------------------ارایه دو بعدی------------------------------

vector<vector<int>> NUMBERS_2 = {{1, 2, 3, 4}, {5, 6, 7, 8}};

for (size_t i = 0; i < size(NUMBERS_2); i++){
    for (size_t j = 0; j < size(NUMBERS_2[i]); j++){
        cout << (NUMBERS_2[i][j] == 1 ? "RESULT : " : "") << NUMBERS_2[i][j] << '\t';
    }
        
}
    return 0;
}

