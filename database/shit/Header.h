#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

#pragma once
ref class Header
{

};

struct fle     // Запись 
{
    string number; //  Номер рейса 
    string firstpoint; // Пункт отправления
    string secondpoint; // Пункт назначения 
    string time; // Время в пути
    string type; // Тип самолета
    string price; // Стоимость билета
    fle* next; // Указатель на следующую запись
};

class begginer
{
private:
    fle* head; // Указатель на начальный элемент в списке

public:
    begginer()    // Конструктор (Метод, который вызывается при создании экземпляра списка)
    {
        head = NULL;  
    }

    // Методы
   
    void addElement(string nu, string fi, string se, string ti, string ty, string pri);   // Добавить запись 
    void editElement(string hnu, string nu, string fi, string se, string ti, string ty, string pri); // Изменить запись
    std::vector<std::vector<string>> begginer::dop(string sese, int pripri); // Дополнительное задание 
    bool doesElExists(string nu); // Проверка, есть ли элемент с номером рейса в записи
    void deleteElement(string nu);   // Удалить запись
    std::vector<std::vector<string>> toArrayo();
    int count(); // Количество элементов

};
