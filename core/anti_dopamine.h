#pragma once 
#include <string> 

#include <iostream>
using namespace std; 

#include <algorithm>
#include <vector> 

namespace aic {
    namespace creative 
    {
        class AntiDopamineFilter
        {
            public: 
            AntiDopamineFilter(); 

            double evaluate(const string &content); 

            double detect_spike_language(const string &content); 

            double detect_short_loop_pattern(const string &content); 

            double detect_outrage_pattern(const string &content); 

            bool approve(double risk_score); 

            private: 
            double risk_score; 
            static const vector<string> spike_words; 
        }; 
    }
}