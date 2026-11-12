#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi untuk menampilkan daftar menu
void tampilkanMenu() {
    cout << "========================================\n";
    cout << "           DAFTAR MENU WARUNG           \n";
    cout << "========================================\n";
    cout << "--- MAKANAN ---\n";
    cout << "1. Soto       - Rp 15.000\n";
    cout << "2. Rawon      - Rp 20.000\n";
    cout << "3. Nasi Pecel - Rp 10.000\n";
    cout << "\n--- MINUMAN ---\n";
    cout << "4. Teh        - Rp  3.000\n";
    cout << "5. Kopi       - Rp  5.000\n";
    cout << "========================================\n";
}

// Fungsi untuk menghitung subtotal berdasarkan pilihan menu dan jumlah
int hitungSubtotal(int pilihan, int jumlah) {
    int harga = 0;
    switch (pilihan) {
        case 1:
            harga = 15000;
            cout << "-> Menambahkan " << jumlah << " porsi Soto.\n";
            break;
        case 2:
            harga = 20000;
            cout << "-> Menambahkan " << jumlah << " porsi Rawon.\n";
            break;
        case 3:
            harga = 10000;
            cout << "-> Menambahkan " << jumlah << " porsi Nasi Pecel.\n";
            break;
        case 4:
            harga = 3000;
            cout << "-> Menambahkan " << jumlah << " gelas Teh.\n";
            break;
        case 5:
            harga = 5000;
            cout << "-> Menambahkan " << jumlah << " cangkir Kopi.\n";
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            return 0;
    }
    return harga * jumlah;
}

int main() {
    int pilihan, jumlah, totalHarga = 0;
    char lanjut;

    do {
        tampilkanMenu();
        
        cout << "Pilih nomor menu (1-5): ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 5) {
            cout << "Masukkan jumlah: ";
            cin >> jumlah;
            totalHarga += hitungSubtotal(pilihan, jumlah);
        } else {
            cout << "Pilihan menu tidak tersedia! Silakan coba lagi.\n";
        }

        cout << "\nApakah ingin menambah pesanan lain? (y/t): ";
        cin >> lanjut;
        cout << "\n";

    } while (lanjut == 'y' || lanjut == 'Y');

    // Menampilkan Total Pembayaran
    cout << "========================================\n";
    cout << "             STRUK PEMESANAN            \n";
    cout << "========================================\n";
    cout << "Total yang harus dibayar: Rp " << totalHarga << "\n";
    cout << "Terima kasih atas kunjungan Anda!\n";
    cout << "========================================\n";

    return 0;
}
