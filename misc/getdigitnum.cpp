int getDigitNum(const int num, const int digit) {
  int pd = digit + 1;
  int dp1 = (int)pow(10, (float)pd);
  int dn0 = (int)pow(10, (float)digit);
  int t = num % dp1;
  return t/dn0;
}
