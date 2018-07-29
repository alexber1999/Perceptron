#include "Perceptron.h"

Perceptron::Perceptron(){
    inputs = new double[2];
    weights = new double[2];
    numInputs = 2;
    
    for(int i = 0; i < numInputs; i++){
        weights[i] = 0;
    }
    
}


Perceptron::Perceptron(int numInputs){
    inputs = new double[numInputs];
    weights = new double[numInputs];
    this -> numInputs = numInputs;
    
    for(int i = 0; i < this -> numInputs; i++){
        weights[i] = 0;
    }
}

Perceptron::~Perceptron(){
    delete [] inputs;
    delete [] weights;
}

int Perceptron::activate(double sum){
    
}

int Perceptron::guess(double* numInputs, double* weights){
    
}


