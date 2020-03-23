extern int *px;
extern int *qx;

extern void foo(void)
{
    long s;

    px = px + 2;                /* Message 3705 */
    s = qx - px;                /* Message 3705 */

    px = px + 1;                /* Message 3705 */
    ++px;                       /* Message 3705 */
    qx--;                       /* Message 3707 */

}
