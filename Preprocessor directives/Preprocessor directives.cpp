#include <iostream>

#define MODE 1 

using namespace std;

#if defined(MODE) && MODE == 1
int add(int a, int b) 
{
    return a + b;
}
#endif

int main() 
{
     setlocale(LC_ALL, "ru");
#if !defined(MODE)
#error "Необходимо определить MODE"
#elif MODE == 0
     cout << "Работаю в режиме тренировки" <<  endl;
#elif MODE == 1
     cout << "Работаю в боевом режиме" <<  endl;
     int a, b;
     cout << "Введите число 1: ";
     cin >> a;
     cout << "Введите число 2: ";
     cin >> b;
     cout << "Результат: " << add(a, b) <<  endl;
#else
     cout << "Неизвестный режим. Завершение работы" <<  endl;
#endif
    return 0;
}