int __fastcall read_sensor_temp_local_zec_1746(
        int a1,
        unsigned int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v10; // r0
  int v13; // r1
  unsigned int v15; // r3
  bool v16; // zf
  unsigned int v17; // r3
  unsigned int v18; // [sp+8h] [bp-8h] BYREF
  int v19; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v13 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 488) + a9);
      *a3 = 0;
      *a2 = -64;
      v10 = sub_113180(a1, v13, 0, &v18, &v19);
      if ( v10 == 1 )
      {
        v15 = v18;
        v16 = (v18 & 0xC1) == 1;
        *a3 = v19;
        if ( v16 )
        {
          v17 = HIBYTE(v15);
          *a2 = v17;
          if ( *(_DWORD *)(a1 + 512) == 1 )
            *a2 = v17 - 64;
        }
        return 0;
      }
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v10 = sub_11230C(a1, a2, a3, a9);
    }
  }
  else
  {
    v10 = sub_112070(a1, a2, a3, a9);
  }
  if ( v10 == -1 )
    return 4;
  return 0;
}
