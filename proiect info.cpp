#include <iostream>
#include <cstring>
using namespace std;
struct MASINA
{
char model[30], marca[30], culoare[10],cod[20];
int nr_locuri, hp, anul_fabricatiei;
}automobile[100];


int main()
{
int n,i,j;



int optiune;
cout<<"-------------------Optiuni--------------------------------"<<endl;
cout<<"2.Citire masini: "<<endl;
cout<<"3.Afisare masini: "<<endl;
cout<<"4.Ordonarea crescatoare a masinilor in functie de putere : "<<endl;
cout<<"5.Afisarea si identificarea masinilor dupa marca : "<<endl;
cout<<"6.Adaugarea unei masini in lista : "<<endl;
cout<<"7.Eliminarea unei masini din lista : "<<endl;
cout<<"10. Quit "<<endl<<endl;


cout<<" Alegeti operatia dorita"<<endl;
cin>>optiune;
while(optiune!=10)
{
    if(optiune>=2&&optiune<=6)
        {
            if(optiune==2)
            {
                cout<<"Cate masini sunt? "<<endl;
                cin>>n;
                ///elibereaza memorie i.e permite sa citesc un nou sir
                cin.get();

                for(i=0;i<n;i++)
                {
                cout<<"Ce marca este masina?"<<endl;
                cin.getline(automobile[i].marca,30);

                cout<<"Ce model este masina?"<<endl;
                cin.getline(automobile[i].model,30);


                cout<<"Cate locuri are masina?"<<endl;
                cin>>automobile[i].nr_locuri;


                cout<<"Ce putere are masina?"<<endl;
                cin>>automobile[i].hp;


                cout<<"Ce culoare are masina?"<<endl;
                cin.get();
                cin.getline(automobile[i].culoare,10);



                cout<<"In ce an a fost fabricata masina?"<<endl;
                cin>>automobile[i].anul_fabricatiei;


                cout<<"Care este codul masinii?"<<endl;
                cin.get();
                cin.getline(automobile[i].cod,20);


                }
            }




            if(optiune==3)
                {
                    cout<<"Afisarea masinilor din parc:"<<endl;
                    for(i=0;i<n;i++)
                    {
                        cout<<"Marca: "<<automobile[i].marca<<" ";
                        cout<<"Model: "<<automobile[i].model<<" ";
                        cout<<"Culoare: "<<automobile[i].culoare<<" ";
                        cout<<"An fabricatie: "<<automobile[i].anul_fabricatiei<<endl;
                        cout<<"-----------------------------------------------------------------------------"<<endl;


                    }
                    cout<<endl;
                }

                if(optiune==4)
                {
                    cout<<"Automobilele ordonate crescator dupa hp:"<<endl;
                    for(i=0;i<n-1;i++)
                        for(j=i+1;j<=n-1;j++)
                          if(automobile[i].hp>automobile[j].hp)
                            swap(automobile[i],automobile[j]);

                    for(i=0;i<n;i++)
                    {
                        cout<<"Marca: "<<automobile[i].marca<<" ";
                        cout<<"Model: "<<automobile[i].model<<" ";
                        cout<<"Culoare: "<<automobile[i].culoare<<" ";
                        cout<<"An fabricatie: "<<automobile[i].anul_fabricatiei<<endl;
                        cout<<"nr_cai putere: "<<automobile[i].hp<<endl;
                        cout<<"-----------------------------------------------------------------------------"<<endl;


                    }
                    cout<<endl;
                }
                if(optiune==5)
                {


                    char marca_utilizator[100];
                    int ok=0; ///pp ca nu exista nicio masina cu marca pe care o cauta utilizatorul
                    cout<<"Cititi marca dorita: "<<endl;
                    cin.get();
                    cin.getline(marca_utilizator,100);
                    for(i=0;i<n;i++)
                    {
                      if(strcmp(marca_utilizator,automobile[i].marca)==0)
                      {
                          cout<<automobile[i].model<<endl;
                          ok=1;
                      }
                    }
                    if(ok==0)
                    cout<<"nu exista niciun automobil cu marca dorita"<<endl;

                }

               if(optiune==6)
                {
                    ///Daca adaugam o masina, n=n+1;

                        cout<<"Adaugarea unei noi masini: "<<endl;
                        cin.get();

                        cout<<"Ce marca este masina?"<<endl;
                        cin.getline(automobile[n].marca,30);


                        cout<<"Ce model este masina?"<<endl;
                        ///
                        cin.getline(automobile[n].model,30);


                        cout<<"Cate locuri are masina?"<<endl;
                        cin>>automobile[n].nr_locuri;


                        cout<<"Ce putere are masina?"<<endl;
                        cin>>automobile[n].hp;


                        cout<<"Ce culoare are masina?"<<endl;
                        cin.get();
                        cin.getline(automobile[n].culoare,10);



                        cout<<"In ce an a fost fabricata masina?"<<endl;
                        cin>>automobile[n].anul_fabricatiei;


                        cout<<"Care este codul masinii?"<<endl;
                        cin.get();
                        cin.getline(automobile[n].cod,20);

                        n=n+1;

                }



        }
        else if(optiune==7)
        {

                    char cod_utilizator[100];
                    int pozitie;
                    cout<<"Stergere masina :"<<endl;
                    cout<<"Introduceti codul masinii pe care doriti sa o stergeti: "<<endl;
                    cin.get();
                    cin.getline(cod_utilizator,100);

                    for(i=0;i<n;i++)
                        if(strcmp(cod_utilizator,automobile[i].cod)==0)
                            pozitie=i;

                    ///mutam toate masinile dupa pozitie, cu o pozitie mai la stanga

                    for(i=pozitie;i<n-1;i++)
                        automobile[i]=automobile[i+1];

                    n--;




        }


else cout<<"optiunea aleasa nu exista."<<endl;

cout<<"-------------------Optiuni--------------------------------"<<endl;
cout<<"2.Citire masini: "<<endl;
cout<<"3.Afisare masini: "<<endl;
cout<<"4.Ordonarea crescatoare a masinilor in functie de putere : "<<endl;
cout<<"5.Afisarea si identificarea masinilor dupa marca : "<<endl;
cout<<"6.Adaugarea unei masini in lista : "<<endl;
cout<<"7.Eliminarea unei masini din lista : "<<endl;
cout<<"10. Quit "<<endl<<endl;
cout<<" alegeti alta optiune "<<endl;
///citim o noua optiune;
cin>>optiune;
}

    return 0;
}
