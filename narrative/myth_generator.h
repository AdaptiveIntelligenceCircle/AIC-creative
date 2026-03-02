#pragma once 
#include <iostream>

#include <string> 
using namespace std; 

#include "archetype_narrative_library.h"
#include "narrative_structure_engine.h"

namespace aic :: creative :: narrative 
{
    struct MythDescriptor 
    {
        string civilization_stage; 
        string central_archetype; 
        double existential_depth; 
    }; 

    class MythGenerator 
    {
        public: 
        string generate(const MythDescriptor &desc); 

        private: 
        ArchetypeNarrativeLibrary archetypes_; 
        NarrativeStructureEngine structure_engine_;    
    }; 
}