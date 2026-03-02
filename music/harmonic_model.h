#pragma once 

#include <iostream>
#include <vector> 

#include "harmonic_ratio_library.h"
#include "generative_music.h"

using namespace std; 

namespace aic :: creative  :: music 
{
    class HarmonicModel
    {
        public: 
        vector<double> generate(const MusicDescriptor &desc); 
        double evaluate(const vector<double> &waveform); 

        private: 
        double harmonic_coherence(const vector<double> &waveform); 
        double dissonance_penalty(const vector<double> &waveform);

    }; 
}