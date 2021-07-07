//
//  main.cpp
//  Attending Workshops
//
//  Created by Aarnav Gupta on 07/07/21.
//

#include <algorithm>
#include<iostream>
#include<vector>

using namespace std;

struct Workshop {
    int start_time;
    int duration;
    int end_time;
};

struct Available_Workshops {
    int n;
    vector<Workshop> workshops;
};

Available_Workshops* initialize(int *start_time, int duration[], int n) {
    Available_Workshops *work_ptr = new Available_Workshops();
    
    for(int i = 0; i < n; i++) {
        Workshop w;
        w.start_time = start_time[i];
        w.duration = duration[i];
        w.end_time = start_time[i] + duration[i];
        work_ptr -> workshops.push_back(w);
    }
    
    return work_ptr;
}

int CalculateMaxWorkshops(Available_Workshops* ptr) {
    sort(ptr -> workshops.begin(), ptr -> workshops.end(), [](Workshop w1, Workshop w2) {
                                                               return w1.end_time < w2.end_time;
                                                           });
    int cur_end_time = 0, max_ans = 0;
    for(Workshop &w : ptr -> workshops) {
        if(w.start_time >= cur_end_time) {
            max_ans++;
            cur_end_time = w.end_time;
        }
    }
    return max_ans;
}

int main(int argc, char *argv[]) {
    int n; // number of workshops
    cin >> n;
    // create arrays of unknown size n
    int* start_time = new int[n];
    int* duration = new int[n];

    for(int i=0; i < n; i++){
        cin >> start_time[i];
    }
    for(int i = 0; i < n; i++){
        cin >> duration[i];
    }

    Available_Workshops * ptr;
    ptr = initialize(start_time,duration, n);
    cout << CalculateMaxWorkshops(ptr) << endl;
    return 0;
}
