// Certification Test - Problem Solving (Basic)

long roadRepair(vector<int> crew_id, vector<int> job_id) {

    long answer=0;

    sort(crew_id.begin(), crew_id.end());
    sort(job_id.begin(), job_id.end());

    for(int i=0; i<job_id.size(); i++){

    		answer += abs(crew_id[i]-job_id[i]);
    }

    return answer;
}