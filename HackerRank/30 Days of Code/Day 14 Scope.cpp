#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
        Difference(vector<int> arr){
            this -> elements = arr;
            maximumDifference=0;
        }
        void computeDifference(){
            int max = elements[0], min = elements[0];
            int len;
            len = elements.size();
            //cout<<len<<" ;";
            for (int i = 0; i < len; i++){
                //cout<<elements[i]<<" ";
                if (elements[i] > max){
                    max = elements[i];
                }
                if (elements[i] < min){
                    min = elements[i];
                }
            }
            //cout<<min<<" "<<max<<" ";
            maximumDifference = max-min;
      }
}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
