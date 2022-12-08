#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    int N;

    cin >> N;
    int millions = N / 1000000;
    N = N - millions * 1000000;
    int  thousands =N / 1000;
    N = N - thousands * 1000;
    int units = N;
    cout << millions << " millions, " << thousands << " thousands, and " <<units<< endl;

    return 0;
}
