#include <cstdlib>
#include <iostream>
using namespace std;

class Matdis
{
public:
    int fak(int);
    void pilih();
    void permutasi();
    void kombinasi();

private:
    int q[100];
    int opsi;
} z;
int Matdis::fak(int nilai)
{
    if (nilai > 1)
        return nilai * fak(nilai - 1);
    else
        return 1;
}
void Matdis::pilih()
{
    cout << "1.Permutasi" << endl;
    cout << "2.kombinasi" << endl;
    cout << "Pilihan anda : ";
    cin >> opsi;
    if (opsi == 1)
    {
        permutasi();
    }
    else if (opsi == 2)
    {
        kombinasi();
    }
}
void Matdis::permutasi()
{
    system("CLS");
    int n, N, k, K, p;
    cout << "Masukan nilai n = ";
    cin >> n;
    cout << "Masukan nilai k = ";
    cin >> k;
    if (k > n)
    {
        cout << "\n Nilai k harus kurang dari n";
        permutasi();
    }
    p = n - k;
    N = fak(n);
    K = fak(p);
    cout << "Maka hasil permutasi : " << N / K << "\n\n";
    pilih();
}
void Matdis::kombinasi()
{
    system("CLS");
    int n, k, p, N = 1, K = 1, P = 1;
    cout << "Masukan nilai n = ";
    cin >> n;
    cout << "Masukan nilai k = ";
    cin >> k;
    if (k > n)
    {
        cout << "\n Nilai k harus kurang dari n";
        permutasi();
    }
    p = n - k;
    N = fak(n);
    K = fak(k);
    P = fak(p);
    cout << "Maka hasil permutasi : " << N / (K * P) << "\n\n";
    pilih();
}
int main()
{
    z.pilih();
    system("pause");
    return EXIT_SUCCESS;
}