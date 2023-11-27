#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

struct Not
{
    string baslik;
    string icerik;
    string tarih;
};

void notEkle(vector<Not> &notlar) {
    Not yeniNOT;
    cout << "Notun basligini girin: " << endl;
    getline(cin, yeniNOT.baslik);

    cout << "Notun icerigini girin: " << endl;
    getline(cin, yeniNOT.icerik);
    
    cout << "Notun tarihini girin: " << endl;
    getline(cin, yeniNOT.tarih);

    notlar.push_back(yeniNOT);
    cout << "Yeni notunuz eklendi" << endl;
}


void notlarıGörüntüle(const vector<Not> &notlar)
{
    if(notlar.empty())
    {
        cout << "Notlar bulunamadi." << endl;
        return;
    }
    for (const Not &note : notlar)
    {
        cout << "Baslik: " << note.baslik << endl;
        cout << "Icerik: " << note.icerik << endl;
        cout << "Tarih: " << note.tarih << endl;
        cout << "-------------------" << endl;

    }
        
}

//void dosyayıKaydet(){}




int main()
{
    vector<Not> notlar;

    cout << "1. NOT EKLE" << endl;
    cout << "2. NOTLARI GORUNTULE" << endl;
    cout << "3. CIKIS" << endl;
    do
    {
        int secim;
        cout << "Seciminizi yapiniz: ";
        cin >> secim;
        cin.ignore();           // Bir önceki girişin sonlandırılması için


        switch (secim)
        {
        case 1:
            notEkle(notlar);
            break;
        case 2:
            notlarıGörüntüle(notlar);
            break;
        default:
            cout << "Gecersiz secim. Tekrar deneyin." << endl;
            break;
        }
    } while (true);
    
}