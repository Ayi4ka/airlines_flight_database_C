#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

#pragma once
ref class Header
{

};

struct fle     // ������ 
{
    string number; //  ����� ����� 
    string firstpoint; // ����� �����������
    string secondpoint; // ����� ���������� 
    string time; // ����� � ����
    string type; // ��� ��������
    string price; // ��������� ������
    fle* next; // ��������� �� ��������� ������
};

class begginer
{
private:
    fle* head; // ��������� �� ��������� ������� � ������

public:
    begginer()    // ����������� (�����, ������� ���������� ��� �������� ���������� ������)
    {
        head = NULL;  
    }

    // ������
   
    void addElement(string nu, string fi, string se, string ti, string ty, string pri);   // �������� ������ 
    void editElement(string hnu, string nu, string fi, string se, string ti, string ty, string pri); // �������� ������
    std::vector<std::vector<string>> begginer::dop(string sese, int pripri); // �������������� ������� 
    bool doesElExists(string nu); // ��������, ���� �� ������� � ������� ����� � ������
    void deleteElement(string nu);   // ������� ������
    std::vector<std::vector<string>> toArrayo();
    int count(); // ���������� ���������

};
