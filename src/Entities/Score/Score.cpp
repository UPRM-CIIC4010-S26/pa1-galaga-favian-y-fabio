#include "Score.hpp"

void manageScore::addScore(int pointsToAdd) {
    int newScore = this->score + pointsToAdd;
    if (newScore < this-> maxScore) {
        if (newScore > this-> highScore) {
            this-> highScore = newScore;
            this-> score = newScore;
        }
        else this-> score = newScore;
    }


}

int manageScore::addScore(int pointsToAdd, int &lives, int maxLives) {
    int livesGained;


    int oldScore = this-> score;


    this-> addScore(pointsToAdd);


    int oldLevel = oldScore / 1000;
    int newLevel = this-> score / 1000;


    livesGained = newLevel - oldLevel;


    if (lives + livesGained > maxLives) lives = maxLives;
    else lives += livesGained;
   
    return livesGained;
}
