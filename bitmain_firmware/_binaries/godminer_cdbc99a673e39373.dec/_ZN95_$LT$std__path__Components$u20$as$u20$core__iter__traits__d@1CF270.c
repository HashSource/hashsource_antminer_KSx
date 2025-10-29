int __fastcall <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(
        int a1,
        int a2)
{
  int v2; // r5
  unsigned int v3; // r7
  unsigned int v4; // r4
  bool v5; // zf
  int result; // r0
  unsigned int v7; // r0
  int v8; // r2
  int v9; // r1
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // r11
  int v12; // r10
  bool v13; // zf
  int v14; // r11
  unsigned int v15; // r7
  unsigned __int8 v16; // r1
  _BOOL4 v17; // r0
  int v18; // r6
  int v19; // r9
  int v20; // r8
  bool v21; // zf
  unsigned int v22; // r7
  int v23; // r1
  char v24; // r1
  unsigned int v25; // r7
  unsigned int v26; // r7
  int v27; // r1
  unsigned __int8 v29; // [sp+8h] [bp-4Ch]
  int v30; // [sp+Ch] [bp-48h]
  int v31; // [sp+10h] [bp-44h]
  unsigned int v32; // [sp+1Ch] [bp-38h]
  _BYTE dest[19]; // [sp+20h] [bp-34h] BYREF
  unsigned int v34; // [sp+34h] [bp-20h] BYREF
  int v35; // [sp+38h] [bp-1Ch]
  int v36; // [sp+3Ch] [bp-18h]
  unsigned __int8 v37; // [sp+40h] [bp-14h]
  _BYTE v38[19]; // [sp+41h] [bp-13h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 28);
  v5 = v4 == 3;
  if ( v4 != 3 )
  {
    v3 = *(unsigned __int8 *)(a2 + 29);
    v2 = a2;
    v5 = v3 == 3;
  }
  if ( v5 || v4 > v3 )
  {
LABEL_5:
    *(_BYTE *)(a1 + 8) = 10;
    return 10;
  }
  v7 = v2 + 8;
  v8 = *(unsigned __int8 *)(v2 + 8);
  v31 = v8;
  v9 = v8 - 6;
  v10 = *(_BYTE *)(v2 + 30);
  if ( v8 != 6 )
    v9 = v2 + 8;
  v30 = v9;
  v11 = v4 != 1;
  if ( !v4 )
    v11 = -1;
  v32 = v8 & 7;
  v29 = *(_BYTE *)(v2 + 30);
  if ( !v4 )
  {
    do
    {
      do
      {
        while ( v3 != 1 )
        {
          if ( v3 != 2 )
            goto LABEL_79;
          v15 = *(_DWORD *)(v2 + 4);
          if ( v11 == 255 || (v16 = 0, v17 = 0, !v11) )
          {
            v17 = sub_1CE968(v2);
            v16 = v10;
          }
          if ( v31 != 6 )
            __asm { ADD             PC, R6, R3 }
          if ( v15 > v17 + (unsigned int)v16 )
          {
            sub_1CEAA0((int)&v34, v2);
            v18 = v35;
            v19 = v36;
            v20 = v37;
            memcpy(dest, v38, sizeof(dest));
            if ( v15 < v34 )
LABEL_87:
              core::slice::index::slice_end_index_len_fail();
            *(_DWORD *)(v2 + 4) = v15 - v34;
            if ( v20 != 10 )
            {
LABEL_35:
              *(_DWORD *)a1 = v18;
              *(_DWORD *)(a1 + 4) = v19;
              *(_BYTE *)(a1 + 8) = v20;
              return (int)memcpy((void *)(a1 + 9), dest, 0x13u);
            }
            v3 = 2;
            v10 = v29;
          }
          else
          {
            v3 = 1;
            *(_BYTE *)(v2 + 29) = 1;
          }
        }
        *(_BYTE *)(v2 + 29) = 0;
        if ( v10 )
          goto LABEL_84;
        v3 = 0;
      }
      while ( v32 < 3 || v32 == 5 );
      if ( v32 != 6 )
      {
LABEL_82:
        *(_BYTE *)(a1 + 8) = 6;
        return 6;
      }
    }
    while ( !sub_1CE968(v2) );
LABEL_53:
    v23 = *(_DWORD *)(v2 + 4);
    result = v23 - 1;
    if ( !v23 )
      core::slice::index::slice_end_index_len_fail();
    v24 = 7;
    goto LABEL_86;
  }
  v12 = v11;
  v13 = v11 == 255;
  if ( v11 != 255 )
    v13 = v11 == 0;
  if ( v13 )
  {
    v14 = v10;
    while ( 1 )
    {
      if ( v3 == 1 )
      {
        *(_BYTE *)(v2 + 29) = 0;
        if ( v10 )
          goto LABEL_84;
        v7 = v32;
        v3 = 0;
        if ( v32 >= 3 )
        {
          v7 = v32;
          if ( v32 != 5 )
          {
            if ( v32 != 6 )
              goto LABEL_82;
            v7 = sub_1CE968(v2);
            if ( v7 )
              goto LABEL_53;
          }
        }
      }
      else
      {
        if ( v3 != 2 )
          goto LABEL_79;
        v21 = v12 == 255;
        v22 = *(_DWORD *)(v2 + 4);
        if ( v12 != 255 )
        {
          v7 = 0;
          v21 = v12 == 0;
        }
        if ( v21 )
          v7 = sub_1CE968(v2);
        v7 += v14;
        if ( v22 <= v7 )
        {
          v3 = 1;
          *(_BYTE *)(v2 + 29) = 1;
        }
        else
        {
          sub_1CEAA0((int)&v34, v2);
          v20 = v37;
          v18 = v35;
          v19 = v36;
          memcpy(dest, v38, sizeof(dest));
          v7 = v22 - v34;
          if ( v22 < v34 )
            goto LABEL_87;
          *(_DWORD *)(v2 + 4) = v7;
          if ( v20 != 10 )
            goto LABEL_35;
          v3 = 2;
          v10 = v29;
        }
      }
      if ( v4 > v3 )
        goto LABEL_5;
    }
  }
  if ( !*(_BYTE *)(v2 + 30) )
  {
    while ( 1 )
    {
      if ( v3 == 1 )
      {
        v3 = 0;
        *(_BYTE *)(v2 + 29) = 0;
        if ( v32 >= 3 && v32 != 5 )
        {
          if ( v32 != 6 )
            goto LABEL_82;
          if ( sub_1CE968(v2) )
            goto LABEL_53;
        }
      }
      else
      {
        if ( v3 != 2 )
          goto LABEL_79;
        v26 = *(_DWORD *)(v2 + 4);
        if ( v26 )
        {
          sub_1CEAA0((int)&v34, v2);
          v18 = v35;
          v19 = v36;
          v20 = v37;
          memcpy(dest, v38, sizeof(dest));
          if ( v26 < v34 )
            goto LABEL_87;
          *(_DWORD *)(v2 + 4) = v26 - v34;
          if ( v20 != 10 )
            goto LABEL_35;
          v3 = 2;
        }
        else
        {
          v3 = 1;
          *(_BYTE *)(v2 + 29) = 1;
        }
      }
      if ( v4 > v3 )
        goto LABEL_5;
    }
  }
  while ( v3 == 2 )
  {
    v25 = *(_DWORD *)(v2 + 4);
    if ( v25 )
    {
      sub_1CEAA0((int)&v34, v2);
      v18 = v35;
      v19 = v36;
      v20 = v37;
      memcpy(dest, v38, sizeof(dest));
      if ( v25 < v34 )
        goto LABEL_87;
      *(_DWORD *)(v2 + 4) = v25 - v34;
      if ( v20 != 10 )
        goto LABEL_35;
      v3 = 2;
      if ( v4 > 2 )
        goto LABEL_5;
    }
    else
    {
      v3 = 1;
      *(_BYTE *)(v2 + 29) = 1;
      if ( v4 > 1 )
        goto LABEL_5;
    }
  }
  if ( v3 )
  {
    *(_BYTE *)(v2 + 29) = 0;
LABEL_84:
    v27 = *(_DWORD *)(v2 + 4);
    result = v27 - 1;
    if ( !v27 )
      core::slice::index::slice_end_index_len_fail();
    v24 = 6;
LABEL_86:
    *(_DWORD *)(v2 + 4) = result;
    *(_BYTE *)(a1 + 8) = v24;
    return result;
  }
LABEL_79:
  if ( v31 != 6 )
    __asm { ADD             PC, R1, R0 }
  *(_BYTE *)(a1 + 8) = 10;
  *(_BYTE *)(v2 + 29) = 3;
  return 3;
}
