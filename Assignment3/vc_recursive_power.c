int vc_recursive_power(int n, int power) {
  if (power == 1) { return n; }
  return n * vc_recursive_power(n, power - 1);
}
