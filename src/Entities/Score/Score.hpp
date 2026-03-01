#pragma once

class manageScore {
    private:
        int score = 0;
        int highScore = 0; // high score *possible implementation in the future* (not resquired for assignment)
        int maxScore = 999999; //same as original arcade machine


    public:
        void drawScore();

        int getScore() {return this-> score; }
        int getHighScore() {return this-> highScore; }


        int addScore(int pointsToAdd, int &lives, int maxLives);
        void addScore(int pointsToAdd);


        void resetScore() { this->score = 0; }
        void resetHighScore(int largestScore) { this->highScore = largestScore; }


};