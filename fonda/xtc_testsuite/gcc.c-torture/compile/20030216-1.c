/* PR c/8086  */
// {{ dg-preprocess "Need preprocessing" }}
#define P(x) \
        ((((((((((((((((((((((((((((((((        \
         (x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)                 \
         *(x)+a)

int
polynomial(int a)
{
  return P(3);
}
