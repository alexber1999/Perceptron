#ifndef Perceptron
#define Perceptron

class Perceptron{
    private:
        double* inputs;
        double* weights;
    public:
    
    Perceptron(int numInputs);
    //step 1 is the sum of inputs times weights
    double sum(double*, double*);
    //step 2 is the activation function(conform the output to some desired range)
    int activate(double);
    
    
};
#endif
