#include <iostream>
using namespace std;

//  *  *  *  *          jyse k dhek rahe hai, ki (row=i) hai,jab i==1 hai or jaab i==row ki
//  *        *      ki value hai,similarly for coloum, tav * print ho raha hai, otherwise
//  *        *      space print ho rha hai.
//  *        *
//  *  *  *  * 

int main()
{
    int row, col;
    cin>> row>> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row)
            {
                cout << " * ";
            }
            else if (j == 1 || j == col)
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }

        cout << endl;
    }
    return 0;
}