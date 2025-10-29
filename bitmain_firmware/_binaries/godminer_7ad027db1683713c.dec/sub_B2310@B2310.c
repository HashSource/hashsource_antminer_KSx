int sub_B2310()
{
  int v0; // r4
  __int64 v1; // r0
  int *v2; // r6
  int v3; // t1
  __int64 *v4; // r5
  __int64 v5; // r2
  __int64 v6; // r0
  int v8; // [sp+4h] [bp-4h] BYREF

  v0 = 0;
  v8 = 0;
  LODWORD(v1) = get_all_created_runtime(&v8);
  if ( v8 > 0 )
  {
    v2 = (int *)(v1 - 4);
    do
    {
      while ( 1 )
      {
        v3 = v2[1];
        ++v2;
        ++v0;
        LODWORD(v1) = update_fanspeed(
                        (char *)v3,
                        &dword_2D3B30[54 * *(_DWORD *)(v3 + 228)],
                        &byte_2D3630[80 * *(_DWORD *)(v3 + 228)]);
        v4 = (__int64 *)v1;
        if ( *(_QWORD *)v1 )
          break;
        if ( v8 <= v0 )
          return v1;
      }
      subject_notify_all(dword_2D48B0, *v2);
      v5 = *v4;
      v6 = v4[1];
      v4[1] = 0;
      v1 = v5 & ~v6;
      *v4 = v1;
    }
    while ( v8 > v0 );
  }
  return v1;
}
