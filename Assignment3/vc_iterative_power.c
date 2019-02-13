int iterative_power(int n, int power) {
  int result;
  for (int i = 0; i < power; i++) {
    if (i == 0) {
      result = n;
    } else {
      result = result * n;
    }
  }
  return result;
}
