#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello  ";
    int a,b ; // объявление двух переменных a и b целого типа данных.
    cout<<"введите числa:";
    cin>>a>>b ; // пользователь присваивает переменным a и b какое-либо значение.
    int c = a + b ; // новой переменной c присваиваем значение суммы введенных пользователем данных.
    cout<<"ответ:"; // вывод ответа.
    cout<<c;
    return 0;
}
