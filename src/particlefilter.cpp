#include "particlefilter.h"
#include <algorithm>
#include <iostream>
#include <numeric>

#define NUMBER_OF_PARTICLES 500
#define EPS 0.001


// Constructutor
ParticleFilter::ParticleFilter() : numParticles(0), is_initialized(false)
{}


void ParticleFilter::init(double x, double y, double theta, double std[]){

};



void ParticleFilter::predictions(double delta_t, double std_pos[], double velocity, double yaw_rate){

};


void ParticleFilter::updateWeights(double sensor_range, double std_landmark[], std::vector<LandmarkObs> observations, Map map_landmarks){

};


void ParticleFilter::resample(){

};


void ParticleFilter::write(std::string filename){

};
