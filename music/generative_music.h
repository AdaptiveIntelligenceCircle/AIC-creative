#pragma once 

#include <iostream> 

using namespace std; 

#include <string> 
#include <vector> 

#include "harmonic_model.h"
#include "silence_engine.h"

#include "neural_stability_analyzer.h"

namespace aic 
{
    namespace creative
    {
        namespace music 
        {
            struct MusicDescriptor 
            {
                double tempo; 
                double harmonic_density; 
                double silence_ratio; 
                double emotional_intensity; 

                string archetype; 
            }; 

            struct MusicOutput
            {
                vector<double> waveform; 
                double harmonic_score; 

                double neural_stability_score;
                double dopamine_risk_score; 

                bool approved; 
            }; 

            class GenerativeMusic
            {
                public: 
                MusicOutput compose(const MusicDescriptor &descriptor); 

                private: 
                HarmonicModel harmonic_model_; 
                SilenceEngine silence_engine_; 
                NeuralStabilityAnalyzer neural_analyzer_; 

                bool approve(double harmonic, 
                double stability, double dopamine_risk); 
            }; 
        } 
    }
}



