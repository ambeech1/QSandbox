#ifndef STATE1D_H
#define STATE1D_H

#include "State.h"
#include <complex>
#include <vector>

class State1D : public State {
    private:
        const int dim = 1;
        std::vector<std::complex<double>> vals;
    public:
        State1D();
        ~State1D();
        void setState(std::vector<std::complex<double>> v);
        std::vector<std::complex<double>> getPsi();
        std::vector<double> getReal();
        std::vector<double> getImag();
        std::vector<double> getNorm();
        std::vector<double> getNormSq();
};

#endif // STATE1D_H
