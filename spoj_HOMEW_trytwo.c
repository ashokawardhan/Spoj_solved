#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>

void gcd( mpz_t , mpz_t , mpz_t );

main (int argc, char *argv[]) {
  mpz_t n, c, x1, x2, product, t, g, t1, t2;
  unsigned long max, range, terms, j, ans;

  mpz_init (n);
  mpz_init (c);
  mpz_init (x1);
  mpz_init (x2);
  mpz_init (product);
  mpz_init (t);
  mpz_init (g);
  mpz_init (t1);
  mpz_init (t2);

initialize:
  mpz_set_str (n, argv[1], 10);
  gmp_printf("n = %Zd\n", n);
  mpz_set_str (c, argv[2], 10);
  max = atoi(argv[3]);

restart:
  mpz_set_ui (x1, 2);
  mpz_add_ui (x2, c, 4);
  range = 1;
  mpz_set_ui (product, 1);
  terms = 0;

compute_diff:
  while ( terms <= max ) {
    for (j=1; j<=range; j++) {
      mpz_mul (t, x2, x2);
      mpz_add (t, t, c);
      mpz_fdiv_r ( x2, t, n );
      mpz_sub (t, x1, x2);
      mpz_mul (t, product, t);
      mpz_fdiv_r (product, t, n);
      terms++;
      if ((terms%10) == 0) {
        mpz_set (t1, n);
        mpz_set (t2, product);
        gcd (g, t1, t2);
        if (mpz_cmp_ui (g, 1) > 0) {
          gmp_printf("g = %Zd\n",g);
          goto terminate;
        }
        mpz_set_ui (product, 1);
      }
    }

reset:
    mpz_set (x1, x2);
    range = 2*range;
    for (j=1; j<=range; j++) {
      mpz_mul (t, x2, x2);
      mpz_add (t, t, c);
      mpz_fdiv_r (x2, t, n);
    }
  }

  gmp_printf("n = %Zd --- no factor found for c = %Zd!!!\n", n, c);
  printf("Enter 1 to input new c, 0 to stop\n");
  scanf("%d",&ans);
  if (ans != 1) goto terminate;
  printf("Enter new c value:");
  gmp_scanf("%Zd",&c);
  goto restart;

terminate:
  mpz_clear (g);
  mpz_clear (t);
  mpz_clear (product);
  mpz_clear (x2);
  mpz_clear (x1);
  mpz_clear (c);
  mpz_clear (n);
  mpz_clear (t1);
  mpz_clear (t2);
  exit (0);

}

void gcd( mpz_t g, mpz_t a, mpz_t b ) {
  mpz_t temp;
  mpz_init (temp);
  while ( mpz_cmp_ui (b, 0) > 0 ) {

    mpz_set (temp, b);
    mpz_fdiv_r (b, a, b);
    mpz_set (a, temp);

  }

  mpz_mul_ui (a, a, mpz_sgn (a));
  mpz_set (g, a);
  mpz_clear (temp);
  return;
}
