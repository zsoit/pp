#include <iostream>

using namespace std;

class prostokat {
private:
    float szer;
    float wys;
public:
    prostokat();
    prostokat(float s, float w);
    ~prostokat();
    float getSzer() const;
    float getWys() const;
    void setSzer(float s);
    void setWys(float w);
    float obliczPole() const;
    float obliczObwod() const;
};

prostokat::prostokat() {
    szer = 1.0f;
    wys = 1.0f;
    //Utworzono obiekt konstruktorem bezargumentowym
}

prostokat::prostokat(float s, float w) {
    szer = s;
    wys = w;
    //Utworzono obiekt konstruktorem z argumentami
}

prostokat::~prostokat() {
    //Zniszczono obiekt
}

float prostokat::getSzer() const {
    return szer;
}

float prostokat::getWys() const {
    return wys;
}

void prostokat::setSzer(float s) {
    szer = s;
}

void prostokat::setWys(float w) {
    wys = w;
}

float prostokat::obliczPole() const {
    return szer * wys;
}

float prostokat::obliczObwod() const {
    return 2 * szer + 2 * wys;
}




int main() {
    prostokat p1;
    prostokat p2(2, 3);
    prostokat* p3 = new prostokat(1, 2);

    cout << "Pole p1: "
    << p1.obliczPole()
    << ", Obwod p1: "
    << p1.obliczObwod() << '\n';

    cout << "Pole p2: "
    << p2.obliczPole()
    <<", Obwod p2: "
    << p2.obliczObwod() << '\n';

    cout << "Pole p3: "
    << p3->obliczPole()
    << ", Obwod p3: "
    << p3->obliczObwod() << '\n';


    p1.~prostokat();
    p2.~prostokat();
    delete p3;
}
