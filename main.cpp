#include "Point.h"
#include "Perceptron.h"

int main(){
    Perceptron p;
    int numPoints = 10000;
    //we need an array of 20 points
    Point* points = new Point[numPoints];
    for(int i = 0; i < numPoints; i++){
        points[i] = Point();
    }
    //we need to guess for each one of them: output the number of correct and incorrect guesses
    int numCorrectGuesses = 0;
    for(int i = 0; i < numPoints; i++){
        double inputs [] = {points[i].getX(), points[i].getY()};
//        std::cout << "X: " << points[i].getX() << " , ";
//        std::cout << "Y: " << points[i].getY() << std::endl;
        int guessNumber = p.guess(inputs);
//        if(guessNumber == 1){
//            std::cout << "Guess: Above" << std::endl;
//        } else if(guessNumber == -1){
//            std::cout << "Guess: Below" << std::endl;
//        }
        int label = points[i].getLabel();
        if(p.isPerceptronCorrect(guessNumber, label)){
            numCorrectGuesses++;
        }
    }
    std:: cout << "Number of correct guesses before training: " << numCorrectGuesses << std::endl;
    std::cout << "Number of incorrect guesses before training: " << numPoints - numCorrectGuesses << std::endl;
    //then, we need to train the perceptron: output the number of correct and incorrect guesses
    
    int numCorrectGuessesAfterTraining = 0;
    for(int i = 0; i < numPoints; i++){
        double inputs [] = {points[i].getX(), points[i].getY()};
        p.train(inputs, points[i].getLabel());
    }
    
    for(int i = 0; i < numPoints; i++){
        double inputs [] = {points[i].getX(), points[i].getY()};
//        std::cout << "X: " << points[i].getX() << " , ";
//        std::cout << "Y: " << points[i].getY() << std::endl;
        int guessNumber = p.guess(inputs);
//        if(guessNumber == 1){
//            std::cout << "Guess: Above" << std::endl;
//        } else if(guessNumber == -1){
//            std::cout << "Guess: Below" << std::endl;
//        }
        int label = points[i].getLabel();
        if(p.isPerceptronCorrect(guessNumber, label)){
            numCorrectGuessesAfterTraining++;
        }
    }
    
    std:: cout << "Number of correct guesses after training: " << numCorrectGuessesAfterTraining << std::endl;
    std::cout << "Number of incorrect guesses after training: " << numPoints - numCorrectGuessesAfterTraining << std::endl;
    
    
    delete [] points;
    return 0;
}

