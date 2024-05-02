#include <iostream>
#include <cmath>

using namespace std;

float distance(int x1, int y1, int x2, int y2) {
  float diffX = x2 - x1;
  float diffY = y2 - y1;

  float squaredDiffX = pow(diffX, 2);
  float squaredDiffY = pow(diffY, 2);

  float squaredDistance = squaredDiffX + squaredDiffY;

  return sqrt(squaredDistance);
}

int main() {
  int x1, y1, x2, y2;

  cout << "Enter the coordinates of the first point (x1, y1): ";
  cin >> x1 >> y1;

  cout << "Enter the coordinates of the second point (x2, y2): ";
  cin >> x2 >> y2;

  float distanceBetweenPoints = distance(x1, y1, x2, y2);

  string output = "Distance between point 1 (" + to_string(x1) + ", " + to_string(y1) + ") and point 2 (" + to_string(x2) + ", " + to_string(y2) + ") is: " + to_string(distanceBetweenPoints);

  cout << output << endl;

  return 0;
}
