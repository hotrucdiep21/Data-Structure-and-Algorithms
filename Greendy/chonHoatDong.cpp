#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Activity {
    int start, end;
};

bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

void selectActivities(vector<Activity>& activities) {
    sort(activities.begin(), activities.end(), compare);

    vector<Activity> selectedActivities;
    selectedActivities.push_back(activities[0]);

    for (size_t i = 1; i < activities.size(); ++i) {
        if (activities[i].start >= selectedActivities.back().end) {
            selectedActivities.push_back(activities[i]);
        }
    }

    cout << "Selected Activities:\n";
    for (const Activity& activity : selectedActivities) {
        cout << "Start time: " << activity.start << ", End time: " << activity.end << endl;
    }
}

int main() {
    vector<Activity> activities = {{1, 3}, {2, 5}, {3, 6}, {5, 7}, {8, 9}, {6, 10}};
    selectActivities(activities);

    return 0;
}
