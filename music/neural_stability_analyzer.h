#pragma once 

#include <vector> 
using namespace std; 

namespace aic :: creative ::  music
{
    class NeuralStabilityAnalyzer
    {
        public: 
        double evaluate(const vector<double> &waveform); 
        double dopamine_risk(const vector<double> &waveform);

        private: 
        double spike_detection(const vector<double> &waveform); 
        double rhythmic_repiitition_score(const vector<double> &waveform);
    }; 
}