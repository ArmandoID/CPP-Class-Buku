#include <iostream>
#include <string>

using namespace std;

class Buku {
    protected:
        string judul, pengarang;
        int tahunTerbit;
    public:
        Buku(string judul, string pengarang, int tahunTerbit) {
            this->judul = judul;
            this->pengarang = pengarang;
            this->tahunTerbit = tahunTerbit;
        }

        void tampilkanInfo() {
            cout << "\n📖 Informasi Buku 📖\n";
            cout << "Judul Buku: " << judul << '\n';
            cout << "Nama Pengarang: " << pengarang << '\n';
            cout << "Tahun Terbit: " << tahunTerbit << endl;
        }
};

int main() {
    string judul, pengarang;
    int tahunTerbit;

    cout << "Masukkan judul buku: ";
    getline(cin, judul);

    cout << "Masukkan nama pengarang: ";
    getline(cin, pengarang);

    cout << "Masukkan tahun terbit: ";
    cin >> tahunTerbit;

    Buku buku1(judul, pengarang, tahunTerbit);
    buku1.tampilkanInfo();
    
    return 0;
}