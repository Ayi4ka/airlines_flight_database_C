#include "Header.h"
#include <string>
#include <vector>

void begginer::addElement(string nu, string fi, string se, string ti, string ty, string pri)
{
    fle* newfle = new fle;     // ������ ��������� ������

    fle* temp = new fle;        // ��������� ��������� ��� ���������� ������ ������
    temp = head;                  

    newfle->number = nu;                // ������
    newfle->firstpoint = fi;
    newfle->secondpoint = se;
    newfle->time = ti;
    newfle->type = ty;
    newfle->price = pri;

    if (temp == NULL)              // ������� ���������� � ����� ������ 
    {
        newfle->next = NULL;
        head = newfle;
        return;                 

    }

    
    while (temp->next != NULL) // ������� ���� �� ������ �������� ������ 
    {
        temp = temp->next;        

    }
    newfle->next = NULL;         // ������ ��������� NULL �� ����� ������
    temp->next = newfle;         // ������ �� ������� ������ ��������� �� �����

}
std::vector<std::vector<string>> begginer::toArrayo()
{
    int n = count();
    int i = 0;
    std::vector<std::vector<string>> vec(n, vector<string>(6));

    fle* search = new fle;    // ��������� ��������� 
    search = head;              

    while (search != NULL)       // ������� �� ��������� ������ ������
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
std::vector<std::vector<string>> begginer::dop(string sese, int pripri) //��� �������
//���������� ������� ������ � ������ ������� ������������ � ���� �����, � ������ ������, ��� ��������� ���� �����
{
    fle* search = new fle;    
    search = head;             

    int count = 0;

    while (search != NULL)       // ������� �� ��������� ��������
    {
        if (((std::stoi(search->price) < pripri)) & ((std::string(search->secondpoint) == sese)))
        {
            count++; // ������� ���������� ���������� ��������� 
        }
        search = search->next;
    }

    int i = 0;
    std::vector<std::vector<string>> vec(count, vector<string>(6));

    search = head;             

    while (search != NULL)       // ������� ��������� ����������
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
bool begginer::doesElExists(string nu) // ����� ������ � ������ ������� �����
{
    fle* search = new fle;    
    search = head;              

    while (search != NULL)       // ������� �� �����
    {
        if (search->number == nu)   // ����� �� ����� ����� ���� ������� �� ���� 
        {
            return true;  // �����

        }

        search = search->next; // ��������� � ����������
    }

    return false;
}
void begginer::editElement(string hnu, string nu, string fi, string se, string ti, string ty, string pri) // ��������� ������
{
    fle* search = new fle;    
    search = head;              

    while (search != NULL)       // ������� �� �����
    {
        if (search->number == hnu)   // ���� �� ����� ������ � ������ ��� ������� �����, �� 
        {
            search->number = nu;                // ���������� ������ � ����
            search->firstpoint = fi;
            search->secondpoint = se;
            search->time = ti;
            search->type = ty;
            search->price = pri;
            return;                      

        }

        search = search->next; // ���� �� �����, ������� ������
    }

    
}

int begginer::count() //�������
{
    fle* search = new fle;    
    search = head;              
    int count = 0;

    while (search != NULL)       // ������� �� ����� ������ � ������� ������� ��������� ������
    {
        count++;
        search = search->next;
    }

    return count;
}

void begginer::deleteElement(string nu) // �������� ������
{
    fle* delite;  // ��������� ��� ����, ����� ����� ������ ������
    delite = head;   

    if (delite == NULL)   // ��������� ���� �� � ������ ���-��
    {
        return;     // ���� ��� �� ������ �������

    }

    if (delite->number == nu)    // ���� ������ ������ �� ������� �� ���� 
    {
        head = delite->next; // �� ������ ��������� �������� �� ��������� 
        return; // � �������
    }

    if (delite->next == NULL) // �������� �� ��������� �� ��� ������
    {
        return; 
    }

    while (delite->next != NULL) // �������, ���� ������ ������
    {
        if (delite->next->number == nu) // ���� ����� � ������ ��������� �� ������ ������ 
        {
            delite->next = delite->next->next; // ������ ����� ����������
            return; 

        }

        delite = delite->next; // ������� ������

    }

   

}
