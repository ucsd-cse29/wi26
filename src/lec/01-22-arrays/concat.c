#include <stdio.h>
#include <stdint.h>

// vector_sum: takes two vectors represented as array of double and adds them
// together by adding the components at each index. Return a new array
// vector_sum({ 1.2, 3.4 }, {-1.0, 3.6 }) => { 0.2, 7.0 }
// Assume the vectors have the same length

/* Q: What happens if double[] is used as a return type?

double[] vector_sum(double vec1[], double vec2[]);
*/

/* We can use double* as a return type though!
   Q: What problem will we have with this version?

double* vector_sum(double vec1[], double vec2[]) {
  double result[...];
}
*/

// Pass in length as an argument. Maybe now we've got it!
double* vector_sum(double vec1[], double vec2[], int len) {
  double result[len];
  printf("vec1:\t%p\nvec2:\t%p\nresult:\t%p\n", vec1, vec2, result);
  for(int i = 0; i < len; i += 1) {
    result[i] = vec1[i] + vec2[i];
  }
  return result;
}

int main() {
  double v1[] = { 1.3, 4.2 };
  double v2[] = { 1.5, -1 };
  double* v3 = vector_sum(v1, v2, 2);

  double v4[] = { 100, 100 };
  double* v5 = vector_sum(v4, v3, 2);

  printf("first element of v3, v5: %f %f\n", v3[0], v5[0]);

  printf("v1: %p\n", v1);
  printf("v2: %p\n", v2);
  printf("v3: %p\n", v3);
  printf("v4: %p\n", v4);
  printf("v5: %p\n", v5);

}



