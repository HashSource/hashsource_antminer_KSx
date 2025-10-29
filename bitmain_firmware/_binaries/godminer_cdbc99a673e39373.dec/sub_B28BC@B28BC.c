int sub_B28BC()
{
  int v0; // r4
  __int64 v1; // r0
  _DWORD *v2; // r6
  __int64 *v3; // r5
  __int64 v4; // r2
  __int64 v5; // r0
  int v7; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v7 = 0;
  LODWORD(v1) = get_all_created_runtime(&v7);
  if ( v7 > 0 )
  {
    v2 = (_DWORD *)(v1 - 4);
    do
    {
      while ( 1 )
      {
        ++v2;
        ++v0;
        LODWORD(v1) = update_hashrate();
        v3 = (__int64 *)v1;
        if ( *(_QWORD *)v1 )
          break;
        if ( v7 <= v0 )
          return v1;
      }
      subject_notify_all(dword_2D5D6C, *v2);
      v4 = *v3;
      v5 = v3[1];
      v3[1] = 0;
      v1 = v4 & ~v5;
      *v3 = v1;
    }
    while ( v7 > v0 );
  }
  return v1;
}
