#include "particlefilter.h"
#include <algorithm>
#include <iostream>
#include <numeric>

#define NUMBER_OF_PARTICLES 500
#define EPS 0.001


// Constructutor
ParticleFilter::ParticleFilter() : numParticles(0), is_initialized(false)
{}

// Initialize the particle filter
void ParticleFilter::init(double x, double y, double theta, double std[]){

    static std::default_random_engine gen;
    gen.seed(123);
    numParticles = NUMBER_OF_PARTICLES;
    std::normal_distribution<double> dist_x(x, std[0]);
    std::normal_distribution<double> dist_y(y, std[1]);
    std::normal_distribution<double> dist_theta(theta, std[2]);

    particles.resize(numParticles);
    weights.resize(numParticles);


    double init_weight = 1.0/numParticles;
    // Initialize the particle filter vector with normal distributions and initialize the weights of the particles
    for (int i = 0; i < 100; i++){
        particles[i].id = i;
        particles[i].x = dist_x(gen);
        particles[i].y = dist_y(gen);
        particles[i].theta = dist_theta(gen);
        particles[i].weight = init_weight;
        std::cout << particles[i].x << ", ";
    }
    // Set the particle filter to initialized
    is_initialized = true;
};



void ParticleFilter::predictions(double delta_t, double std_pos[], double velocity, double yaw_rate){

};


void ParticleFilter::updateWeights(double sensor_range, double std_landmark[], std::vector<LandmarkObs> observations, Map map_landmarks){

};


void ParticleFilter::resample(){

};


void ParticleFilter::write(std::string filename){

};
