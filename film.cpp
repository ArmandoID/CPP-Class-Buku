#include <iostream>
#include <string>

using namespace std;

class Film {
    protected:
        string judul, genre;
        int durasi;
    public:
        Film(string judul, string genre, int durasi) {
            this->judul = judul;
            this->genre = genre;
            this->durasi = durasi;
        }

        void setData() {
            cout << "Masukkan judul film: ";
            getline(cin, this->judul);
        
            cout << "Masukkan genre film: ";
            getline(cin, this->genre);
        
            cout << "Masukkan durasi film: ";
            cin >> this->durasi;
        }

        void tampilkanInfo() {
            cout << "\n🎥 Informasi Film 🎥\n";
            cout << "Judul Film: " << judul << '\n';
            cout << "Genre Film: " << genre << '\n';
            cout << "Durasi Film: " << durasi << endl;
        }
};

int main() {
    Film film1("N/A", "N/A", 0);
    film1.setData();
    film1.tampilkanInfo();

    return 0;
}