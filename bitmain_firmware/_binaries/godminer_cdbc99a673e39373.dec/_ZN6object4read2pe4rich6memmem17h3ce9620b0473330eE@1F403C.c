int __fastcall object::read::pe::rich::memmem(int a1, unsigned int a2, void *s2, size_t n, int a5)
{
  size_t v8; // r7
  unsigned int v10; // r4

  v8 = a5 + a2;
  v10 = 0;
  while ( 1 )
  {
    v8 -= a5;
    if ( v8 < n )
      return 0;
    if ( !bcmp((const void *)(a1 + v10), s2, n) )
      break;
    v10 += a5;
    if ( v10 > a2 )
      return 0;
  }
  return 1;
}
