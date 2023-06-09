// InsortedSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {                                              //prosedur input
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array : ";       //input jumlah elemen
        cin >> n;                                           //memanggil inputan n

        if (n <= 20)
        {                                                   //kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 element.\n";    //menampilkan pesan berlebih
        }
    }
    cout << endl;       //membuat jarak
    cout << "======================" << endl;       //tampilan
    cout << "Masukkan Element Array" << endl;       //tampilan
    cout << "======================" << endl;       //tampilan

    for (int i = 0; i < n; i++) {                   //menggunakan perulangan untuk menampilkan
        cout << "Data ke-" << (i + 1) << ": ";
    }
}

//prosedur insertionsort
void insertsort() {
    int temp;           //variabel data temporer
    int j;              //variabel j sebagai penanda

    for (int i = 1; i < n; i++) {                   //1. lopping dengan i dimulai 1 hingga n-1
        temp = arr[i];                              //2. simpan nilai arr[i] ke variabel sementara temp

        j = i - 1;                                  //3. setting nilai j sama dengan i-1

        while (j >= 0 && arr[j] > temp) {           //4. looping while dimana nilai j lebih besar sama dengan 0 dan array[j] lebih besar dari dari temp
            arr[j + 1] - arr[j];                    //simpan arr[j] kedalam  variabel arr[j+1]
            j--;                                    // j decrement
        }

        arr[j + 1] = temp;                          //5. simpan nilai temp ke dalam arr[j+1]

        cout << endl;
        cout << "\nPass " << i << ": ";             //output ke layar
        for (int k = 0; k < n; k++) 
        {                                           //looping nilai k dimulai dari 0 hingga n-1
            cout << arr[i] << " ";                  //display output
        }
    }
}

void display() {
    cout << endl;
    cout << "Total Element Movement" << endl;
    cout << "\n=======================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "\n=======================" << endl;

    for (int j = 0; j < n; j++) {
        //looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // output ke layat
    }
    cout << endl; // output baris kosong
}


int main() {
    input();
    insertsort();
    display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
