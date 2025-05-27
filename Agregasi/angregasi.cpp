#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main() {
    ibu* VarIbu = new ibu("dini");
    ibu* VarIbu2 = new ibu("novi");
    anak* VarAnak1 = new anak("tono");
    anak* VarAnak2 = new anak("rini");
    anak* VarAnak3 = new anak("dewi");

    VarIbu->tambahAnak(VarAnak1);
    VarIbu->tambahAnak(VarAnak2);
    VarIbu2->tambahAnak(VarAnak3);
    VarIbu2->tambahAnak(VarAnak1);

    VarIbu->cetakAnak();
    VarIbu2->cetakAnak();

    delete VarIbu;
    delete VarIbu2;
    delete VarAnak1;
    delete VarAnak2;
    delete VarAnak3;
}