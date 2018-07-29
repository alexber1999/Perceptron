#ifndef Perceptron
#define Perceptron

class Perceptron{
    private:
        double* inputs;
        double* weights;
        int numInputs;
    public:
    
    Perceptron(int);
    ~Perceptron();
    //step 1 is the sum of inputs times weights
    int guess(double*, double*);
    //step 2 is the activation function(conform the output to some desired range)
    int activate(double);
    
};
#endif
