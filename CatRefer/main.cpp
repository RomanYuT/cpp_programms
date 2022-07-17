#include <iostream>
using namespace std;

class cat  //объявление класса
{
public:
    cat();
    cat(cat&);
    ~cat();

};

 cat::cat()
{
    cout<<"cat costruct"<<"\n";
}

 cat::cat(cat&)
{
    cout<<"cat copy costruct"<<"\n";
}

cat func1(cat thecat);
cat func2(cat *thecat);

cat::~cat()
{
    cout<<"cat destruct"<<"\n";
}
//{
//    std::cout<<"closing a cat"<<"\n";
//}

int main()
{
    cat friski;
    func1(friski);
            func2(&friski);
//


    return 0;
};

cat func1(cat thecat)
{
    cout<<"func1 "<<"\n";
    return thecat;
};

cat func2(cat *thecat)
{
    cout<<"func2 "<<"\n *thecat:"<<thecat<<"\n";
    return *thecat;
};
