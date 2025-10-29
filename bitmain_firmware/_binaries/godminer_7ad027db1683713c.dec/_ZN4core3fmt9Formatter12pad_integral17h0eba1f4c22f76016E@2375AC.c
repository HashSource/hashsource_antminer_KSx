int __fastcall core::fmt::Formatter::pad_integral(int a1, int a2, char *a3, unsigned int a4, int a5, int a6)
{
  char *v7; // r6
  int v9; // r4
  int v10; // r9
  unsigned int v11; // r5
  int v12; // r11
  int v13; // r0
  unsigned int v14; // r1
  int v15; // t1
  unsigned int v16; // r8
  int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // r4
  int v20; // r4
  int v21; // r3
  int v22; // r6
  int v24; // r3
  int v25; // r3
  int v26; // r6
  int v27; // r4
  int v28; // r5
  int v29; // r6
  int v30; // r8
  unsigned int v31; // r5
  int v32; // r7
  int v33; // r5
  unsigned int v34; // r0
  char v35; // [sp+8h] [bp-14h]
  int v36; // [sp+Ch] [bp-10h]
  int v37; // [sp+10h] [bp-Ch]

  v7 = a3;
  if ( !a2 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    v11 = a6 + 1;
    v10 = 45;
    v12 = a5;
    if ( (v9 & 4) != 0 )
      goto LABEL_5;
LABEL_13:
    v7 = 0;
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_25;
    goto LABEL_14;
  }
  v9 = *(_DWORD *)(a1 + 24);
  v10 = 43;
  if ( (v9 & 1) == 0 )
    v10 = 1114112;
  v11 = (*(_DWORD *)(a1 + 24) & 1) + a6;
  v12 = a5;
  if ( (v9 & 4) == 0 )
    goto LABEL_13;
LABEL_5:
  if ( a4 >= 0x10 )
  {
    v13 = core::str::count::do_count_chars(a3, a4);
  }
  else
  {
    v13 = 0;
    if ( a4 )
    {
      v14 = a4;
      do
      {
        v15 = *a3++;
        if ( v15 > -65 )
          ++v13;
        --v14;
      }
      while ( v14 );
    }
  }
  v11 += v13;
  if ( !*(_DWORD *)(a1 + 8) )
  {
LABEL_25:
    v20 = *(_DWORD *)a1;
    v24 = (int)v7;
    v22 = *(_DWORD *)(a1 + 4);
    if ( !sub_2378EC(*(_DWORD *)a1, v22, v10, v24, a4) )
      return (*(int (__fastcall **)(int, int, int))(v22 + 12))(v20, v12, a6);
    return 1;
  }
LABEL_14:
  v16 = *(_DWORD *)(a1 + 12);
  if ( v16 <= v11 )
  {
    v20 = *(_DWORD *)a1;
    v21 = (int)v7;
    v22 = *(_DWORD *)(a1 + 4);
    if ( !sub_2378EC(*(_DWORD *)a1, v22, v10, v21, a4) )
      return (*(int (__fastcall **)(int, int, int))(v22 + 12))(v20, v12, a6);
    return 1;
  }
  if ( (v9 & 8) != 0 )
  {
    v25 = (int)v7;
    v26 = *(_DWORD *)a1;
    v27 = *(_DWORD *)(a1 + 4);
    v36 = *(_DWORD *)(a1 + 28);
    v35 = *(_BYTE *)(a1 + 32);
    *(_DWORD *)(a1 + 28) = 48;
    *(_BYTE *)(a1 + 32) = 1;
    if ( !sub_2378EC(v26, v27, v10, v25, a4) )
    {
      v28 = v16 - v11 + 1;
      while ( --v28 )
      {
        if ( (*(int (__fastcall **)(int, int))(v27 + 16))(v26, 48) )
          return 1;
      }
      if ( !(*(int (__fastcall **)(int, int, int))(v27 + 12))(v26, v12, a6) )
      {
        *(_BYTE *)(a1 + 32) = v35;
        *(_DWORD *)(a1 + 28) = v36;
        return 0;
      }
    }
    return 1;
  }
  v17 = *(unsigned __int8 *)(a1 + 32);
  v18 = v16 - v11;
  v37 = (int)v7;
  if ( v17 == 3 )
    v17 = 1;
  if ( (v17 & 3) == 0 )
  {
    v19 = v16 - v11;
LABEL_34:
    v18 = v17;
    goto LABEL_35;
  }
  if ( v17 != 1 )
  {
    v17 = v18 >> 1;
    v19 = (v18 + 1) >> 1;
    goto LABEL_34;
  }
  v19 = 0;
LABEL_35:
  v29 = *(_DWORD *)a1;
  v30 = *(_DWORD *)(a1 + 4);
  v31 = v18 + 1;
  v32 = *(_DWORD *)(a1 + 28);
  while ( --v31 )
  {
    if ( (*(int (__fastcall **)(int, int))(v30 + 16))(v29, v32) )
      return 1;
  }
  if ( v32 == 1114112
    || sub_2378EC(v29, v30, v10, v37, a4)
    || (*(int (__fastcall **)(int, int, int))(v30 + 12))(v29, v12, a6) )
  {
    return 1;
  }
  v33 = 0;
  while ( v19 != v33 )
  {
    ++v33;
    if ( (*(int (__fastcall **)(int, int))(v30 + 16))(v29, v32) )
    {
      v34 = v33 - 1;
      return v34 < v19;
    }
  }
  v34 = v19;
  return v34 < v19;
}
