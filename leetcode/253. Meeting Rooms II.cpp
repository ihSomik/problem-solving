class Solution {
   public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        vector<int> start_times;
        vector<int> end_times;

        for (auto interval : intervals) {
            start_times.push_back(interval[0]);
            end_times.push_back(interval[1]);
        }

        sort(start_times.begin(), start_times.end());
        sort(end_times.begin(), end_times.end());

        int i = 0, j = 0;
        int rooms = 0, max_rooms = 0;
        int meetings = start_times.size();

        while (i < meetings) {
            if (end_times[j] <= start_times[i]) {
                rooms--;
                j++;
            }
            rooms++;
            max_rooms = max(max_rooms, rooms);
            i++;
        }
        return max_rooms;
    }
};
