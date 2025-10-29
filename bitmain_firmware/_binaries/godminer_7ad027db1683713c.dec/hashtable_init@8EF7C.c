int __fastcall hashtable_init(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r12
  _DWORD *v4; // r3
  _DWORD *v5; // r1
  int v6; // r2
  _DWORD *v7; // r2

  *a1 = 0;
  a1[2] = 3;
  v2 = jsonp_malloc((void *)0x40);
  a1[1] = v2;
  if ( !v2 )
    return -1;
  v3 = a1[2];
  v4 = a1 + 3;
  v5 = a1 + 5;
  v6 = 1 << v3;
  a1[4] = a1 + 3;
  a1[3] = a1 + 3;
  if ( 1 << v3 )
    v6 = 8;
  a1[6] = v5;
  a1[5] = v5;
  if ( 1 << v3 )
  {
    v7 = (_DWORD *)((char *)v2 + (v6 << v3));
    do
    {
      v2[1] = v4;
      *v2 = v4;
      v2 += 2;
    }
    while ( v2 != v7 );
  }
  return 0;
}
