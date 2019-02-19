int vc_recursive_factorial(int n) {
  if (n == 1) { return 1; }
  return n * vc_recursive_factorial(n - 1);
}
