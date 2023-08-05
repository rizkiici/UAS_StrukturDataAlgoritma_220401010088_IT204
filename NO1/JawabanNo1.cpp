#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    string tmp;
    int i, k, j, jumlah, pilihan;

    cout << "Masukkan Jumlah Nama: ";
    cin >> jumlah;

    string *data = new string[jumlah];

    for (i = 0; i < jumlah; i++)
    {
        cout << "Masukkan Nama ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nPilih Tipe Sorting: \n"
         << "1.Ascending\n"
         << "2.Descending\n\n"
         << "Pilihan: ";
    cin >> pilihan;

    cout << "\nData Sebelum Diurutkan";
    for (i = 0; i < jumlah; i++)
    {
        cout << "\nNama ke-" << i + 1 << " = " << data[i];
    }

    switch (pilihan)
    {
    case 1:
        cout << "\n\nAnda memilih Ascending";
            for (j = 0; j < jumlah; j++)
            {
                for (k = j + 1; k < jumlah; k++)
                {
                    if (data[j] > data[k])
                    {
                        tmp = data[j];
                        data[j] = data[k];
                        data[k] = tmp;
                    }
                }
            }
        break;
    case 2:
        cout << "\n\nAnda memilih Descending";
            for (j = 0; j < jumlah; j++)
            {
                for (k = j + 1; k < jumlah; k++)
                {
                    if (data[j] < data[k])
                    {
                        tmp = data[j];
                        data[j] = data[k];
                        data[k] = tmp;
                    }
                }
            }
        break;
    }

    cout << "\n\nData Setelah Diurutkan: \n";
    for (int i = 0; i < jumlah; i++)
    {
        cout << "Data ke-" << i + 1 << ": " << data[i] << "\n";
    }
    getch();
}
