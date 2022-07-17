#include <iostream>
#include <limits>

// прога для обмена внешних переменных через ссылки внутри ф-ции
using namespace std;
short factor(int n, int* square);   // так можно возврадащать кучу переменных через указатель и ссылку
void obmen(int &rx, int &); // но только через указатели лучше выглядит и ф-ция инкапсулирована


int main(int argc, char *argv[])
{
    int a=99,b,c, s=77, n=9;
    long l=1;
    unsigned u=3;

    int &ra=a;
     cout<<"\n"<<ra<<"\n";
     cout<<"\n  предел типа:"<<numeric_limits<short>::min()  <<"\n";// полезная ф-ция для параметров разных типов
       cout<<"\n"<<a<<"\t"<<b <<"\n";
     obmen(a,b);
     cout<<"\n"<<a<<"\t"<<b <<"\n";

     int err=factor(n, &s);
     cout<<"\n factor"<<err<<"\t" <<s;









    return 0;
}

void obmen(int &rx, int &ry)
{
    int t =rx;
    rx=ry;
    ry=t;
}

short factor(int n, int* square)// при объявлении указателя в точисле в объявлении и заголовке ф-ции все равно где  стоит звезда: int* s, int *s, int *s
{
    *square=n*n;
    return 0;
};
