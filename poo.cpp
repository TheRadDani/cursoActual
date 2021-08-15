#include<string>
#include<list>
#include<iostream>
#include<stdlib.h>
#include "suma.h"
#include "suma.c"
using namespace std;
class YouTube
{
private:
    string categoria;
    int counter;
    list<string> Subtitles;
public:
    YouTube(string _categoria)
    {
        categoria = _categoria;
        counter=0;
    }
    void mostrar()
    {
        cout<<categoria<<endl;
        cout<<counter<<endl;
        for(string subtitles:Subtitles)
        {
            cout<<subtitles<<endl;
        }
    }
    ~YouTube();//desturctor
    void inc_counter()
    {
        counter++;
    }
    void sub_counter()
    {
        if(counter>0) counter--;
        else if(counter<=0){}
    }
    void video(string title)
    {
        Subtitles.push_back(title);
    }
};
/*YouTube::YouTube()
{
}*/
/*YouTube::setterYt()
{

}*/
YouTube::~YouTube(){}
main(void)
{
    YouTube y1("pluma");
    y1.sub_counter();
    /*y1.Subtitles={"_Hello","bye"};
    y1.Subtitles.push_back("C++ for begginers");*/
    cout<<"Ingrese la cantidad de nuevos suscriptores: ";
    int veces;
    cin>>veces;
    for(int i=0;i<veces;i++)
    {
        y1.inc_counter();
    }
    y1.sub_counter();
    y1.video("hi");
    y1.mostrar();
    y1.~YouTube();
    int a=5,b=6;
    cout<<suma(a,b)<<endl;
    return 0;
}
