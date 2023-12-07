#include <iostream>
#include <vector>
using namespace std;

struct Do_vat
{
    string Ten;
    float Trong_luong, Gia_tri, Don_gia;
    int Phuong_an;
};

int chon(float trong_luong, float W)
{
    if (trong_luong <= W)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Greedy(vector<Do_vat>& dsdv, float W)
{
    for (auto& item : dsdv)
    {
        item.Phuong_an = chon(item.Trong_luong, W);
        W = W - item.Phuong_an * item.Trong_luong;
    }
}



int main()
{
    int n;
    float W;
    vector<Do_vat> dsdv;

    cout << "Nhap so do vat n = ";
    cin >> n;

    dsdv.resize(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten do vat: ";
        cin.ignore();
        getline(cin, dsdv[i].Ten);
        cout << "Nhap trong luong: ";
        cin >> dsdv[i].Trong_luong;
        cout << "Nhap gia tri: ";
        cin >> dsdv[i].Gia_tri;
        dsdv[i].Don_gia = dsdv[i].Gia_tri / dsdv[i].Trong_luong;
    }

    cout << "Nhap trong luong cua ba lo W = ";
    cin >> W;

    Greedy(dsdv, W);

    cout << "\nPhuong an chon cac do vat la:\n";
    for (const auto& item : dsdv)
    {
        if (item.Phuong_an == 1)
        {
            cout << "\"" << item.Ten << "\" with weight " << item.Trong_luong << " and value " << item.Gia_tri << " was selected." << endl;
        }
    }

    return 0;
}
