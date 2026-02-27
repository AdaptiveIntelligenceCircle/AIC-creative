#include "meaning_graph.h"

namespace aic :: creative 
{
    MeaningGraph :: MeaningGraph(){}

    double MeaningGraph :: analyze(const string &content)
    {
        auto tokens = tokenize(content); 
        auto graph = build_graph(tokens); 

        return coherence_score(graph); 
    }

    vector<string> MeaningGraph :: tokenize(const string &content)
    {
        stringstream ss(content); 
        string word; 
        vector<string> tokens; 

        while (ss >> word)
        {
            tokens.push_back(word) ;
        }

        return tokens; 
    }   

    unordered_map<string, int> MeaningGraph :: build_graph(const vector<string> &tokens)
    {
        unordered_map<string, int> node_frequency; 

        for (const auto &token : tokens)
        {
            node_frequency[token]++; 
        }

        return node_frequency; 
    }

    double MeaningGraph :: coherence_score(
        const unordered_map<string, int> &graph 
    )
    {
        double total = 0.0; 
        for (auto &pair : graph)
        {
            total += pair.second; 
        }
        return total > 0; 
    }
}