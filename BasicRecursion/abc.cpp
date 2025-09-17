#include <bits/stdc++.h>
using namespace std;

class GPUAllocator {
private:
    // Map process_id -> GPU id
    unordered_map<int, int> processToGPU;
    // Min-heap for available GPU IDs
    priority_queue<int, vector<int>, greater<int>> freeGPUs;
    int nextGPU; // Next GPU id to assign if no free one

public:
    GPUAllocator() {
        nextGPU = 1;
    }

    void addProcess(int process_id) {
        int gpu_id;
        if (!freeGPUs.empty()) {
            gpu_id = freeGPUs.top();
            freeGPUs.pop();
        } else {
            gpu_id = nextGPU++;
        }
        processToGPU[process_id] = gpu_id;
    }

    void removeProcess(int process_id) {
        if (processToGPU.find(process_id) != processToGPU.end()) {
            int gpu_id = processToGPU[process_id];
            freeGPUs.push(gpu_id); // Mark GPU as free
            processToGPU.erase(process_id);
        }
    }

    int smallestUnallocated() {
        if (!freeGPUs.empty()) {
            return freeGPUs.top();
        }
        return nextGPU; // Next available GPU id
    }
};

// Example usage
int main() {
    GPUAllocator gpu;

    gpu.addProcess(5);  // Process 5 -> GPU 1
    gpu.addProcess(2);  // Process 2 -> GPU 2
    cout << gpu.smallestUnallocated() << endl; // 3

    gpu.addProcess(6);  // Process 6 -> GPU 3
    cout << gpu.smallestUnallocated() << endl; // 4

    gpu.removeProcess(5); // Free GPU 1
    cout << gpu.smallestUnallocated() << endl; // 1

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day_, month_, year_;
    string formatStr_ = "dd/mm/yyyy";

    static bool isLeap(int y) {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    static int daysInMonth(int m, int y) {
        static int mdays[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if (m == 2 && isLeap(y)) return 29;
        return mdays[m];
    }

    static void validateDateValues(int d, int m, int y) {
        if (y < 0) throw invalid_argument("Invalid date");
        if (m < 1 || m > 12) throw invalid_argument("Invalid date");
        int dim = daysInMonth(m, y);
        if (d < 1 || d > dim) throw invalid_argument("Invalid date");
    }

    static string twoDigit(int v) {
        ostringstream oss;
        if (v < 10) oss << '0';
        oss << v;
        return oss.str();
    }

    static string fourDigit(int v) {
        ostringstream oss;
        oss << setw(4) << setfill('0') << v;
        return oss.str();
    }

    static string replace_first_occurrence(const string &s, const string &pat, const string &rep) {
        size_t pos = s.find(pat);
        if (pos == string::npos) return s;
        return s.substr(0, pos) + rep + s.substr(pos + pat.size());
    }

public:
    Date(int day, int month, int year) {
        validateDateValues(day, month, year);
        day_ = day;
        month_ = month;
        year_ = year;
    }

    void set_format(const string &fmt) {
        // Format must contain at least one "dd", "mm", and "yyyy"
        if (fmt.find("dd") == string::npos ||
            fmt.find("mm") == string::npos ||
            fmt.find("yyyy") == string::npos) {
            throw invalid_argument("Invalid date format provided.");
        }
        formatStr_ = fmt;
    }

    friend ostream& operator<<(ostream &os, const Date &d) {
        string out = d.formatStr_;
        // Replace only the first occurrence of each token
        out = replace_first_occurrence(out, "dd", twoDigit(d.day_));
        out = replace_first_occurrence(out, "mm", twoDigit(d.month_));
        out = replace_first_occurrence(out, "yyyy", fourDigit(d.year_));
        os << out;
        return os;
    }
};