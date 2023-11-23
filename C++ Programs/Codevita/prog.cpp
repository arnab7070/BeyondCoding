#include <bits/stdc++.h>

using namespace std;

struct State {
  int amount;
  vector<int> cups_used;
};

bool is_full(State state, int jug_capacity) {
  return state.amount == jug_capacity;
}

bool is_valid(State state, int jug_capacity, vector<int>& cups) {
  return state.amount >= 0 && state.amount <= jug_capacity &&
         all_of(state.cups_used.begin(), state.cups_used.end(),
                 [cups](int cup) { return cup < cups.size() && cup >= 0; });
}

vector<int> solve_jugs_and_cups(int jug_capacity, vector<int>& cups) {
  queue<State> queue;
  queue.push({0, {}});

  while (!queue.empty()) {
    State state = queue.front();
    queue.pop();

    if (is_full(state, jug_capacity)) {
      return state.cups_used;
    }

    for (int i = 0; i < cups.size(); i++) {
      State new_state = {state.amount + cups[i], state.cups_used};
      new_state.cups_used.push_back(i);

      if (is_valid(new_state, jug_capacity, cups)) {
        queue.push(new_state);
      }
    }
  }

  return {};
}

int main() {
  int jug_capacity;
  cin >> jug_capacity;

  int n_cups;
  cin >> n_cups;

  vector<int> cups(n_cups);
  for (int i = 0; i < n_cups; i++) {
    cin >> cups[i];
  }

  vector<int> solution = solve_jugs_and_cups(jug_capacity, cups);

  if (solution.empty()) {
    cout << "No solution" << endl;
  } else {
    for (int i = 0; i < solution.size(); i++) {
      cout << solution[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
