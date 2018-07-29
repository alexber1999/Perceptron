#include "Perceptron.h"

Perceptron::Perceptron(){
    weights = new double[2];
    numInputs = 2;
    learningRate = 0.1;
    
    for(int i = 0; i < numInputs; i++){
        weights[i] = 0;
    }
    
}


Perceptron::Perceptron(int numInputs){
    weights = new double[numInputs];
    this -> numInputs = numInputs;
    learningRate = 0.1;
    for(int i = 0; i < this -> numInputs; i++){
        weights[i] = 0;
    }
}

Perceptron::~Perceptron(){
    delete [] weights;
}

int Perceptron::activate(double sum){
    if(sum >= 0){
        return 1;
    } else {
        return -1;
    }
}

int Perceptron::guess(double* inputs){
    int sum = 0;
    for(int i = 0; i < this -> numInputs; i++){
        sum += inputs[i] * weights[i];
    }
    
    return activate(sum);
}

void Perceptron::train(double* inputs, int target){
    int guessNumber = guess(inputs);
    int error = target - guessNumber;
    for(int i = 0; i < numInputs; i++){
        weights[i] += error * inputs[i] * learningRate;
    }
}


