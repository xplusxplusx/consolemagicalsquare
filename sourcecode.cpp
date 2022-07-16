#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "");

    //33 126
    int random_char;
    int special_char = rand() % 126 + 33;
    char spc = special_char;
    int number = 0;
    unsigned char symbols[10][10];


    cout << endl;
    cout << "\t\t\t********************" << endl;
    cout << "\t\t\t*Магический квадрат*" << endl;
    cout << "\t\t\t********************" << endl;
    cout << endl;

    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (number % 9 != 0) 
            {
                random_char = rand() % 126 + 33;
                symbols[i][j] = random_char;
                number++;
            }
            else 
            {
                symbols[i][j] = special_char;
                number++;
            }
        }
    }

    number = 0;
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            cout << number << " - " << symbols[i][j] << "\t";
            number++;
        }
        cout << endl;
        cout << endl;
    }

    cout << endl;

    cout << "Загадай число, отними от него его цифры, смотри символ под номером\n"
        << "нового числа и нажми Enter(47 -> -4 & -7 ->)... " << endl;
    cout << "------------------------------------------------------------------" << endl;
    cin.get();

    cout << "Твой символ - ' " << spc << " ' !" << " Угадал?)" << endl;
    system("pause");

    return 0;
}
