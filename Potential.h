#ifndef POTENTIAL_H
#define POTENTIAL_H

template <typename x, typename V>
class Potential {
public:
    Potential();
    Potential(double min, double max, double num);
    Potential(double min, double max, V POT);
    void setPosMin(double min);
    void setPosMax(double max);
    void setPosN(double num);
    void setPot(V POT);
    V getPot();
private:
    x* pos = new x(101);
    double xmin = -10;
    double xmax = 10;
    double N = 101;
    double dx = (xmax - xmin) / (N - 1);
    V* pot = new V(101);
    void setPos();
};

#endif // POTENTIAL_H
