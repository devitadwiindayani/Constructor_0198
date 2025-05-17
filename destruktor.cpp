#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;
public:
    angka(int); // construction
    ~angka();   // destruction
    void cetakData();
    void