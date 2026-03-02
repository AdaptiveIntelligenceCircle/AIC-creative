#pragma once 

#include <iostream>
using namespace std;

#include <string> 
#include <unordered_map>

namespace aic :: creative :: narrative 
{
    struct ArchetypeProfile 
    {
        string call_to_action; 
        string integration; 
    }; 

    class ArchetypeNarrativeLibrary 
    {
        public: 
        ArchetypeNarrativeLibrary(); 
        ArchetypeProfile get(const string &archetype); 

        private: 
        unordered_map<string, ArchetypeProfile> data_; 
    }; 
}