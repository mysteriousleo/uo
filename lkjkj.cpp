#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int total_chapters;
    cin >> total_chapters;

    int start_day;
    cin >> start_day;

    int end_day;
    cin >> end_day;

    // Calculate the total number of days between start day and end day (inclusive)
    long long totalDays = static_cast<long long>(end_day) - start_day + 1;

    // Calculate the number of chapters the student will miss
    long long missedChapters = totalDays % total_chapters;

    cout << "The student will miss lectures on " << missedChapters << " chapters." << endl;

    return 0;
}

