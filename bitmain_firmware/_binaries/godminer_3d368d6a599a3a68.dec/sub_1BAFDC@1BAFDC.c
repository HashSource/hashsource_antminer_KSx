int __fastcall sub_1BAFDC(int result, int *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r7
  int v6; // r8
  int v7; // r4
  unsigned int v8; // r11
  unsigned int v9; // lr
  int v10; // r5
  unsigned int v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r3
  char v15; // r1
  int *v16; // r7
  int v17; // r10
  int v18; // r1
  int v19; // r12
  int v20; // r5
  unsigned int *v21; // r7
  int v22; // r6
  unsigned int v23; // r3
  unsigned int v24; // r1
  int v25; // r2
  int v26; // r4
  int v27; // r4
  int v28; // r2
  int i; // [sp+0h] [bp-18h]
  int v30; // [sp+Ch] [bp-Ch]
  __int16 v31; // [sp+10h] [bp-8h]
  int v32; // [sp+12h] [bp-6h]
  __int16 v33; // [sp+16h] [bp-2h]

  v2 = *a2;
  v3 = a2[1];
  v4 = 0;
  if ( v3 )
  {
    v6 = v2 + v3;
    v4 = v2 + 1;
    v7 = 1 - v3;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)(v4 - 1);
      if ( v10 == 63 && v11 >= 2 )
      {
        *a2 = v4;
        v15 = 6;
        LOBYTE(v11) = 0;
        a2[1] = -v7;
        goto LABEL_15;
      }
      v12 = v11 & 0x7F;
      v13 = v12 << (v10 & 0x3F);
      if ( (v10 & 0x3F) - 32 >= 0 )
        v13 = 0;
      v8 |= v13;
      v14 = v12 >> (32 - (v10 & 0x3F));
      if ( (v10 & 0x3F) - 32 >= 0 )
        v14 = v12 << ((v10 & 0x3F) - 32);
      v9 |= v14;
      if ( (char)v11 > -1 )
        break;
      ++v7;
      ++v4;
      v10 += 7;
      if ( v7 == 1 )
      {
        v4 = 0;
        *a2 = v6;
        a2[1] = 0;
        goto LABEL_13;
      }
    }
    a2[1] = -v7;
    *a2 = v4;
    if ( v8 | v9 )
    {
      v16 = (int *)a2[4];
      if ( v9 || v8 - 1 >= v16[5] )
      {
        v19 = v16[1];
        if ( v19 )
        {
          for ( i = *v16; ; --i )
          {
            v17 = v19 - 16;
            v20 = -1;
            v21 = (unsigned int *)v19;
            v22 = 8 * *(unsigned __int16 *)(v19 + 1238);
            do
            {
              if ( !v22 )
              {
                v20 = *(unsigned __int16 *)(v19 + 1238);
                goto LABEL_33;
              }
              v23 = *v21;
              ++v20;
              v24 = v21[1];
              v17 += 104;
              v25 = *v21 ^ v8;
              v22 -= 8;
              v21 += 2;
              v26 = v25 | v24 ^ v9;
              v27 = v26 != 0;
              if ( __PAIR64__(v9, v8) < __PAIR64__(v24, v23) )
                v27 = -1;
            }
            while ( v27 == 1 );
            if ( !(_BYTE)v27 )
              goto LABEL_20;
LABEL_33:
            if ( !i )
              break;
            v19 = *(_DWORD *)(v19 + 4 * v20 + 1240);
          }
        }
        *(_DWORD *)(result + 4) = 0;
        *(_BYTE *)result = 18;
      }
      else
      {
        v17 = v16[4] + 104 * (v8 - 1);
LABEL_20:
        v18 = *(unsigned __int8 *)(v17 + 98);
        *(_DWORD *)(result + 4) = v17;
        if ( v18 == 1 )
          ++a2[2];
        *(_BYTE *)result = 75;
      }
    }
    else
    {
      *(_DWORD *)(result + 4) = 0;
      v28 = a2[2];
      *(_BYTE *)result = 75;
      a2[2] = v28 - 1;
      return v28 - 1;
    }
  }
  else
  {
    LOBYTE(v11) = 0;
    v6 = *a2;
LABEL_13:
    v31 = v33;
    v15 = 19;
    v30 = v32;
LABEL_15:
    *(_DWORD *)(result + 8) = v6;
    *(_DWORD *)(result + 12) = v4;
    *(_WORD *)(result + 6) = v31;
    *(_DWORD *)(result + 2) = v30;
    *(_BYTE *)(result + 1) = v11;
    *(_BYTE *)result = v15;
  }
  return result;
}
