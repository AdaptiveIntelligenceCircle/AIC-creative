#pragma once 

#include <string> 
using namespace std; 

#include <vector>

namespace aic :: creative :: narrative 
{
    class TensionRegulator 
    {
        public: 
        double evaluate_tension_curve(const string &text);
        bool is_spike_heavy(const string &text); 
        
        private: 
        double emotional_spike_score(const string &text); 
    }; 
}