# Тестовые задания
## a )
### неправильный код
---cpp
1 #if 0 Подключаем библиотеку для ввода/вывода #endif
2 #include <iostream>
3 Int main() {/* Открытая скобка - окончание блока
4 стейтмена, кода относящийся к функции main */
5 // Тело
6 функции
7
8 } /* /* Закрытая скобка - окончание блока стейтмена, кода относящийся к функции main */ */
---
## b) 
### неправильный код
---cpp
1 #if 0 Подключаем библиотеку для ввода/вывода
2 #endif
3 #include <iostream
4 int MAIN() {/* Открытая скобка - окончание блока
5 стейтмена, кода относящийся к функции main */
6 // Тело функции
7 } /* /* Закрытая скобка - окончание блока стейтмена, кода относящийся к функции
---
## C)
### неправильный код
---cpp
2 Подключаем библиотеку для ввода/вывода
3 #endif
4 #include <iostream
5 int майн() /* Открытая скобка - окончание блока
6
7 стейтмена, кода относящийся к функции main */
8 // Тело функции
9 } /* */ Закрытая скобка - окончание блока стейтмена, кода относящийся к функции
---
## d )
### неправильный код
---cpp
2 * Лабораторная работа No1
3 * Исследование комментариев С++:
4 *
5 * Developer:
6 * /
7
8 #if 0
9 Подключаем библиотеку для ввода/вывода
10 #endif
11 #include <iostream
12 int майн() { /* Открытая скобка - окончание блока
13 //
14 стейтмена, кода относящийся к функции main */
15 // Тело функции
16 } //Закрытая скобка - окончание блока стейтмена, кода относящийся к функции
---
## e )
### неправильный код
---cpp
f)
1 / *
2 * Лабораторная работа No1
3 * Исследование комментариев С++:
4 *
5 * Developer:
6 * /
7
8 #if 0
9 Подключаем библиотеку для ввода/вывода
10 #endif
11 #
12 include <iostream>
13 int main() } /* *Открытая скобка - окончание блока
14 //
15 стейтмена, кода относящийся к функции main */
16 //// Тело функции
---
