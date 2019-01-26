#include<iostream>


using namespace std;

class Eshop
{
  public:
    string produkty[5]={"rezystor","trazystor","diody","kondensator","cewka"};
    double cena[5]={70,90,35,63,17};
    int ilosc[5]={0};

    Eshop(){
        cout<<"Witaj w sklepie eklektronicznym!"<<endl<<endl;
        wyswietl_produkty();
        zakupy();
        pokaz_koszyk();
        koszt();

        cout<<"Dziekujemy za zakupy w naszym sklepie."<<endl;
    }

    void wyswietl_produkty()
    {
        cout<<"Lista produktow: "<<endl;
        for(int i=0;i<(sizeof(produkty)/sizeof(string));i++)
        {
            cout<<i+1<<" "<<produkty[i]<<" - cena produktu: "<<cena[i]<<endl;
        }
    }

    void zakupy()
    {
        int n, il;
        bool flag=true;
        while(flag)
        {
            cout<<"Podaj numer wybranego produktu i jego ilosc. \nPodaj '0' aby zakonczyc zakupy w sklepie"<<endl;
            cin>>n>>il;
            if(n==0)
            {

                //cout<<"Dziekujemy za zakupy w naszym sklepie."<<endl;
                flag=false;
            }
            else if((n>0) && (n<=5))
            {
                ilosc[n-1]=il;
            }
            else
            {
                cout<<"Podany produkt nie istnieje."<<endl;
            }
        }
    }

    void pokaz_koszyk()
    {
        cout<<"Twoje zamowienie: "<<endl;
        for(int i=0;i<sizeof(produkty)/sizeof(string);i++){
            if (cena[i]!=0)
            {
                cout<<"Nazwa produktu: "<<produkty[i]<<"\nIlosc w koszyku: "<<ilosc[i]<<endl<<endl;
            }
        }
    }

    void koszt()
    {
        int sum=0;
        cout<<"Koszt zamowienia: ";

        for(int i=0;i<sizeof(produkty)/sizeof(string);i++){
            if(ilosc[i]!=0)
            {
                sum+=ilosc[i]*cena[i];
            }
        };

        cout<<sum<<"zl.";

    }



};


int main()
{
    Eshop eshop;
    cout<<endl;
    /*wyswietl_produkty();
    zakupy();
    pokaz_koszyk();
    koszt() wyswietl_produkty();
        zakupy();
        pokaz_koszyk();
        koszt();;
    */

};
