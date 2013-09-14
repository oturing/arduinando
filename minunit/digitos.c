/* digitos.c */

#include <stdio.h>
#include "minunit.h"

int tests_run = 0;

int contar_digitos(int n) {
  /* calcular quantidade de digitos no numero atual */
  int digitos = 0;
  if (n == 0) return 1;
  while (n > 0) {
    digitos++;
    n /= 10;
  }
  return digitos;
}

static char * test_0() {
    mu_assert("erro: contar_digitos(0) != 1", contar_digitos(0) == 1);
    return 0;
}

static char * test_1() {
    mu_assert("erro: contar_digitos(1) != 1", contar_digitos(1) == 1);
    return 0;
}

static char * test_10() {
    mu_assert("erro: contar_digitos(10) != 2", contar_digitos(10) == 2);
    return 0;
}

static char * test_123() {
    mu_assert("erro: contar_digitos(10) != 3", contar_digitos(123) == 3);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_0);
    mu_run_test(test_1);
    mu_run_test(test_10);
    mu_run_test(test_123);
    return 0;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);

    return result != 0;
}
