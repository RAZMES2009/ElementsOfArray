#include <iostream>

#include "getArr.h"

using namespace std;

int main()
{
    cout << "Введите действительное число для последовательности х1,y1,...х10,y10: " << endl;
    const short myArrSize = 10;
    double myArr[myArrSize];
    for (short i = 0; i < myArrSize; i++)
    {
        cout << 'x' << i + 1 << " ";
        myArr[i] = getMyArr();
        cout << 'y' << i + 1 << " ";
        myArr[i] *= getMyArr();
    }

    double sumArr;
    for (short i = 0; i < myArrSize; i++)
        sumArr += myArr[i];

    cout << "Сумма произведения членов x1*y1+...+x10*y10 равна " << sumArr << endl;
}
