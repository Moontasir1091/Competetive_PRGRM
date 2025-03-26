
// lower bound:  oi element present thakle oi eleement else just boro value return kore.
int lower_bound(vector<int> &v, int element){
    int lo = 0; 
    int hi = v.size()-1;
    int mid;
    while(hi - lo > 1){
        mid = (hi+lo)/2;
        if(v[mid] < element){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
        
    }
    if(v[lo] >= element){
        return lo;
    }
    if(v[hi] >= element){
        return hi;
    }
    else{
        return -1;
    }
}

// upper bound:  oi element ar just boro value return kore.

int upper_bound(vector<int> &v, int element){
    int lo = 0; 
    int hi = v.size()-1;
    int mid;
    while(hi - lo > 1){
        mid = (hi+lo)/2;
        if(v[mid] <= element){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
        
    }
    if(v[lo] > element){
        return lo;
    }
    if(v[hi] > element){
        return hi;
    }
    else{
        return -1;
    }
}