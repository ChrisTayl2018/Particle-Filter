#include <iostream>
#include "particlefilter.h"
#include "helper_functions.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    // Create an instance of the particle filter
    ParticleFilter pf;
    double x =1.0;
    double y =2.0;
    double theta= 0.4;
    double sigma_pos [3] = {0.3, 0.3, 0.01};

    pf.init(x, y, theta, sigma_pos);

    return 0;
}
