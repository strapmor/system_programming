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

int main()
{
    setlocale(LC_ALL, "rus"); //задаем кодировку

   
    //cout << "Блок I\n";


    cout << "Блок II\n";
    //task2_3();
    //task2_4();
    //task2_5();
    //task2_6();
    //task2_7();
    //task2_8();
    //task2_9();
    //task2_10();
    //task2_11();
    task2_12();


    //cout << "Блок III\n";

    system("pause");
}