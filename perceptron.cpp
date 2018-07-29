#include "perceptron.h"


Perceptron::Perceptron(int numWeights){
    inputs = new double[numWeights];
    weights = new double[numWeights];
    for(int i = 0; i < numWeights; i++){
        weights[i] = 0;
    }
}
