#ifndef POTENTIAL1D_H
#define POTENTIAL1D_H

template <typename x, typename V>
class Potential1D {
public:
    enum FORM {infWell, fWell, barrier, quad};
    Potential1D();
    Potential1D(double min, double max, double num);
    Potential1D(double min, double max, FORM p);
    void setPosMin(double min);
    void setPosMax(double max);
    void setPosN(double num);
    void setPot(FORM p);
    V getPot();
private:
    x* pos = new x(101);
    double xmin = -10;
    double xmax = 10;
    double N = 101;
    double dx = (xmax - xmin) / (N - 1);
    V* pot = new V(101);
    V* fx;
    void setPos();
    void setForm(FORM p);
    V invoke(x POS, V *func(x POS));
};

#endif // POTENTIAL1D_H
