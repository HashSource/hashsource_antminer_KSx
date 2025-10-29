int __fastcall read_sensor_temp_local_ks5(int a1, int *a2, _DWORD *a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r0
  int v13; // r1
  int v15; // r3
  int v16; // r2
  int v17; // [sp+8h] [bp-8h] BYREF
  int v18; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v13 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 488) + a9);
      *a3 = 0;
      *a2 = -64;
      v10 = sub_F0C4C(a1, v13, 0, &v17, &v18);
      if ( v10 == 1 )
      {
        v15 = HIBYTE(v17);
        v16 = v18;
        if ( *(_DWORD *)(a1 + 512) == 1 )
          v15 = HIBYTE(v17) - 64;
        *a2 = v15;
        *a3 = v16;
        return 0;
      }
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v10 = sub_F02EC(a1, a2, a3, a9);
    }
  }
  else
  {
    v10 = sub_F0050(a1, a2, a3, a9);
  }
  if ( v10 == -1 )
    return 4;
  return 0;
}
