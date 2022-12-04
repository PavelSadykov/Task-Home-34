//
//  main.cpp
//  ДЗ 34
//
//  Created by Павел on 04.12.2022.
//
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

void func_unic(int *arr1,int *arr2,const int &size);

float fract(float PI);

double double_rand();

int main() {
    
    cout<<"Задача 1 \n";
    const  int size = 8;
    int arr1[size]={1,2,5,7,6,23,0,78};
    int arr2[size]={1,3,8,2,0,11,45,2};
    func_unic(arr1,arr2,size);
 
    cout<<"\nЗадача 2 \n";
    cout<<"Введите вещественное число - > \n";
    float PI;
    cin>>PI;
    cout<<fract(PI);
    cout<<endl;
    
    cout<<"\nЗадача 3 \n";
    cout<<"Случайное число от 0 до 1 : \n";
    cout<< double_rand();
    cout<<endl;
    cout<<endl;
    return 0;
}

//Задача 1
void func_unic(int *arr1,int *arr2,const int &size){
    int i,j;
    int tmp=0;
    const int size2=2*size;
    int arr3 [size2];
    
   //Создаем новый массив из элементов двух исходных
    for ( j = 0; j < size; j++){
            arr3[j]=arr2[j];
            arr3[j+size]=arr1[j];
        }
    cout<<"Новый массив arr3 из элементов двух исходных массивов : \n";
    for ( i = 0; i < size2; i++){
        cout<<arr3[i]<<"  ";
    }
    
    cout<<"\nСортировка массива arr3 по возрастанию : \n";
    for(int i=size2-1; i>0 ; i--)
        for(int j=0; j<i; j++ )
            if (arr3[j]>arr3[j+1])
                swap(arr3[j],arr3[j+1]);
    for ( i = 0; i < size2; i++){
        cout<<arr3[i]<<"  ";
    }
    cout<<"\nУникальные элементы : \n";
    for ( i = 0; i < size2; ++i) {
            // Присвоим значение  текущего элемента переменной tmp
            tmp = arr3[i];
            //  текущий элемент,встречающееся в массиве по умолчанию  false
            bool hasEl = false;
           // Проверяем  есть ли элемент в  массиве со значением текущего
            for ( j = 0; j < size2; ++j) {
                if (i == j) {
                    continue;
                }
                // Если текущий элемент равен другому элементу
                if (tmp == arr3[j] && i != j) {
                    // То  такое значение встречалось
                    hasEl = true;
                }}
            // Если у этого элемента нет встречающихся значений, то выводим
            if (!hasEl) {
                cout << tmp << "  ";
            }}
        cout<<endl;
}
 //Задача 2
float fract(float PI){
    float RES;
    int C=PI;
    RES=PI-C;
    return RES;
}

//Задача 3
double double_rand(){
    srand(unsigned((NULL)));
    double N= (double) rand() / RAND_MAX;
    return N;
}

