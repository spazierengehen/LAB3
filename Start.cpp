#include"Cylinder.h"
#include"Rational.h"
int main(){
    RoundCylinder C1(3,6);
    printInfo(C1);
    RectanglePrizm C2(3, 6, 2);
    printInfo(C2);
    std::cout << "------------" << endl;
    int N = 10;
    vector<Cylinder*> figure_array (N);
    for (int i = 0; i < N; i++)
    {
        if (rand() % 2 == 1)
            figure_array[i] = new RoundCylinder(i + 5, rand() % 5 + 2); else
            figure_array[i] = new RectanglePrizm(i + 5, rand() % 5 + 2, rand() % 3 + 1);
    }
    for (auto f : figure_array)
        printInfo(*f);
    for (auto& f : figure_array)
        delete f;
    return 0;
}