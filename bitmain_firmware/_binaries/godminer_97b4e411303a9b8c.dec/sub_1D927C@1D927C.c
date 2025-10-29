int __fastcall sub_1D927C(int a1, int a2)
{
  unsigned __int8 *v3; // r6
  int v4; // r7
  int v6; // r3
  unsigned int v7; // lr
  int v8; // r12
  __int16 v9; // r0
  unsigned __int8 *v10; // r4
  int v11; // r8
  unsigned __int8 *v12; // r11
  int v13; // r1
  unsigned __int8 *v14; // r4
  int v15; // r7
  int v16; // r9
  int v17; // r12
  unsigned __int8 *v18; // r0
  unsigned int v19; // r1
  bool v20; // zf
  unsigned __int8 *v22; // [sp+4h] [bp-18h]
  int v23; // [sp+8h] [bp-14h]
  int v24; // [sp+Ch] [bp-10h]
  char v25; // [sp+14h] [bp-8h] BYREF
  int v26; // [sp+15h] [bp-7h]

  v3 = *(unsigned __int8 **)a2;
  v4 = *(_DWORD *)(a2 + 4);
  sub_1D8308((int)&v25, (unsigned __int8 **)a2);
  if ( !v25 )
    goto LABEL_20;
  v8 = v26;
  v9 = 0;
  v10 = *(unsigned __int8 **)a2;
  v11 = *(_DWORD *)(a2 + 4);
  if ( v11 )
  {
    v12 = v10 + 1;
    if ( *v10 == 58 )
    {
      v13 = v11 - 1;
      v22 = *(unsigned __int8 **)a2;
      v23 = v26;
      v14 = v10 + 1;
      v24 = v4;
      v15 = 0;
      LOWORD(v6) = 0;
      while ( 1 )
      {
        v16 = 0;
        if ( v13
          && (v17 = v13 - 1,
              v18 = v12 + 1,
              v16 = 0,
              v7 = *v12 - 48,
              *(_DWORD *)a2 = v12 + 1,
              *(_DWORD *)(a2 + 4) = v13 - 1,
              v7 < 0xA) )
        {
          v16 = 1;
        }
        else
        {
          v17 = v13;
          v18 = v12;
          *(_DWORD *)a2 = v12;
          *(_DWORD *)(a2 + 4) = v13;
        }
        if ( v16 != 1 )
          break;
        v19 = 10 * (unsigned __int16)v6;
        if ( HIWORD(v19) )
          goto LABEL_16;
        v6 = (unsigned __int16)v19 + (unsigned __int16)v7;
        v20 = HIWORD(v7) == 0;
        if ( !HIWORD(v7) )
          v20 = (unsigned __int16)v6 == v6;
        if ( !v20 )
          goto LABEL_16;
        --v15;
        v13 = v17;
        v12 = v18;
      }
      if ( !v15 )
      {
LABEL_16:
        *(_DWORD *)(a2 + 4) = v11 - 1;
        v9 = 0;
        *(_DWORD *)a2 = v14;
        goto LABEL_17;
      }
      v9 = 1;
LABEL_17:
      v4 = v24;
      v10 = v22;
      v8 = v23;
      if ( v9 == 1 )
        goto LABEL_19;
    }
  }
  *(_DWORD *)a2 = v10;
  *(_DWORD *)(a2 + 4) = v11;
  if ( v9 )
  {
LABEL_19:
    *(_DWORD *)(a1 + 2) = v8;
    *(_WORD *)a1 = 1;
    *(_WORD *)(a1 + 6) = v6;
    return 1;
  }
  else
  {
LABEL_20:
    *(_DWORD *)a2 = v3;
    *(_DWORD *)(a2 + 4) = v4;
    *(_WORD *)a1 = 0;
    return 0;
  }
}
