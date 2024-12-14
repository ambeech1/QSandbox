#ifndef TISE_1D_H
#define TISE_1D_H

#include <QVector>

class TISE_1D {
private:

public:
    TISE_1D();
    ~TISE_1D();
    static QVector<double> computeEnergies();
    static QVector<QVector<double>> computeEigenstates();
    static std::pair<QVector<double>, QVector<QVector<double>>> computeEigenAll();
};

#endif // TISE_1D_H
