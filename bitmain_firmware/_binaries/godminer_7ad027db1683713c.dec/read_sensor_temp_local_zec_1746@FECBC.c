int __fastcall read_sensor_temp_local_zec_1746(
        unsigned int *a1,
        unsigned int *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  int v11; // r0
  int v14; // r1
  unsigned int v15; // r3
  bool v16; // zf
  unsigned int v17; // r3
  unsigned int v18; // [sp+8h] [bp-8h] BYREF
  int v19; // [sp+Ch] [bp-4h] BYREF

  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v14 = *(unsigned __int8 *)(a1[116] + a9);
      *a3 = 0;
      *a2 = -64;
      v11 = sub_FEAC0((int)a1, v14, 0, &v18, &v19);
      if ( v11 == 1 )
      {
        v15 = v18;
        v16 = (v18 & 0xC1) == 1;
        *a3 = v19;
        if ( v16 )
        {
          v17 = HIBYTE(v15);
          *a2 = v17;
          if ( a1[122] == 1 )
            *a2 = v17 - 64;
        }
        return 0;
      }
    }
    else
    {
      if ( a6 != 2 )
        return 4;
      v11 = sub_FE260(a1 + 58, a2, a3, a9);
    }
  }
  else
  {
    v11 = sub_FDFC4((char *)a1 + 232, a2, a3, a9);
  }
  if ( v11 == -1 )
    return 4;
  return 0;
}
