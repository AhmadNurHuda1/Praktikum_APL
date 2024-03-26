#include<iostream>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

struct User {
    string nama;
    string nim;
};

struct TWS {
    struct Details {
        string nama;
    };
    Details details;
};

#define max 15
TWS tws[max];
string loop;
int posisi = 0;

bool login(int percobaan = 0) {
    User user;
    cout<< "Selamat Datang di program Pendataan list tws, mohon login terlebih dahulu"<<endl;
    cout << "Masukkan Nama: ";
    cin >> user.nama;
    cout << "Masukkan NIM: ";
    cin >> user.nim;
    if (user.nama == "AhmadNurHuda" && user.nim == "2309106108") {
        cout << "Login Berhasil!" << endl;
        cout << "Mohon Tunggu dalam 5 Detik..." << endl;
        for (int i = 5; i > 0; --i) {
            std::cout << "Countdown: " << i << " seconds remaining...\n";
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        std::cout << "Countdown Selesai!" << std::endl;
        return true;
    } else {
        percobaan++;
        cout << "Login Salah, Tersisa " << 3 - percobaan << " Lagi" << endl;
        if (percobaan < 3) {
            return login(percobaan);
        } else {
            cout << "Anda Sudah 3 kali salah login, program terpaksa berhenti" << endl;
            return false;
        }
    }
}

void display() {
    system("cls");

    if (posisi > 0) {
        cout << "Data Tersimpan" << endl;
        for (int i = 0; i < posisi; i++) {
            cout << i + 1 << ". " << tws[i].details.nama << endl;
        }
    } else {
        cout << "<-- Data Kosong -->" << endl;
    }
    cout << endl;
}

void add() {
    do {
        display();
        if (posisi < max) {
            cin.ignore();
            cout << "Tambah Data : ";
            getline(cin, tws[posisi].details.nama);
            posisi++;
            display();
            cout << "ulangi <y/t> : ";
            cin >> loop;
        } else {
            cout << "<-- memori penuh -->" << endl;
            cout << "isi t untuk kembali : ";
            cin >> loop;
        }
    } while (loop == "y");
}

void edit() {
    if (posisi == 0) {
        cout << "Data masih kosong, tidak bisa melakukan ubah data." << endl;
        return;
    }
    int y;
    do {
        display();
        cout << "ubah data ke : ";
        cin >> y;
        cin.ignore();
        cout << "ubah menjadi : ";
        getline(cin, tws[y - 1].details.nama);
        display();
        cout << "ubah lagi <y/t> : ";
        cin >> loop;
    } while (loop == "y");
}

void del() {
    if (posisi == 0) {
        cout << "Data masih kosong, tidak bisa melakukan hapus data." << endl;
        return;
    }
    int x;
    do {
        display();
        cout << "Hapus Data Ke : ";
        cin >> x;
        for (int i = x; i < posisi; i++) {
            tws[i - 1] = tws[i];
        }
        posisi--;
        display();
        cout << "hapus lagi <y/t> : ";
        cin >> loop;
    } while (loop == "y");
}

int main() {
    if (!login())
        return 0;

    int pil;
    do {
        system("cls");
        cout << "Program Pendataan List Merek TWS" << endl;
        cout << "[1] Tambah\n[2] Ubah\n[3] Hapus\n[4] Tampil\n[5] Keluar\nPilihan : ";
        cin >> pil;
        switch (pil) {
            case 1:
                add();
                break;
            case 2:
                edit();
                break;
            case 3:
                del();
                break;
            case 4:
                do {
                    display();
                    cout << "kembali <y/t> : ";
                    cin >> loop;
                } while (loop != "y");
                break;
            case 5:
                cout << "Program Diakhirkan" << endl;
                break;
            default:
                cout << "Pilih 1 - 4, Atau 5 Untuk keluar dari program!" << endl;
                break;
        }
    } while (pil != 5);
    cout << "Program Selesai !" << endl;
    return 0;
}
