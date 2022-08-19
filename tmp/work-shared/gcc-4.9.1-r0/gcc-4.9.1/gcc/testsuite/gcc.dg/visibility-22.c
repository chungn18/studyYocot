/* PR target/32219 */
/* { dg-do run } */
/* { dg-require-visibility "" } */
/* { dg-options "-fPIC" { target fpic } } */

extern void f() __attribute__((weak,visibility("hidden")));
extern int puts( char const* );
int main()
{
  if (f)
    f();
  return 0;
}
