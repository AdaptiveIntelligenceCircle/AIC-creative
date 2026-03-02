#pragma once 

#include <iostream>
using namespace std; 

#include <string> 

namespace aic :: creative :: narrative 
{
    struct NarrativeArc 
    {
        string introduction; 
        string transformation; 
        string resolution; 
    }; 

    class NarrativeStructureEngine 
    {
        public: 
        NarrativeArc build_mythic_arc(const string &civilization_stage, 
        double depth); 

        private:
        string generate_transformation(double depth); 
    }; 
}