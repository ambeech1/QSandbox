#include "Potential1D.h"

template <typename x, typename V>
V InfWell(x POS) {
    V POT;
    for (int i = 0; i < POS.size(); i++) {
        if (abs(POS[i]) < 5) {
            POT[i] = 0;
        }
        else {
            POT[i] = 1000000;
        }
    }
    return POT;
}

template <typename x, typename V>
V FWell(x POS) {
    V POT;
    for (int i = 0; i < POS.size(); i++) {
        if (abs(POS[i]) < 5) {
            POT[i] = 0;
        }
        else {
            POT[i] = 10;
        }
    }
    return POT;
}

template <typename x, typename V>
V Barrier(x POS) {
    V POT;
    for (int i = 0; i < POS.size(); i++) {
        if (abs(POS[i]) < 0.5) {
            POT[i] = 50;
        }
        else {
            POT[i] = 0;
        }
    }
    return POT;
}

template <typename x, typename V>
V Quad(x POS) {
    V POT;
    for (int i = 0; i < POS.size(); i++) {
        POT[i] = pow(POS[i], 2) / 5;
    }
    return POT;
}



template <typename x, typename V>
Potential1D<x, V>::Potential1D() : xmin(-10), xmax(10), N(101), fx(InfWell) {}

template <typename x, typename V>
Potential1D<x, V>::Potential1D(double min, double max, double num) : xmin(min), xmax(max), N(num), fx(InfWell) {
    setPos();
    pot = new V(invoke(pos, fx));
}

template <typename x, typename V>
Potential1D<x, V>::Potential1D(double min, double max, FORM p) : xmin(min), xmax(max) {

}

template <typename x, typename V>
void Potential1D<x, V>::setPosMin(double min) {
    xmin = min;
    setPos();
}

template <typename x, typename V>
void Potential1D<x, V>::setPosMax(double max) {
    xmax = max;
    setPos();
}

template <typename x, typename V>
void Potential1D<x, V>::setPosN(double num) {
    N = num;
    setPos();
}

template <typename x, typename V>
void Potential1D<x, V>::setPot(FORM p) {
    delete pot;
    switch(p) {
    case infWell:
        fx = InfWell;
        break;
    case fWell:
        fx = FWell;
        break;
    case barrier:
        fx = Barrier;
        break;
    case quad:
        fx = Quad;
        break;
    }
    pot = new V(invoke(pos, fx));
}

template <typename x, typename V>
V Potential1D<x, V>::getPot() {
    return pot;
}

template <typename x, typename V>
void Potential1D<x, V>::setPos() {
    delete pos;
    delete pot;
    pos = new x(N);
    for (int i = 0; i < N; i++) {
        pos[i] = xmin + (i * dx);
    }
    setPot(invoke(pos, fx));
}

template <typename x, typename V>
void Potential1D<x, V>::setForm(FORM p) {
    fx = p;
}

template <typename x, typename V>
V Potential1D<x, V>::invoke(x POS, V *func(x POS)) {
    return func(POS);
}
