#include <iostream>
using namespace std;

class Car {
public:
    double speed;
    double distance;
    string color;
public:

    Car() {
        cout << "Пустой конструктор Car()" << endl;
    }

    Car(double speed, double distance, string color) {
        this->speed = speed;
        this->distance = distance;
        this->color = color;
        cout << "Конструктор Car(double speed, double distance, string color) создали Car со скоростью " << speed <<
        " с пробегом " <<  distance << " со цветом "<< color<<endl;
    }

    Car(const Car& car) {
        this->speed = car.speed;
        this->distance = car.distance;
        this->color = car.color;
        cout << "Конструктор копирования Car(const Car& car) создали Car со скоростью " << car.speed <<
        " с пробегом " <<  car.distance << " со цветом "<< car.color<<endl;
    }
};

int main() {

    Car *car;
    car = new Car(3.4,10.4,"Белый");
    Car *car2 = new Car(*car);

    return 0;
}