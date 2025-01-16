/*
    Решение задач по системному программированию
    1 задание - одна процедура task<номер блока>_<номер задания>()
*/

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


double to_radians(double x) {
    //Переводит градусы в радианы
    return x * (M_PI / 180);
}

void task1_1() {
    //Ввод x
    std::cout << "Задание 1:\nВведите x: ";
    double x;
    std::cin >> x;

    //Вычисление
    x = (10 * sin(x)) + abs(pow(x, 4) - pow(x, 5));
    std::cout << x;
}

void task2_1() {
    //Ввод x
    std::cout << "Задание 1:\nВведите площадь квадрата: ";
    double x;
    std::cin >> x;

    //Вычисление
    x = sqrt(x) * 4;
    std::cout << "Периметр квадрата = " << x;
}

void task2_2() {
    //Ввод x
    std::cout << "Задание 1:\nВведите периметр равностороннего треугольника: ";
    double x;
    std::cin >> x;

    //Вычисление
    x /= 3;
    x = (x * x * sqrt(3)) / 4;
    std::cout << "Площадь квадрата = " << x;
}

void task2_3() {
    //Инициализация координат
    double a, b, c, d;
    cout << "Введите координаты первой точки:\n";
    cin >> a >> b;
    cout << "Введите координаты второй точки:\n";
    cin >> c >> d;

    //Вычисление
    double distance = sqrt(pow(a - c, 2) + pow(b - d, 2));
    cout << "Расстояние между точками: " << distance << endl;
}

void task2_4() {
    //Инициализация
    double a, b;
    cout << "Введите два числа:\n";
    cin >> a >> b;
    
    //Вычисление
    double mid = (pow(a, 3) + pow(b, 3)) / 2;
    cout << "Среднее арифметическое кубов двух чисел: " << mid << endl;
}

void task2_5() {
    //Инициализация
    double a, b;
    cout << "Введите два числа:\n";
    cin >> a >> b;

    //Вычисление
    double mid = sqrt(abs(a) * abs(b));
    cout << "Среднее геометрическое кубов двух чисел: " << mid << endl;
}

void task2_6() {
    //Инициализация
    double a, b;
    cout << "Введите два катета:\n";
    cin >> a >> b;

    //Вычисление
    double hypo = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Гипотенуза двух катетов: " << hypo << endl;
}

void task2_7() {
    //Инициализация
    double a, b;
    cout << "Введите два катета:\n";
    cin >> a >> b;

    //Вычисление
    double s = a * b / 2;
    cout << "Площадь прямоугольного треугольника: " << s << endl;
}

void task2_8() {
    //Инициализация
    double a, b;
    cout << "Введите два катета:\n";
    cin >> a >> b;

    //Вычисление
    double hypo = sqrt(pow(a, 2) + pow(b, 2));
    double p = a + b + hypo;
    cout << "Периметр прямоугольного треугольника: " << p << endl;
}

void task2_9() {
    //Инициализация
    double s;
    cout << "Введите площадь полной поверхности куба: ";
    cin >> s;

    //Вычисление
    double a = sqrt(s / 6);
    cout << "Ребро куба = " << a << endl;
}

void task2_10() {
    //Инициализация
    double v;
    cout << "Введите объём куба: ";
    cin >> v;

    //Вычисление
    double a = cbrt(v);
    cout << "Ребро куба = " << a << endl;
}

void task2_11() {

    //Инициализация координат
    double ax, bx, cx, ay, by, cy;
    cout << "Введите координаты первой точки:\n";
    cin >> ax >> ay;
    cout << "Введите координаты второй точки:\n";
    cin >> bx >> by;
    cout << "Введите координаты третьей точки:\n";
    cin >> cx >> cy;

    //Вычисление сторон
    double distance1 = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    double distance2 = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double distance3 = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

   // Вычисление периметра
    double p = distance1 + distance2 + distance3;
    cout << "Периметр треугольника = " << p << endl;
}

void task2_12() {

    //Инициализация координат
    double ax, bx, cx, ay, by, cy;
    cout << "Введите координаты первой точки:\n";
    cin >> ax >> ay;
    cout << "Введите координаты второй точки:\n";
    cin >> bx >> by;
    cout << "Введите координаты третьей точки:\n";
    cin >> cx >> cy;

    //Вычисление сторон
    double distance1 = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
    double distance2 = sqrt(pow(bx - cx, 2) + pow(by - cy, 2));
    double distance3 = sqrt(pow(ax - cx, 2) + pow(ay - cy, 2));

    //Вычисление периметра
    double p = (distance1 + distance2 + distance3)/2;
    double s = sqrt(p * (p - distance1) * (p - distance2) * (p - distance3));
    cout << "Площадь треугольника = " << s << endl;
}

void task2_13() {

    //Инициализация
    double l;
    cout << "Введите длину окружности:\n";
    cin >> l;

    //Вычисление радиуса
    double r = l / M_PI / 2;
    cout << "Радиус окружности = " << r << endl;
}

void task2_14() {

    //Инициализация
    double s;
    cout << "Введите длину окружности:\n";
    cin >> s;

    //Вычисление радиуса
    double r = sqrt(s) / M_PI;
    cout << "Радиус окружности = " << r << endl;
}

void task2_15() {

    //Инициализация
    double a, b, angle;
    cout << "Введите длину первого основания трапеции:\n";
    cin >> a;
    cout << "Введите длину второго основания трапеции:\n";
    cin >> b;
    cout << "Введите угол трапеции при большем основании в градусах:\n";
    cin >> angle;

    //Вычисление площади
    double s = (abs(a * a - b * b) * tan(to_radians(angle))) / 2;
    cout << "Площадь равнобедренной трапеции = " << s << endl;
}

void task2_16() {

    //Инициализация
    double a, b;
    cout << "Введите внешний радиус кольца:\n";
    cin >> a;
    cout << "Введите внутренний радиус кольца:\n";
    cin >> b;

    //Вычисление площади
    double s = M_PI * abs(a * a - b * b);
    cout << "Площадь кольца = " << s << endl;
}

void task2_17() {

    //Инициализация
    double a;
    cout << "Введите сторону равностороннего треугольника:\n";
    cin >> a;

    //Вычисление площади
    double r = sqrt(3) * a / 6;
    cout << "Радиус окружности, вписанной в треугольник = " << r << endl;
}

void task2_18() {

    //Инициализация
    double a;
    cout << "Введите сторону равностороннего треугольника:\n";
    cin >> a;

    //Вычисление площади
    double r = a / sqrt(3);
    cout << "Радиус окружности, описанной вокруг треугольника = " << r << endl;
}

void task2_19() {

    //Инициализация
    double a, diff, n;
    cout << "Введите первый член арифметической прогрессии:\n";
    cin >> a;
    cout << "Введите разность членов арифметической прогрессии:\n";
    cin >> diff;
    cout << "Введите число членов арифметической прогрессии:\n";
    cin >> n;

    //Вычисление суммы
    double s = a * n + diff * ((n - 1) * n / 2);
    cout << "Сумма первых " << n << " членов арифметической прогрессии = " << s << endl;
}

void task2_20() {

    //Инициализация
    double a, diff, n;
    cout << "Введите первый член геометрической прогрессии:\n";
    cin >> a;
    cout << "Введите знаменатель членов геометрической прогрессии:\n";
    cin >> diff;
    cout << "Введите число членов геометрической прогрессии:\n";
    cin >> n;

    //Вычисление суммы
    double s = (a * (1 - pow(diff, n))) / (1 - diff);
    cout << "Сумма первых " << n << " членов геометрической прогрессии = " << s << endl;
}

int main()
{
    setlocale(LC_ALL, "rus"); //задаем кодировку

   
    /*cout << "Блок I\n";
    task1_1();*/


    cout << "Блок II\n";
    task2_1();
    task2_2();
    task2_3();
    task2_4();
    task2_5();
    task2_6();
    task2_7();
    task2_8();
    task2_9();
    task2_10();
    task2_11();
    task2_12();
    task2_13();
    task2_14();
    task2_15();
    task2_16();
    task2_17();
    task2_18();
    task2_19();
    task2_20();

    //cout << "Блок III\n";


    system("pause");
}