// FiguresNumSides.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure
{
public:
    int get_count_sides() { return count_sides; }
    std::string get_name() { return name; };
protected:
    int count_sides = 0;    
private:
    std::string name = "Фигура";
};

class Triangle: public Figure
{
public:
    int conclusion()
    {
        count_sides = 3;
        return get_count_sides();
    }
    std::string get_name() { return name; };
private:
    std::string name = "Треугольник";
};

class Quadrilateral : public Figure
{
public:
    int conclusion()
    {
        count_sides = 4;
        return get_count_sides();
    }
    std::string get_name() { return name; }
private:
    std::string name = "Четырехугольник";
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;
    std::cout << "Количество сторон:\n";
    std::cout << figure.get_name() << ": " << figure.get_count_sides() << std::endl;
    std::cout << triangle.get_name() << ": " << triangle.conclusion() << std::endl;
    std::cout << quadrilateral.get_name() << ": " << quadrilateral.conclusion() << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
