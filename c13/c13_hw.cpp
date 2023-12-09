#include <iostream>
using namespace std;

class Food {

    int Calories, Sugar, Fat, Carbohydrates;
    int Tastiness, Disgustingness, PortionSize;

    public:
    Food(int Cal, int Sug, int Fa, int Carbo, int initTas, int initDisg, int initPort) {
        Calories = Cal;
        Sugar = Sug;
        Fat = Fa;
        Carbohydrates = Carbo;

        Tastiness = initTas;
        Disgustingness = initDisg;
        PortionSize = initPort;
    }
    //Get
    int getCal() {
        return Calories;
    }
    int getSugar() {
        return Sugar;
    }
    int getFat() {
        return Fat;
    }
    int getCarbo() {
        return Carbohydrates;
    }
    int getTasti() {
        return Tastiness;
    }
    int getDisgust() {
        return Disgustingness;
    }
    int getPortin() {
        return PortionSize;
    }
    //Set
    void setTasti(int Tasti) {
        Tastiness = Tasti;
    }
    void setDisgust(int Disgust) {
        Disgustingness = Disgust;
    }
    void setProtin(int Protin) {
        PortionSize = Protin;
    }
};

int main(){
    
}
