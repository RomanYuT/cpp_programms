#include <iostream>

class cat  //объявление класса
{
public:
int *mage= new int(37);
    cat()
{
    std::cout<<"---\n"<<mage<<"\n"<<*mage<<"\n";
    mage = new int(1799) ;
    std::cout<<"---\n"<<mage<<"\n"<<*mage<<"\n";
    std::cout<<"---\n"<<this; //this - просто указатель на объект как pcat
    }
        ;
//    ~cat();
void Meow();
void setage(int);
 int  getage() const;

private:


    int weight;
};

int cat::getage() const
{
    return *mage;
}

void cat::setage(int age)
{
    *mage=age;
}

void cat::Meow()
{
     std::cout<<"myau  ";
}

//cat::~cat()
//{
//    std::cout<<"closing a cat"<<"\n";
//}

int main()
{
    int y,x=8;
    std::cout<<"out  "<<x<<"\n";
//    std::cin>>y;

// --обычная работа класса
//    cat marfa(8);
//    marfa.Meow();
//    marfa.setage(y);
//    std::cout<<"\n"; //<<marfa.mage;
//     std::cout<<"\n";
//    std::cout<<"\n";

    //сделай объект класса с помощью указателя
    cat* pcat =new cat;
    std::cout<<"\n"<<pcat<<"\t"<<"\n";
//
    std::cout<<"\n"<<pcat->mage<<"\t"<<*(pcat->mage)<<"\n"; //обращение через указатель!
     delete pcat;
    std::cout<<"\n"<<pcat;

    return 0;
};
