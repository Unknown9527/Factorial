# Factorial
A function for calculating factorial; implemented in both recursive and non-recursive

Run with
```
bazel run src/main:main
```

Test with
```
bazel test tests:tests
```

// this function will not work if the input number is larger than 13
// since 13!=7227020800 and 14!=8.71782912*(10^10)
// 14! is too big to show the accurate result in my Casio caculator. 
// In order to improve the efficiency of coding, the code did not consider the number larger than 13. 
