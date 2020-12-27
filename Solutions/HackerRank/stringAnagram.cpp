// Certification Test - Problem Solving (Basic)

vector<int> stringAnagram(vector<string> dictionary, vector<string> query) {
    
    vector<int> answer;
    
    for(auto &q: query){
        
        sort(q.begin(), q.end());
    }
    
    for(auto &d: dictionary){
        
        sort(d.begin(), d.end());
    }
    
    map<string, int> queryCounter;
    map<string,int>::iterator it;
    
    for(int i=0; i<query.size(); i++){
        
        queryCounter.insert(make_pair(query[i], 0));
    }
    
    for(int i=0; i<dictionary.size(); i++){
        
        string word = dictionary[i];
        it = queryCounter.find(word);
        
        if(it!=queryCounter.end()){
            
            ++it->second;
        }
    }
    
    for(it=queryCounter.begin(); it!=queryCounter.end(); it++){
        
        answer.insert(answer.begin(), 0, it->second);
    }
    
    return answer;
}