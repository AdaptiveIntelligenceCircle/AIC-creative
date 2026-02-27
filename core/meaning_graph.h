#include <iostream> 
using namespace std; 

#include <sstream> 
#include <vector> 

#include <map> 
#include <unordered_map>

namespace aic 
{
    namespace creative 
    {
        class MeaningGraph 
        {
            public: 
            MeaningGraph(); 

            double analyze(const string &content); 
            vector<string> tokenize(const string &content); 

            unordered_map<string,int> build_graph(const vector<string> &tokens);
            double coherence_score(const unordered_map<string, int> &graph); 
        }; 
    }
}