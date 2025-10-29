void __fastcall sub_19CF2C(void **a1)
{
  void *v2; // r0
  void **v3; // r5
  int v4; // r6

  v2 = a1[1];
  if ( v2 )
  {
    v3 = (void **)((char *)*a1 + 4);
    v4 = 12 * (_DWORD)v2;
    do
    {
      if ( *(v3 - 1) )
        _rust_dealloc(*v3);
      v4 -= 12;
      v3 += 3;
    }
    while ( v4 );
    if ( a1[1] )
      _rust_dealloc(*a1);
  }
}
