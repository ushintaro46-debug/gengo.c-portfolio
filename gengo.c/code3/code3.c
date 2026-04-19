# include<stdio.h>

int main(void)
{
    int x;                      /* xはint型の変数 */
    x = 5;                      /* 変数xに5を代入 */

    printf("   x:%d\n", x);     /* xの値を表示 */
    printf("  &x:%p\n", &x);    /* xのアドレスを表示 */

    int *p_x;                   /* p_xはポインタ変数 */
    p_x = &x;                   /* ポインタ変数p_xにxのアドレスを代入 */

    printf(" p_x:%p\n", p_x);   /* p_xの値を表示 */
    printf("*p_x:%d\n", *p_x);  /* *p_xの値を表示 */
    return 0;
}
/*----実行結果------
   x:5
  &x:0x7ffeed0dca38
 p_x:0x7ffeed0dca38
*p_x:5
---------------- */