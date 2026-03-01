#ifndef AIC_SYMBOLIC_ART_ENGINE_H
#define AIC_SYMBOLIC_ART_ENGINE_H 

#include <string>
#include <unordered_map>

using namespace std; 

namespace aic 
{
    namespace creative 
    {
        namespace art 
        {
            class SymbolicArtEngine 
            {
                public: 
                SymbolicArtEngine(); 
                string compose(const string &theme, 
                const string &archetype, 
                double abstraction); 

                double evaluate_symbolism(const string &representation); 

                private: 
                unordered_map<string, string> archetype_map_; 

                void load_archetypes();
            }; 
        }
    }
}


#endif 