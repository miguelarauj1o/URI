#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int size, tmp, XX;

    while(cin >> size && size != 0)
    {
        int matrix[size][size];

        for(int k = 0 ; k < size ; ++k)
        {
            tmp = 0;
            for (int i = k , j = 0; i >= 0; --i, ++j)
            {
                if(k % 2 == 0)
                {
                    if(i >= (k/2)){
                        tmp++;
                    }else{
                        tmp--;
                    }
                }else{
                    if(i > j)
                        tmp++;
                    if(j > i+1)
                        tmp--;

                }

                matrix[i][j] = tmp;
            }
        }

        for(int k = size-1; k > 0; --k)
        {
            tmp = 0;
            for(int i = size-1, j = k; j < size; --i, ++j)
            {
                if(i >= j)
                    tmp++;
                if(j > i+1)
                    tmp--;

                matrix[i][j] = tmp;
            }
        }

        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                if(j<size-1){
                    cout << right << setw(3) << setfill(' ') << matrix[i][j] << " ";
                }else{
                    cout << right << setw(3) << setfill(' ') << matrix[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
