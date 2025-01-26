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
    cout << "Задание 1:\nВведите x: ";
    double x;
    cin >> x;

    //Вычисление
    x = (10 * sin(x)) + abs(pow(x, 4) - pow(x, 5));
    cout << "Ответ: " << x << endl;
}

void task1_2() {
    //Инициализация
    cout << "Задание 2:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;

    //Вычисление
    cout << "Ответ: " << ( pow(M_E, -x) - cos(to_radians(x))+sin(to_radians(2*x*y)) ) << endl;
}

void task1_3() {
    //Ввод x
    cout << "Задание 3:\nВведите x: ";
    double x;
    cin >> x;

    //Вычисление
    x = sqrt(pow(x, 4) + sqrt(abs(x + 1)));
    cout << "Ответ: " << x << endl;
}

void task1_4() {
    //Инициализация
    cout << "Задание 4:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;

    //Вычисление
    cout << "Ответ: " << ((sin(to_radians(x)) + cos(to_radians(y))) / (cos(to_radians(x)) - sin(to_radians(y)))) * tan(to_radians(x * y)) << endl;
}

void task1_5() {
    //Ввод x
    cout << "Задание 5:\nВведите x: ";
    double x;
    cin >> x;

    //Вычисление
    x = (0.125 * x + abs(sin(to_radians(x)))) / (1.5 * x * x + cos(to_radians(x)));
    cout << "Ответ: " << x << endl;
}

void task1_6() {
    //Инициализация
    cout << "Задание 6:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;

    //Вычисление
    cout << "Ответ: " << ((x + y) / (x + 1)) - ((x * y - 12) / (34 + x)) << endl;
}

void task1_7() {
    //Инициализация
    cout << "Задание 7:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;

    //Вычисление
    cout << "Ответ: " << (sin(to_radians(x)) + cos(to_radians(y))) / (cos(to_radians(x)) - sin(to_radians(y))) * (tan(to_radians(x * y))) << endl;
}

void task1_8() {
    //Инициализация
    cout << "Задание 8:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << (1 + pow(M_E, y - 1)) / (1 + x * x * abs(y - tan(to_radians(x)))) << endl;
}

void task1_9() {
    //Инициализация
    cout << "Задание 9:\nВведите x:\n";
    double x;
    cin >> x;


    //Вычисление
    cout << "Ответ: " << abs(pow(x, 3) - pow(x, 2)) - ((7 * x) / (pow(x, 3) - 15 * x)) << endl;
}

void task1_10() {
    //Инициализация
    cout << "Задание 10:\nВведите x:\n";
    double x;
    cin >> x;


    //Вычисление
    cout << "Ответ: " << 1+(x/3)+abs(x)+(pow(x, 3) + 4)/2 << endl;
}

void task1_11() {
    //Инициализация
    cout << "Задание 11:\nВведите x:\n";
    double x;
    cin >> x;


    //Вычисление
    cout << "Ответ: " << (log(abs(cos(to_radians(x))))) / (log(1 + x * x)) << endl;
}

void task1_12() {
    //Инициализация
    cout << "Задание 12:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << (1 + sin(to_radians(sqrt(x + 1)))) / (cos(to_radians(12 * y - 4))) << endl;
}

void task1_13() {
    //Инициализация
    cout << "Задание 13:\nВведите a и b:\n";
    double a, b;
    cin >> a >> b;


    //Вычисление
    cout << "Ответ: " << (a * a + b * b) / (1 - ((pow(a, 3) - b) / 3)) << endl;
}

void task1_14() {
    //Инициализация
    cout << "Задание 14:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << (1 + pow(sin(to_radians(x + y)), 2)) / (2 + abs(x - ((2 * x) / (1 + x * x * y * y)))) + x << endl;
}

void task1_15() {
    //Инициализация
    cout << "Задание 15:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << x * log(x) + y / (cos(to_radians(x)) - (x / 3)) << endl;
}

void task1_16() {
    //Инициализация
    cout << "Задание 16:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << sin(to_radians(sqrt(x + 1))) - sin(to_radians(sqrt(x - 1))) << endl;
}

void task1_17() {
    //Инициализация
    cout << "Задание 17:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << (cos(to_radians(x))) / (M_PI - 2 * x) + 16 * x * cos(to_radians(x * y)) << endl;
}

void task1_18() {
    //Инициализация
    cout << "Задание 18:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << 2 * (1 / tan(to_radians(3 * x))) - (1) / (12 * x * x + 7 * x - 5) << endl;
}

void task1_19() {
    //Инициализация
    cout << "Задание 19:\nВведите a, b и c:\n";
    double a, b, c;
    cin >> a >> b >> c;


    //Вычисление
    cout << "Ответ: " << (b + sqrt(b * b + 4 * a * c)) / (2 * a) - pow(a, 3) + pow(b, -2) << endl;
}

void task1_20() {
    //Инициализация
    cout << "Задание 20:\nВведите x и y:\n";
    double x, y;
    cin >> x >> y;


    //Вычисление
    cout << "Ответ: " << log(abs((y - sqrt(abs(x))) * (x - y / (x + (x * x / 4))))) << endl;
}

void task2_1() {
    //Ввод x
    cout << "Задание 1:\nВведите площадь квадрата: ";
    double x;
    std::cin >> x;

    //Вычисление
    x = sqrt(x) * 4;
    cout << "Периметр квадрата = " << x;
}

void task2_2() {
    //Ввод x
    cout << "Задание 2:\nВведите периметр равностороннего треугольника: ";
    double x;
    cin >> x;

    //Вычисление
    x /= 3;
    x = (x * x * sqrt(3)) / 4;
    cout << "Площадь квадрата = " << x;
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

void task3_1() {
    //Инициализация
    double a, b;
    cout << "Введите два числа:\n";
    cin >> a >> b;

    //Вычисление
    cout << "Большее из введенных чисел: ";
    if (a > b)
        cout << a;
    else if (b > a)
        cout << b;
    else
        cout << a << endl << "т.к. числа равны";
    cout << endl;
}

void task3_2and3() {
    //Инициализация
    int a;
    cout << "Введите целое число:\n";
    cin >> a;

    //Вычисление
    if (a % 2 == 0)
        cout << "Число чётное";
    else
        cout << "Число нечётное";
    cout << endl;
}

void task3_4() {
    //Инициализация
    int m, n;
    cout << "Введите два целых числа: ";
    cin >> m >> n;

    //Вычисление
    if (m % n == 0)
        cout << "Остаток от деления m на n: " << m / n << endl;
    else
        cout << "Число m на n нацело не делится" << endl;
}

void task3_5() {
    //Инициализация
    int m;
    cout << "Введите одно целое число: ";
    cin >> m;

    //Вычисление
    if (m % 10 == 7)
        cout << "да" << endl;
    else
        cout << "нет" << endl;
}

void task3_6() {
    //Инициализация
    double a, b, c;
    cout << "Введите три числа: ";
    cin >> a >> b >> c;
    double x;

    //Вычисление
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "бесконечное количество корней" << endl;
                return;
            }
            else {
                cout << "Нет решений";
                return;
            }
                
        }
        else
        {
            x = -c / b;
            cout << "x = " << x << endl;
        }
    }
    else {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
        }
        else if (d == 0) {
            x = -b / (2 * a);
            cout << "x = " << x << endl;
        }
        else
            cout << "Корней нет" << endl;
    }
}

void task3_7__12() {
    cout << "Задания 7-12\nВведите двухзначное число: ";
    int x;
    cin >> x;
    x = abs(x);
    while (x > 99 || x < -99) {
        cout << "Число не двухзначное, введите снова: ";
        cin >> x;
    }

    int a = x / 10, b = x % 10;//Вычленяем из числа две цифры

    //Задание 7
    if (a > b)
        cout << "Первая цифра (" << a << ") больше, чем вторая (" << b << ")" << endl;
    else if (b > a)
        cout << "Вторая цифра (" << b << ") больше, чем первая (" << a << ")" << endl;
    //Задание 8
    else
        cout << "Обе цифры двузначного числа одинаковы (" << a << " и " << b << ")" << endl;

    //Задание 9
    x = a + b;
    if (x % 2 == 0)
        cout << "Сумма цифр числа чётная" << endl;
    //Задание 10
    else
        cout << "Сумма цифр числа нечётная" << endl;
    //Задание 11
    if (x % 3 == 0)
        cout << "Сумма цифр кратна 3-м" << endl;
    //Задание 12
    int y;
    cout << "Введите целое число: ";
    cin >> y;
    if (x % y == 0)
        cout << "Сумма цифр кратна введённому числу" << endl;
}

void task3_13__16() {
    cout << "Задания 12-16\nВведите трёхзначное число: ";
    int x;
    cin >> x;
    x = abs(x);
    while (x > 999 || x < -999) {
        cout << "Число не трёхзначное, введите снова: ";
        cin >> x;
    }

    int a = x / 100, b = x / 10 % 10, c = x % 10;//Вычленяем из числа две цифры

    //Задание 13
    if (a > c)
        cout << "Первая цифра (" << a << ") больше, чем последняя (" << c << ")" << endl;
    else if (c > a)
        cout << "Последняя цифра (" << c << ") больше, чем первая (" << a << ")" << endl;
    //Задание 14
    if(a > b)
        cout << "Первая цифра (" << a << ") больше, чем вторая (" << b << ")" << endl;
    else if(b > a)
        cout << "Вторая цифра (" << b << ") больше, чем первая (" << a << ")" << endl;
    //Задание 15
    if (b > c)
        cout << "Вторая цифра (" << b << ") больше, чем последняя (" << c << ")" << endl;
    else if (c > b)
        cout << "Последняя цифра (" << c << ") больше, чем вторая (" << b << ")" << endl;
    //Задание 16
    if (a == b && b == c)
        cout << "Все 3 цифры числа равны" << endl;
}

void task3_17__20() {
    double a, b, c;
    cout << "Задания 17-18\nВведите 3 стороны треугольника:\n";
    cin >> a >> b >> c;

    //Задание 17
    if (a + b <= c || b + c <= a || a + c <= b)
        cout << "Такого треугольника не существует" << endl;
    else {
        cout << "Такой треугольник существует" << endl;

        //Задание 18
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            cout << "Этот треугольник прямоугольный" << endl;
        else
            cout << "Этот треугольник не прямоугольный" << endl;

        //Задание 19
        if (a == b || b == c || a == c)
            cout << "Этот треугольник равнобедренный" << endl;
        else
            cout << "Этот треугольник не равнобедренный" << endl;

        //Задание 20
        if (a == b && b == c)
            cout << "Этот треугольник равносторонний" << endl;
        else
            cout << "Этот треугольник не равносторонний" << endl;
    }

}

int main()
{
    setlocale(LC_ALL, "rus"); //задаем кодировку

   
    cout << "Блок I\n";
    task1_1();
    task1_2();
    task1_3();
    task1_4();
    task1_5();
    task1_6();
    task1_7();
    task1_8();
    task1_9();
    task1_10();
    task1_11();
    task1_12();
    task1_13();
    task1_14();
    task1_15();
    task1_16();
    task1_17();
    task1_18();
    task1_19();
    task1_20();



    /*cout << "Блок II\n";
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
    task2_20();*/

    cout << "Блок III\n";
    task3_1();
    task3_2and3();
    task3_4();
    task3_5();
    task3_6();
    task3_7__12();
    task3_13__16();
    task3_17__20();


    system("pause");
}