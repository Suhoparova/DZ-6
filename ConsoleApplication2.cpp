// DZ6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
//#include <iomanip>

using namespace std;


/*Тема: Рекурсия.
Домашнее задание
Задание 1 :
    Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.*/

    //int delitel(int a, int b) 
    //{
    //	return (b==0) ? a : delitel(b, a % b);
    //}
    //
    //
    //int main()
    //{
    //	SetConsoleCP(1251);
    //	SetConsoleOutputCP(1251);
    //	int a, b;
    //	cout << "введите значение a\n";
    //	cin >> a;
    //	cout << "введите значение b\n";
    //	cin >> b;
    //	cout << delitel(a,b) << " ";
    //}

    /*?????????????Задание 2:   НЕ ЗНАЮ КАК ИСПОЛЬЗОВАТЬ РЕКУРСИЮ
    Написать игру «Быки и коровы».Программа "загадывает" четырёхзначное число и играющий
    должен угадать его.После ввода пользователем числа программа сообщает, сколько цифр числа
    угадано(быки) и сколько цифр угадано и стоит на нужном месте(коровы).После отгадывания
    числа на экран необходимо вывести количество сделанных пользователем попыток.В
    программе необходимо использовать рекурсию.*/


    //int chislozagad(int a)                   
    //{
    //	return a;
    //}
    //
    //int sumcorov(int a, int b)
    //{
    //	int sumkor = 0;
    //	
    //	int arr[4] = { a / 1000,a % 1000 / 100,a % 100 / 10,a % 10 };
    //	int arr1[4] = { b / 1000,b % 1000 / 100,b % 100 / 10,b % 10 };
    //	for (int i = 0; i < 4; i++)                 //сравнение по столбцам задуманного числа и угадываемого, например 4567 и 5663 сравнивает 4 и 5, 5 и 6, 6 и 6, 7 и 3
    //	{
    //		if (arr[i] == arr1[i])
    //		{
    //			sumkor = sumkor + 1;
    //			arr[i] = -1;                        // присваиваем значение -1, чтоб с этим числом больше не сравнивать
    //		}
    //	}
    //	return sumkor;
    //}
    //int sumcorovbikov(int a, int b)
    //{
    //	int sumkor = 0;
    //	int sumbik = 0;
    //	int arr[4] = { a / 1000,a % 1000 / 100,a % 100 / 10,a % 10 };
    //	int arr1[4] = { b / 1000,b % 1000 / 100,b % 100 / 10,b % 10 };
    //	for (int i = 0; i < 4; i++)                 //сравнение по столбцам задуманного числа и угадываемого, например 4567 и 5663 сравнивает 4 и 5, 5 и 6, 6 и 6, 7 и 3
    //	{
    //		if (arr[i] == arr1[i])
    //		{
    //			sumkor = sumkor + 1;
    //			arr[i] = -1;                        // присваиваем значение -1, чтоб с этим числом больше не сравнивать
    //		}
    //	}
    //
    //	for (int i = 0; i < 4; i++)              //сравнение сначала первого числа угадываемого с каждым числом задуманного, затем второго, затем третьего и четвертого
    //	{
    //		for (int j = 0; j < 4; j++)
    //		{
    //			if (arr1[i] == arr[j])
    //			{
    //				sumbik = sumbik + 1;
    //				arr[j] = -1;                        // присваиваем значение -1, чтоб с этим числом больше не сравнивать
    //				break;                              //дальше сравнение i - того числа из угадываемого не нужно, уже нашелся дубль, переходим к следующему i  - тому числу.
    //			}
    //		}
    //	}
    //	return sumbik + sumkor;
    //}
    //
    //int main()
    //{
    //	SetConsoleCP(1251);
    //	SetConsoleOutputCP(1251);
    //	srand(time(NULL));
    //
    //	int a = 3215/*rand() % (10000 - 1000) + 1000*/;
    //	chislozagad(a);
    //	int b;
    //	string nachalo;
    //	cout << "Начать игру? y/n - ";
    //	cin >> nachalo;
    //	while (true)
    //	{
    //		cout << endl;
    //		if (nachalo == "y")
    //		{
    //			int sumpopitok = 0;
    //			while (true)
    //			{
    //				cout << "Угадай четырехзначное число: b = ";
    //				cin >> b;
    //				cout << endl;
    //
    //				cout << "Вами угадано чисел " << sumcorovbikov(a, b) << ", из них на своем месте стоит чисел " << sumcorov(a, b) << "\n";
    //				cout << endl;
    //
    //				sumpopitok += 1;
    //				if (sumcorov(a, b) == 4)
    //					break;
    //			}
    //			cout << "ПОЗДРАВЛЯЕМ, ВЫ ПОБЕДИЛИ!\nВы угадали с попытки № " << sumpopitok;
    //			cout << endl;
    //		}
    //		else if (nachalo == "n")
    //			break;
    //		else
    //			cout << "ВНИМАНИЕ!!! Вы должны выбрать только y или n" << endl;
    //		cout << endl;
    //		cout << "Продолжить игру? y/n - ";
    //		cin >> nachalo;
    //	}
    //}


    /*???????????????????Задание 3:  НЕ РЕШЕНА
    Дана шахматная доска размером 8х8 и шахматный конь.Программа должна запросить у
    пользователя координаты клетки поля и поставить туда коня.Задача программы найти и
    вывести путь коня, при котором он обойдет все клетки доски, становясь в каждую клетку
    только один раз. (Так как процесс отыскания пути для разных начальных клеток может
        затянуться, то рекомендуется сначала опробовать задачу на поле размером 6х6).В программе
        необходимо использовать рекурсию.*/

        //int desk[8][8];
        //int step[8][2] = { {1,-2},{2,-1}, {2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2} };
        //int main()
        //{
        //	for (int i = 0; i < 8; i++)
        //		for (int j = 0; j < 8; j++)
        //			desk[i][j] = 0;
        //	for (int i = 0; i < 8; i++)
        //	{
        //		for (int j = 0; j < 8; j++)
        //			cout << desk[i][j] << " ";
        //		cout << "\n";
        //	}
        //
        //}


        /*Задание 4:
        Написать рекурсивную функцию нахождения степени числа*/

        //int stepen (int a, int n)
        //{
        //   if (n != 0)
        //       return(a* stepen(a, n-1));
        //}
        //
        //int main()
        //{
        //    SetConsoleCP(1251);
        //    SetConsoleOutputCP(1251);
        //    
        //    int a;
        //    cout << "Введите число - a = ";
        //    cin >> a;
        //    int n;
        //    cout << "Введите степень - n = ";
        //    cin >> n;
        //    cout << stepen(a, n);
        //}

        /*Задание 5:
        Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.
        Проиллюстрируйте работу функции примером.*/

        //void zvezdy(int n)
        //{
        //	if (n==0)
        //	{
        //		cout << endl;
        //		return;
        //	}
        //	cout << '*';
        //	zvezdy(n - 1);
        //}
        //int main()
        //{
        //	SetConsoleCP(1251);
        //    SetConsoleOutputCP(1251);
        //
        //	int n;
        //	cout << "введите количество звезд n = ";
        //	cin >> n;
        //	cout << endl;
        //	zvezdy(n);
        //}

        /*Задание 6 :
            Написать рекурсивную функцию, которая вычисляет сумму всех чисел в диапазоне от a до b.
            Пользователь вводит a и b.Проиллюстрируйте работу функции примером.*/

            //int summa(int a, int b)
            //{
            //    if (b == a - 1)
            //    {
            //        cout << " = ";
            //        return 0;
            //    }
            //    if (b != a)
            //        cout << b << " + ";
            //    else
            //        cout << b;
            //
            //    return b + summa(a, b - 1);
            //}
            //
            ////int summa(int a, int b)
            ////{
            ////    if (b + 1 == a)
            ////    {
            ////        cout << " = ";
            ////        return 0;
            ////    }
            ////    if(b!=a)
            ////        cout << a << " + ";
            ////    else
            ////        cout << a;
            ////
            ////    return a + summa(a + 1, b);
            ////}
            //
            //int main()
            //{
            //    SetConsoleCP(1251);
            //    SetConsoleOutputCP(1251);
            //    int a, b;
            //    cout << "введите значение a\n";
            //    cin >> a;
            //    cout << "введите значение b\n";
            //    cin >> b;
            //    cout << summa(a, b);
            //}

            /*????????????????Задание 7 :
            Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел,
            заполненных случайным образом, и находит позицию, с которой начинается
            последовательность из 10 чисел, сумма которых минимальна.*/

            /*ВАРИАНТ СПИСАН*/
            //int min10(int arr[10], int n, int &p)
            //{
            //    int s = 0;
            //    for (int i = n; i < n + 2; ++i) s += arr[i];
            //    cout << "n: " << n << "; s: " << s << endl;
            //    if (10 - n == 2)
            //    {
            //        p = n;
            //        return s;
            //    }
            //    else
            //    {
            //        int s1 = min10(arr, n + 1, p);
            //        if (s <= s1)
            //        {
            //            p = n;
            //            return s;
            //        }
            //        else return s1;
            //    }
            //}
            //
            //int main()
            //{
            //    SetConsoleCP(1251);
            //    SetConsoleOutputCP(1251);
            //    srand(time(NULL));
            //
            //    
            //    int p;
            //    int arr[10];
            //    for (int i = 0; i < 10; i++)
            //    {
            //        arr[i] = rand() % 10;
            //        cout << arr[i] << " ";
            //    }
            //    cout << endl;
            //    min10(arr, 0, p);
            //
            //    cout << "Minimum position: " << p << endl << endl;
            //
            //}


            /*ВАРИАНТ МОЙ НЕ РЕШЕНО*/
            //int min10(int arr[10], int n, int p)
            //{
            //    int s = 0;
            //    for (int i = n; i < n + 2; i++)
            //    {
            //        s = s + arr[i];  
            //    }
            //    cout << "n: " << n << "; s: " << s << endl; 
            //    while (10 - n != 2)
            //    {
            //        s = min10(arr, n + 1, p);
            //        return s;
            //    }
            //}
            //int main()
            //{
            //    SetConsoleCP(1251);
            //    SetConsoleOutputCP(1251);
            //    srand(time(NULL));
            //
            //    int p = 0;
            //    int arr[10];
            //    for (int i = 0; i < 10; i++)
            //    {
            //        arr[i] = rand() % 10;
            //        cout << arr[i] << " ";
            //    }
            //    cout << endl;
            //    min10(arr, 0, p);
            //   /* cout << "Minimum position: " << p << endl << endl;*/
            //}


            /*Тема: Указатели.
            Домашнее задание
            Задание 1:
            */
            /*Используя два указателя на массив целых чисел, скопировать один массив в другой.
            Использовать в программе арифметику указателей для продвижения по массиву, а также
            оператор разыменования.*/

            /*void CopyArr(int* a, int* b, const int* size)
            {
                for (int i = 0; i < *size; i++)
                    *(b + i) = *(a + i);
            }
            void CreateArr(int* a, const int* size)
            {
                for (int i = 0; i < *size; i++)
                    *(a + i) = rand() % (10 - 1) + 1;
            }
            void ViewArr(int* a, const int* size)
            {
                cout << endl;
                for (int i = 0; i < *size; i++)
                    cout << *(a + i) << " ";
            }
            int main()
            {
                const int size = 10;
                int A[size], B[size];
                int* pA = A;
                int* pB = B;     //указатели
                const int* pSize = &size;
                CreateArr(pA, pSize);
                CopyArr(pA, pB, pSize);
                ViewArr(pB, pSize);
            }*/


            /*Задание 2:
            Используя указатель на массив целых чисел, изменить порядок следования элементов массива
            на противоположный.
            Использовать в программе арифметику указателей для продвижения по массиву, а также
            оператор разыменования.*/



            /*Задание 3:
            Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы
            во втором массиве элементы находились в обратном порядке.
            Использовать в программе арифметику указателей для продвижения по массиву, а также
            оператор разыменования.*/

            /*void CopyArr(int* a, int* b, const int* size)
            {
                for (int i = 0; i < *size; i++)
                    *(b + i) = *(a + *size - 1 - i);
            }
            void CreateArr(int* a, const int* size)
            {
                for (int i = 0; i < *size; i++)
                    *(a + i) = rand() % (10 - 1) + 1;
            }
            void ViewArr(int* a, const int* size)
            {
                cout << endl;
                for (int i = 0; i < *size; i++)
                    cout << *(a + i) << " ";
            }
            int main()
            {
                const int size = 10;
                int A[size], B[size];
                int* pA = A;
                int* pB = B;     //указатели
                const int* pSize = &size;
                CreateArr(pA, pSize);
                ViewArr(pA, pSize);
                CopyArr(pA, pB, pSize);
                ViewArr(pB, pSize);
            }*/


            /*Задание 4:
            Используя указатели и оператор разыменования, определить наибольшее из двух чисел.*/

void Max(int* a, int* b, int Maximum)
{

    if (*a >= *b)
        Maximum = *a;
    else
        Maximum = *b;
    cout << "Наибольшее из двух чисел " << *a << " и " << *b << " = " << Maximum;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int Maximum = 0;
    int a;
    cout << "введите число a = ";
    cin >> a;
    cout << endl;
    int b;
    cout << "введите число b = ";
    cin >> b;
    cout << endl;
    int* pa = &a;
    int* pb = &b;
    Max(pa, pb, Maximum);
}

/*Задание 5:
Используя указатели и оператор разыменования, определить знак числа, введённого с
клавиатуры.*/

/*void znak(int* a)
{
    if (*a > 0)
        cout << "Положительное";
    else if (*a < 0)
        cout << "Отрицательное";
    else
        cout << "Равен 0!";
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int a;
    cin >> a;
    int* pa = &a;
    znak(pa);
}*/

/*Задание 6:
Используя указатели и оператор разыменования, обменять местами значения двух переменных.*/

/*void obmen(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
    cout << *a << endl;
    cout << *b;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int a,b;
    cin >> a >> b;
    int* pa = &a;
    int* pb = &b;

    obmen(pa, pb);
}*/

/*Задание 7:
* Написать примитивный калькулятор, пользуясь только указателями.*/

/*void Calc(int* a, int* b, char* op)
{
switch(*op)
{
case('+'):
{
    cout << *a << " + " << *b << " = " << *a + *b;
        break;
}
case('-'):
{
    cout << *a << " - " << *b << " = " << *a - *b;
        break;
}
case('*'):
{
    cout << *a << " * " << *b << " = " << *a * *b;
        break;
}
case('/'):
{
    if(*b!=0)
        cout << *a << " / " << *b << " = " << *a / *b;
    else
        cout << "ERROR";
        break;
}
}
}
int main()
{
        int a;
    int b;
    cin >> a;
    cin >> b;
    char op;
    cin >> op;
    int* pa = &a;
    int* pb = &b;
    char* pop = &op;
    Calc(pa,pb,pop);
}*/

/*Задание 8:
Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
в программе арифметику указателей для продвижения по массиву, а также оператор
разыменования.*/

/*int summa(int* a, const int* size)
{
    int c = 0;
    for (int i = 0; i < *size; i++)
    {
        cout << *(a + i) << " ";
        c = c + *(a + i);
    }
    cout << endl;
    cout << c << endl;
    return c;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 10;
    int arr[size]{ 1,7,3,5,4,6,7,9,3 };
    const int* psize = &size;
    summa(arr, psize);
}*/