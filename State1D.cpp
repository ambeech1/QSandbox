#include "State1D.h"
#include "Complex.h"
#include <QVector>

State1D::State1D() {}

State1D::~State1D() {}

void State1D::setState(QVector<Complex> v) {
    vals = v;
}

QVector<Complex> State1D::getPsi() {
    return vals;
}

std::vector<double> State1D::getReal() {

}

std::vector<double> State1D::getImag() {

}

std::vector<double> State1D::getNorm() {

}

std::vector<double> State1D::getNormSq() {

}
