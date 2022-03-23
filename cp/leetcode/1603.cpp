// https://leetcode.com/problems/design-parking-system/

// O(n) - loop
class ParkingSystem {
 public:
  array<int, 3> ar;
  ParkingSystem(int big, int medium, int small) {
    ar[0] = big;
    ar[1] = medium;
    ar[2] = small;
  }

  bool addCar(int carType) {
    if (ar[--carType] > 0) {
      ar[carType]--;
      return true;
    }
    return false;
  }
};
