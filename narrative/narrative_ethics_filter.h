#pragma once 

#include <iostream>
using namespace std ; 

#include <string> 

namespace aic :: creative :: narrative 
{
    class NarrativeEthicsFilter 
    {
        public: 
        bool approve(const string &text); 

        private: 
        bool detect_outrage_manipulation(const string &text); 
        bool detect_trauma_festishization(const string &text); 
        bool detect_rage_amplification(const string &text); 
    }; 
}