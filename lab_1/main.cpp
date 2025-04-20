/* Лабораторная работа №1
 * Тема : Установка и знакомство со средой разработки Qt Creator.
 * Исследованние комментариев С++ в IDE(интергрированной среде разработки ) Qt Creator.
 * Developer:Кемажу декемажу Анис Гислен
 * OS
 * Llocal
 */
#include"string.h"
#include"math.h"
#include <iomanip>
#include <iostream>
using namespace std;

/******************************* Задание 1 **************************************/

// Вот мой первый комметарий однострочный
/* вот мой первый комметарий многострочный я очеиь рад уиться ООП НА С++ ЯЗЫКОМ
 * je suis tres ravi d'apprendre la POO en language C++
 * I SO happy to learn POO in C++ language
 */
// комметарий многострочный с помощью директив


;

int main(){


#if 0
    output consol
#endif



 std::cout << "my name is Anicet that is my first test"<< std::endl;

 std ::cout << "TODO" << std::endl;

  // TODO в c++ все атрибуты класса должны быть частным



 // 1. a) Напишите комментариями вывод информации в функции main() о себе в таком формате:

 /* Номер групп 318,Факультет доп,Образование
   Разработчики 1.Кемажу Анисе
   Номер Лабораторной работы Лаб1
   */
 // в режиме выпуска объем *.ехе 80кб
 // в режиме отладки объем *.ехе 636кб


 
 /********************************************** Задание 2*******************************************************/

 std::cout <<"*****                            TUSUR                            *******\n";
 cout.setf( ios::right);
 cout.width(70);
 cout << "Faculty:Continuing Education" << endl;
 cout.unsetf( ios::right);
 cout.width(55);
 cout << "Group: 318" << endl;
 cout.unsetf( ios::right);
 cout.width(65);
 cout << "Student: Kemajou A.G" << endl;
 cout.unsetf( ios::right);
 cout.width(30);
 cout << "TOMSK 2025" << endl;

 /********************************************** Задание 3*******************************************************/
 /* 1. Вычислить скорость прямолинейного движения (по расстоянию и времени).
 /*Для вычисления скорости прямолинейного движения необходимо знать два основных параметра:
  *пройденное расстояние и время, за которое это расстояние было пройдено. Спид, как уже
  * упоминалось, рассчитывается по формуле: v=d/t
  */
 float speeD(int,float);
   int timE1 ;
   float disT1, speeD1;
   while(true){
   std:: cout <<"enter an distance:"<< std::endl;
   std:: cin >> disT1;
   std:: cout <<"enter a time:"<< std::endl;
   std:: cin >>timE1;
   speeD1 = speeD( timE1,disT1);
   std::cout<< "the speed is :"<< speeD1 <<"  Km/h "<< std::endl;

 /* 2.2. Вычислить ускорение (по начальной скорости, конечной скорости и времени).
  * Ускорение можно вычислить с помощью формулы: a = vf -vi/t
  * a — ускорение,
  * vf — конечная скорость,
  * vi — начальная скорость,
  * t— время, в течение которого произошло изменение скорости.
*/

}

}

//*******************функция вычислть скорость************************/

float speeD( int timE, float disT ){

     float val ;
     val = disT/timE;
     return val;
}
//*******************функция вычислть  ускорение************************/
float acceleR ( float speedI, float speedF ,int timeA){

    float val2;
    val2 = speedI - speedF/timeA ;
    return val2 ;
}






