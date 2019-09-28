#ifndef PARTICLEFILTER_H
#define PARTICLEFILTER_H
#include "helper_functions.h"
//using namespace std;

struct Particle{
    int id;
    double x;
    double y;
    double theta;
    double weight;
};


class ParticleFilter
{
    // number of particles
    int numParticles;
    // is initialized flag
    bool is_initialized;
    // Vecotr of the weights of all particles
    std::vector<double> weights;


public:

    std::vector<Particle> particles;

    // Constructor
    ParticleFilter();
//    ParticleFilter() : numParticles(0), is_initialized(false){}

    //Destructor
    ~ParticleFilter() {};

    void init(double x, double y, double theta, double std[]);

    void predictions(double delta_t, double std_pos[], double velocity, double yaw_rate);

    void updateWeights(double sensor_range, double std_landmark[], std::vector<LandmarkObs> observations, Map map_landmarks);

    void resample();

    void write(std::string filename);

    const bool initialized() const {
        return is_initialized;
    }
};

#endif // PARTICLEFILTER_H
