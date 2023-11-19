#include <iostream>
#include <fstream>

int main() {
    int n, z;
    std::ifstream fin("C:\\in.txt");
    fin >> n;
    int* arrone = new int[n];
    for (int i = 0; i < n; ++i) {
        fin >> arrone[i];
    }

    fin >> z;
    int* arrtwo = new int[z];
    for (int i = 0; i < z; ++i) {
        fin >> arrtwo[i];
    }
    fin.close();

    std::ofstream fout("C:\\out.txt");
    fout << z << std::endl;

    int temp = arrtwo[z - 1], temp1;
    for (int i = 0; i < z; i++) {
        temp1 = arrtwo[i];
        arrtwo[i] = temp;
        temp = temp1;
        fout << arrtwo[i] << " ";

    }


    fout << std::endl;

    fout << n << std::endl;

    for (int i = 0; i < n - 1; ++i)
    {
        fout << arrone[i + 1] << " ";
    }
    fout << arrone[0];

    fout.close();

    delete[] arrone;
    delete[] arrtwo;
    return 0;
}