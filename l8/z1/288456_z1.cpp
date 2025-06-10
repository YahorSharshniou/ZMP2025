#include <iostream>
#include <string>
using namespace std;

class Pojazd {
    protected:
        string marka;
        string model;
        int rok_produkcji;
    public:
        void ustaw(string ma, string mo, int ro)
        {
          marka = ma;
          model = mo;
          rok_produkcji = ro;
        }
        void wyswietl()
        {
            cout << "marka " << marka << ", model " << model << ", rok produkcji "<< rok_produkcji << "\n";
        }
};

class Samochod {
  private:
    int liczba_drzwi;
  public:
    void ustaw(int li)
        {
          liczba_drzwi = li;
        }
    void wyswietl() 
    {
    cout << "liczba drzwi " << liczba_drzwi << "\n";
    }
};

class Rower {
  public:
    int liczba_przerzutek;
        void ustaw(int li)
        {
          liczba_przerzutek = li;
        }
    void wyswietl() 
    {
    cout << "liczba przerzutek " << liczba_przerzutek << "\n";
    }
};

class Everything : public Rower, public Samochod, public Pojazd
{
    public:
    void ustaw(string ma, string mo, int ro, int li, int pr)
        {
          Pojazd::ustaw(ma,mo,ro);
          Samochod::ustaw(li);
          Rower::ustaw(pr);
        }
    void wyswietl() 
    {
      Pojazd::wyswietl();
      Samochod::wyswietl();
      Rower::wyswietl();
    }

};

int main(){
string mark;
string model;
int n[3];
cin >> mark;
cin >> model;
    for (int i = 0; i<3;i++)
    {
        cin >> n[i];
    }

    Everything auto1;
    auto1.ustaw(mark,model,n[0],n[1],n[2]);
    auto1.wyswietl();

    return 0;
}