#include <iostream>
#include <string>

using namespace std;

class Buku {
    protected:
        string judul;
        string pengarang;
        int tahunTerbit;
    public:
        Buku(string judul, string pengarang, int tahunTerbit) {
            this->judul = judul;
            this->pengarang = pengarang;
            this->tahunTerbit = tahunTerbit;
        }

        void tampilkanInfo() {
            cout << "Judul Buku: " << judul << '\n';
            cout << "Nama Pengarang: " << pengarang << '\n';
            cout << "Tahun Terbit: " << tahunTerbit << endl;
        }
};

int main() {
    Buku buku1("Atomic Habits", "James Clear", 2018);
    buku1.tampilkanInfo();
    
    return 0;
}