#include <iostream>
#include <iterator>
#include "Barcode.h"

using namespace std;

int main()
{
    Barcode barcode(32, 16, 16);

    std::vector<bool> barcode_result = barcode.MakeBarcode(5679, 2345, 4);
    copy(barcode_result.begin(), barcode_result.end(), ostream_iterator<bool>(cout, ""));
    
    cout << endl;

    return 0;
}
