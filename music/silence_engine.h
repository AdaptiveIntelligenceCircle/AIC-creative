#pragma once 

#include <vector> 
using namespace std; 

namespace aic :: creative :: music 
{
    class SilenceEngine 
    {
        public: 
        vector<double> inject(const vector<double> &waveform, double silence_ratio); 

        private:  
        bool should_silence(int index, double ratio); 
    }; 
}