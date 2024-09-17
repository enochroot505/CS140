#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs;
    int num = 10;
    ofs.open("data.bin", ios::out | ios::binary);
    ofs.write((char*)&num, sizeof(int));
    ofs.close();

}