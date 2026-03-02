#pragma once 

#include <iostream> 
using namespace std; 

namespace aic :: Slowmedia
{
    class AttentionMeter 
    {
        public: 
        static double calculatesStimulation(double motion, double contrast, double audioIntensity );
        static double calculateEntropy(double noveltyFactor, double unpredictability); 
        static double calculateRewardVariability(double rewardRandomness); 
    }; 
}