#include "perceptron.h"


Perceptron::Perceptron(int numInputs){
    inputs = new double[numWeights];
    weights = new double[numWeights];
    this -> numInputs = numInputs;
    for(int i = 0; i < numWeights; i++){
        weights[i] = 0;
    }
}

Perceptron::~Perceptron(){
    delete [] inputs;
    delete [] weights;
}

int Perceptron::activate(double sum){
    if(sum > 0){
        return 1;
    } else {
        return -1;
    }
}

int Perceptron::guess(double* inputs, double* weights){
    double sum = 0;
    for(int i = 0; i < numInputs; i++){
        sum += inputs[i] * weights[i];
    }
    
    return activate(sum);
}


