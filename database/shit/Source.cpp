#include "Header.h"
#include <string>
#include <vector>

void begginer::addElement(string nu, string fi, string se, string ti, string ty, string pri)
{
    fle* newfle = new fle;     // Создаём экземпляр записи

    fle* temp = new fle;        // временный указатель для нахождения конеца списка
    temp = head;                  

    newfle->number = nu;                // Запись
    newfle->firstpoint = fi;
    newfle->secondpoint = se;
    newfle->time = ti;
    newfle->type = ty;
    newfle->price = pri;

    if (temp == NULL)              // Проверк нахождения в конце списка 
    {
        newfle->next = NULL;
        head = newfle;
        return;                 

    }

    
    while (temp->next != NULL) // Листаем пока не найдем конечную запись 
    {
        temp = temp->next;        

    }
    newfle->next = NULL;         // Ставим указатель NULL на новой записи
    temp->next = newfle;         // Ставим на прошлой записи указатель на новую

}
std::vector<std::vector<string>> begginer::toArrayo()
{
    int n = count();
    int i = 0;
    std::vector<std::vector<string>> vec(n, vector<string>(6));

    fle* search = new fle;    // Временный указатель 
    search = head;              

    while (search != NULL)       // Листаем до последней записи списка
    {
        vec[i][0] = search->number;
        vec[i][1] = search->firstpoint;
        vec[i][2] = search->secondpoint;
        vec[i][3] = search->time;
        vec[i][4] = search->type;
        vec[i][5] = search->price;
        i++;
        search = search->next;
    }

    return vec;
}
std::vector<std::vector<string>> begginer::dop(string sese, int pripri) //Доп задание
//Необходимо вывести данные о рейсах которые направляются в одно место, и ценник меньше, чем указанное нами число
{
    fle* search = new fle;    
    search = head;             

    int count = 0;

    while (search != NULL)       // Листаем до конечного элемента
    {
        if (((std::stoi(search->price) < pripri)) & ((std::string(search->secondpoint) == sese)))
        {
            count++; // Считаем количество правильных вариантов 
        }
        search = search->next;
    }

    int i = 0;
    std::vector<std::vector<string>> vec(count, vector<string>(6));

    search = head;             

    while (search != NULL)       // Листаем проверяем записываем
    {
        if (((std::stoi(search->price) < pripri)) & ((std::string(search->secondpoint) == sese)))
        {
            vec[i][0] = search->number;
            vec[i][1] = search->firstpoint;
            vec[i][2] = search->secondpoint;
            vec[i][3] = search->time;
            vec[i][4] = search->type;
            vec[i][5] = search->price;
            i++;
        }
        search = search->next;
    }

    return vec;
}
bool begginer::doesElExists(string nu) // Поиск записи с нужным номером рейса
{
    fle* search = new fle;    
    search = head;              

    while (search != NULL)       // Листаем до конца
    {
        if (search->number == nu)   // Равен ли номер рейса тому которое мы ищем 
        {
            return true;  // Равен

        }

        search = search->next; // Переходим к следующему
    }

    return false;
}
void begginer::editElement(string hnu, string nu, string fi, string se, string ti, string ty, string pri) // Изменение записи
{
    fle* search = new fle;    
    search = head;              

    while (search != NULL)       // Листаем до конца
    {
        if (search->number == hnu)   // Если мы нашли запись с нужным нам номером рейса, то 
        {
            search->number = nu;                // Записываем данные в поля
            search->firstpoint = fi;
            search->secondpoint = se;
            search->time = ti;
            search->type = ty;
            search->price = pri;
            return;                      

        }

        search = search->next; // Если не нашли, листаем дальше
    }

    
}

int begginer::count() //счетчик
{
    fle* search = new fle;    
    search = head;              
    int count = 0;

    while (search != NULL)       // Листаем до конца списка и считаем сколько элементов списка
    {
        count++;
        search = search->next;
    }

    return count;
}

void begginer::deleteElement(string nu) // Удаление записи
{
    fle* delite;  // Указатель для того, чтобы найти нужную запись
    delite = head;   

    if (delite == NULL)   // Проверяем есть ли в списке что-то
    {
        return;     // если нет то просто выходим

    }

    if (delite->number == nu)    // Если первая запись та которую мы ищем 
    {
        head = delite->next; // то меняем начальное значение на следующее 
        return; // И выходим
    }

    if (delite->next == NULL) // Проверка не последняя ли эта запись
    {
        return; 
    }

    while (delite->next != NULL) // Листаем, ищем нужную запись
    {
        if (delite->next->number == nu) // Если нашли в записи указатель на нужную запись 
        {
            delite->next = delite->next->next; // Меняем места указателей
            return; 

        }

        delite = delite->next; // Листаем дальше

    }

   

}
