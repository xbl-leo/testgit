void f5124a( int a )
{
    if (a > 0)
    {
        typedef unsigned char UC;               /* Message 2404 */
        int x = 0;                              /*  */
        struct ST {int m; int n;} stx;          /* Message 2403 */

        stx.m = x;
    }
}

void f5124b(void)
{
  int i;

  i = 1;

  float f;                /* Message 0604 */

  f = 2.5F;

}

void f5124c(void)
{
    for (int i = 0; i < 10; ++i)           /* Message 0320 and also 3220 */
    {

    }
}
