//karena menggunakan looping dan cout
#include <iostream>

//untuk mempersingkat penulisan
using namespace std;

//fungsi utama
int main()
{
    //elemen yang akan diurutkan
    int a[5] = {2, 4, 5, 3, 1};

    //deklarasi variabel swap
    bool swap;

    //untuk menyimpan nilai sementara
    int b;

    //array terakhir yang akan diurutkan
    int c = 4;

    //untuk menampilkan elemen sebelum diurutkan
    cout << "Sebelum Diurutkan  : 2 4 5 3 1" << endl;

    do
    {
        swap = false;
        for(int i = 0; i <= c - 1; i++)
        {
            //(>) untuk urut ke atas, (<) untuk urut ke bawah
            if(a[i] <= a[i + 1])
            {
                //proses pengurutan elemen
                b = a[i];
                a[i] = a[i + 1];
                a[i + 1] = b;
                swap = true;
            }
        }
    }
    while(swap);

    cout << "Setelah Diurutkan  : ";

    for(int i = 0; i <= c; i++)
    {
        //untuk menampilkan elemen setelah diurutkan
        cout << a[i] << " ";
    }
    cout << endl;
}