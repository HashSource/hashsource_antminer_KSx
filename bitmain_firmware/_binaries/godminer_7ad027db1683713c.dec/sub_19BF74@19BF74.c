void __fastcall sub_19BF74(void **a1)
{
  void *v2; // r0
  char *v3; // r5
  int v4; // r7
  int v5; // r6
  void **v6; // r4

  v2 = a1[1];
  if ( v2 )
  {
    v3 = (char *)*a1;
    v4 = 0;
    v5 = 40 * (_DWORD)v2;
    do
    {
      v6 = (void **)&v3[v4];
      if ( !*(_DWORD *)&v3[v4 + 8] )
      {
        if ( v6[6] )
          _rust_dealloc(v6[5]);
        if ( v6[8] )
          _rust_dealloc(v6[7]);
      }
      v4 += 40;
    }
    while ( v5 != v4 );
    if ( a1[1] )
      _rust_dealloc(*a1);
  }
}
