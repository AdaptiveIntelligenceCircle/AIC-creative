#pragma once 

#include <iostream>
using namespace std; 

#include <string> 

namespace aic :: creative :: narrative 
{
    class MeaningArcAnalyzer
    {
        public: 
        double coherence_score(const string &text); 
    }; 
}