#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, b, c;
    char cmd;
    const std::string name = "David Petrosian";

    std::cin >> a >> b >> c >> cmd;

    if (cmd == 'f') {
        std::cout << name << "\n";
    } 
    else if (cmd == 'r') {
        const double eps = 1e-9;
        if (std::abs(a) > eps) {
            double d = b * b - 4 * a * c;
            if (d < -eps) std::cout << "No roots\n";
            else if (std::abs(d) <= eps) std::cout << "x = " << std::fixed << std::setprecision(4) << -b / (2 * a) << "\n";
            else {
                double x1 = (-b + std::sqrt(d)) / (2 * a);
                double x2 = (-b - std::sqrt(d)) / (2 * a);
                std::cout << "x1 = " << x1 << ", x2 = " << x2 << "\n";
            }
        } else if (std::abs(b) > eps) {
            std::cout << "x = " << std::fixed << std::setprecision(4) << -c / b << "\n";
        } else {
            std::cout << (std::abs(c) > eps ? "No solutions\n" : "Any real number\n");
        }
    } 
    else if (cmd == 'd') {
        double price, disc;
        std::cin >> price >> disc;
        if (price >= 0 && disc >= 0 && disc <= 100)
            std::cout << std::fixed << std::setprecision(2) << price * (1 - disc / 100) << "\n";
    }

    return 0;
}

