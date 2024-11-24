#include "State1D.h"
#include <complex>

State1D::State1D() {}

State1D::~State1D() {}

void State1D::setState(std::vector<std::complex<double>> v) {
    vals = v;
}

std::vector<std::complex<double>> State1D::getPsi() {
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
