int iterative_factorial(int n) {
  int result;
  for (int i = 1; i <= n; i++) {
    if (i == 1) {
      result = i;
    } else {
      result = result * i;
    }
  }
  return result;
}
