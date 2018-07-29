#ifndef Perceptron_H
#define Perceptron_H

class Perceptron{
    private:
    
        double* inputs;
        double* weights;
        int numInputs;
    
    public:
    
    Perceptron();
    Perceptron(int numIns);
    ~Perceptron();
    //step 1 is the sum of inputs times weights
    int guess(double* inputs, double* weights);
    //step 2 is the activation function(conform the output to some desired range)
    int activate(double sum);
    
};
#endif
