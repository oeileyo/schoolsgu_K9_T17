//Записи. Задача 17
//
//Дан список сотрудников учреждения. В каждой строке списка содержится информация об имени, фамилии, отчестве, годе рождения, годе принятия на работу, должности, стаже, зарплате. Необходимо сотрудникам, у которых зарплата ниже 1200 увеличить зарплату на 500.
//
//Формат входных данных
//В первой строке входного файла находится число n
//(1≤n≤100
// ). Далее следуют n
//строк списка. Каждая строка содержит имя, фамилию, отчество, год рождения(неотрицательное число не превосходящее год принятия на работу), год принятия на работу(неотрицательное число не превосходящее 10000), должность, стаж(неотрицательное число не превосходящее 10000), зарплату(неотрицательное число не превосходящее 100000).
//
//Формат выходных данных
//В выходной файл выведите n
//- количество сотрудников в списке. В следующих n
//строках содержатся описания сотрудников в том же формате, что и во входном файле с измененной зарплатой согласно требованиям задачи.
//
//Примеры:
//Вход
//2
//michael troelsen orland 1987 2006 racer 2 1000
//paul vandeler krimson 1955 2001 manager 12 20000
//Выход
//2
//michael troelsen orland 1987 2006 racer 2 1500
//paul vandeler krimson 1955 2001 manager 12 20000

#include <iostream>
#include <fstream>

using namespace std;
struct Employee
{
    string year;
    string year2;
    string name;
    string name2;
    string name3;
    string pos;
    string exp;
    int salary;
    void checkSalary()
    {
        if (salary < 1200) salary += 500;
    }
    string toString()
    {
        return name+" "+name2+" "+name3+" "+year+" "+year2+" "+pos+" "+exp+" "+to_string(salary);
    }
};

int main()
{
    ifstream infile ("/Users/Anastasia/CLionProjects/schoolsgu-Записи-17/input.txt");
    ofstream outfile ("/Users/Anastasia/CLionProjects/schoolsgu-Записи-17/output.txt");

    int N;
    infile >> N;
    Employee emp;

    outfile << N << endl;
    for (int i = 0; i < N; i++)
    {
        infile >> emp.name >> emp.name2 >> emp.name3 >> emp.year >> emp.year2 >> emp.pos >> emp.exp >> emp.salary;
        emp.checkSalary();
        outfile << emp.toString() << endl;
    }

    return 0;
}
