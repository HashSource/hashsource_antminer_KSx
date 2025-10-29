int __fastcall target_to_diff_ltc(int a1)
{
  int v1; // r12
  int v2; // r2
  int v3; // r3
  unsigned __int64 v4; // r6
  unsigned __int64 v5; // t1
  int v6; // lr
  unsigned __int8 v7; // r1

  v1 = a1 + 32;
  v2 = 0;
  do
  {
    v3 = 63;
    v5 = *(_QWORD *)(v1 - 8);
    v1 -= 8;
    v4 = v5;
    do
    {
      v6 = (v4 >> v3--) & 1;
      v7 = v2 + 1;
      if ( v6 )
        return v2;
      v2 = v7;
    }
    while ( v3 != -1 );
  }
  while ( v1 != a1 );
  return v7;
}
