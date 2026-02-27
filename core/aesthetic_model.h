#include <iostream> 
using namespace std; 

#include <cmath> 

namespace aic 
{
    namespace creative  
    {
        class AestheticModel 
        {
            public: 
            AestheticModel(); 

            double evaluate_depth(const string &content); 
            double evaluate_stability(const string &content);

            double score(const string &content); 
            double detect_repitition(const string &content); 

            double count_char(const string &content, char c); 
            double detect_caps_ratio(const string &content); 
        }; 
    }
}