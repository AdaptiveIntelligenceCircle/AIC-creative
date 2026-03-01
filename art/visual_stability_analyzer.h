#ifndef AIC_VISUAL_STABILITY_ANALYZER_H 
#define AIC_VISUAL_STABILITY_ANALYZER_H 

#include <string> 
using namespace std; 

namespace aic 
{
    namespace creative 
    {
        namespace art 
        {
            class VisualStabilityAnalyzer 
            {
                public: 
                double evaluate(const string &symbolic_representation); 

                private: 
                double symmetry_score(const string &rep); 
                double chaos_penalty(const string &rep); 
            }; 
        }
    }
}

#endif 