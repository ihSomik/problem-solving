class Solution {
 public:
  int calPoints(vector<string>& operations) {
    stack<int> s;

    for (const auto& u : operations) {
      if (isdigit(u[0]) || u[0] == '-' && u.size() > 1)
        s.push(stoi(u));
      else if (u == "+") {
        int t1 = s.top();
        s.pop();
        int t2 = s.top();
        s.push(t1);
        s.push(t1 + t2);
      } else if (u == "D")
        s.push(2 * s.top());
      else if (u == "C")
        s.pop();
    }

    int sum = 0;
    while (!s.empty()) {
      sum += s.top();
      s.pop();
    }

    return sum;
  }
};
