int __fastcall hashtable_clear(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r2
  _DWORD *v4; // r3
  _DWORD *v5; // r1

  sub_928A8((int)a1);
  result = a1[2];
  v3 = a1 + 3;
  if ( 1 << result )
  {
    v4 = (_DWORD *)a1[1];
    v5 = (_DWORD *)((char *)v4 + (8 << result));
    do
    {
      v4[1] = v3;
      *v4 = v3;
      v4 += 2;
    }
    while ( v4 != v5 );
  }
  a1[4] = v3;
  a1[3] = v3;
  a1[6] = a1 + 5;
  a1[5] = a1 + 5;
  *a1 = 0;
  return result;
}
