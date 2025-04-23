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


//int timE1, timE2 ;
//float disT1, speeD1, speeDS, speeDE;
//float speeD(int,float);
//float speeD(int,float);
int timE1,timE2  ;

float disT1, speeD1,startSpeed,endSpeed,accelaR1,radium1, radius1;
const float piRef = 3.1415;
const int reF = 2;

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



 /****************************************** Задание 2*******************************************************/

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

 /********************************************** Задание 3*******************************************************
  * 1. Вычислить скорость прямолинейного движения (по расстоянию и времени).
  * 2. Вычислить ускорение (по начальной скорости, конечной скорости и времени).
  * 3. Вычислить радиус круга (по длине его окружности).
  */


// объявления функций
 float speeD(int,float);
 float accelaR(float,float,int);
 float radiusC(float, const float, const int);

//форматирование расстояния

  while(true){

          std:: cout <<"enter a distance (m):"<< std::endl;
          std:: cin >> disT1;
          //std::cout<<disT1<<endl;
          if(std::cin.fail()){
             std::cin.clear();
             std::cin.ignore(32767, '\n');
         }
   else

     break;
}

//форматирование времени

  while(true){

        std:: cout <<"enter an time (s):"<< std::endl;
        std:: cin >> timE1;
        //std::cout<<timE1<<endl;
        if(std::cin.fail()){
              std::cin.clear();
              std::cin.ignore(32767, '\n');
   }
      else
         break;
}


   speeD1 = speeD( timE1,disT1); //вызов функции для вычисления скорости
   std::cout.setf(std::ios::fixed);
   std::cout << std::setprecision(4);
   std::cout.setf(ios::scientific);
   std::cout<< "the speed is :"<< speeD1 <<"  m/s "<< std::endl;

//форматирование начальной скорост
   while(true){
       std:: cout <<"enter start speed (m/s):"<< std::endl;
       std:: cin >> startSpeed;
      // std::cout<<startSpeed<<endl;
       if(std::cin.fail()){
          std::cin.clear();
          std::cin.ignore(32767, '\n');
    }
       else
           break;

 }

//форматирование конечной скорости
   while(true){
       std:: cout <<"enter end speed (m/s):"<< std::endl;
       std:: cin >> endSpeed;
       //std::cout<<endSpeed<<endl;
       if(std::cin.fail()){
          std::cin.clear();
          std::cin.ignore(32767, '\n');
      }
     else
         break;
 }

 //форматирование времени, затраченного на выполнение перемещения

   while(true){
       std:: cout <<"enter second time (s):"<< std::endl;
       std:: cin >> timE2;
       //std::cout<<timE2<<endl;
       if(std::cin.fail()){
          std::cin.clear();
          std::cin.ignore(32767, '\n');
        }
     else
          break;
  }

   accelaR1 = accelaR(startSpeed,endSpeed,timE2);  // вызов функции для вычисления ускорения
   std::cout.setf(std::ios::fixed);
   std::cout << std :: setprecision(4);
   std::cout <<" accelaration is :"<< accelaR1<<""<<"m/s2" << endl;


   while(true){

       std:: cout <<"enter radium (cm):"<< std::endl;
       std:: cin >> radium1;
       //std::cout<<radium1<<endl;
       if(std::cin.fail()){
          std::cin.clear();
          std::cin.ignore(32767, '\n');
        }
     else
          break;

   }

   radius1 = radiusC(radium1, piRef,reF);
   std::cout.setf(std::ios::fixed);
   std::cout<< std ::setprecision(4);
   std::cout <<" radius is :"<< radius1<<""<< "cm" << endl;

  // std::cout << std::setw(10)<<speeD1 <<std::setw(10)<<radius1<<std::endl;

} // end main()


/*******************функция вычислть скорость************************
 * 1.) Для вычисления скорости прямолинейного движения необходимо знать два основных параметра:
  *пройденное расстояние и время, за которое это расстояние было пройдено. Спид, как уже
  * упоминалось, рассчитывается по формуле: v=d/t
  */

float speeD( int timE, float disT ){

     float val1 ;
     val1 = disT/timE;
     return val1;
}

/*******************функция вычислть  ускорение************************
 *  2.2. Вычислить ускорение (по начальной скорости, конечной скорости и времени).
  * Ускорение можно вычислить с помощью формулы: a = vf -vi/t
  * a — ускорение,
  * vf — конеч
  * vi — начальная скорость,
  * t— время, в течение которого произошло изменение скорости.
  */

float accelaR ( float speedS, float speedE ,int time2){

    float val2;
    val2 = speedS - speedE/time2 ;
    return val2 ;
}

/*******************функция вычислть  ускорение************************
 * Для вычисления радиуса круга по длине его окружности мы можем использовать формулу,
 * связывающую длину окружности  Cи радиус r: C = 2πr ; r = c/2π
*/

/*************************функция для вычисления радиуса окружности**********************/

float radiusC(float radium, const float piRef, const int reF){


    float val3;
    //const float piRef = 3.1415;
    //int reF = 2;
    val3 = radium/(piRef*reF);
    return val3 ;

}






