int __fastcall <std::path::Components as core::iter::traits::iterator::Iterator>::next(int a1, int a2)
{
  unsigned int v2; // r4
  int v3; // r5
  unsigned int v4; // r9
  bool v6; // zf
  int result; // r0
  unsigned int v8; // r11
  int v9; // r10
  int v10; // lr
  unsigned int v11; // r8
  int v12; // r0
  int v13; // r6
  _BOOL4 v14; // r0
  unsigned int v15; // r1
  _BYTE *v16; // r2
  int v17; // r3
  int v18; // r0
  int v19; // r6
  unsigned int v20; // r0
  unsigned int v21; // r1
  int v22; // r0
  char v23; // r0
  _BYTE *v24; // r1
  int v25; // r0
  int v26; // [sp+0h] [bp-4h]

  v4 = *(unsigned __int8 *)(a2 + 28);
  v6 = v4 == 3;
  if ( v4 != 3 )
  {
    v2 = *(unsigned __int8 *)(a2 + 29);
    v3 = a2;
    v6 = v2 == 3;
  }
  if ( v6 || v4 > v2 )
  {
LABEL_5:
    *(_BYTE *)(a1 + 8) = 10;
    return 10;
  }
  v8 = *(unsigned __int8 *)(v3 + 8);
  v9 = v8 - 6;
  v10 = *(unsigned __int8 *)(v3 + 30);
  if ( v8 != 6 )
    v9 = v3 + 8;
  v11 = v8 & 7;
  v12 = 10;
  if ( v8 < 3 )
    v12 = 7;
  v26 = v12;
  while ( 1 )
  {
    if ( !v4 )
    {
      if ( v8 != 6 )
        __asm { ADD             PC, R0, R1 }
      v4 = 1;
      *(_BYTE *)(v3 + 28) = 1;
      goto LABEL_41;
    }
    if ( v4 != 1 )
    {
      v15 = *(_DWORD *)(v3 + 4);
      if ( !v15 )
      {
        *(_BYTE *)(v3 + 28) = 3;
        *(_BYTE *)(a1 + 8) = 10;
        return 10;
      }
      v16 = *(_BYTE **)v3;
      v17 = 0;
      while ( v16[v17] != 47 )
      {
        if ( v15 == ++v17 )
        {
          v18 = 0;
          v17 = *(_DWORD *)(v3 + 4);
          goto LABEL_29;
        }
      }
      v18 = 1;
      if ( !v17 )
      {
        v19 = 10;
        goto LABEL_37;
      }
LABEL_29:
      v19 = 9;
      if ( v17 == 2 )
      {
        if ( *v16 == 46 )
        {
          v19 = 9;
          if ( v16[1] == 46 )
            v19 = 8;
        }
      }
      else if ( v17 == 1 )
      {
        v19 = 9;
        if ( *v16 == 46 )
          v19 = v26;
      }
LABEL_37:
      v20 = v17 + v18;
      if ( v15 < v20 )
        core::slice::index::slice_start_index_len_fail();
      v21 = v15 - v20;
      result = (int)&v16[v20];
      *(_DWORD *)v3 = result;
      *(_DWORD *)(v3 + 4) = v21;
      if ( v19 != 10 )
      {
        *(_DWORD *)a1 = v16;
        *(_DWORD *)(a1 + 4) = v17;
        *(_BYTE *)(a1 + 8) = v19;
        return result;
      }
      goto LABEL_41;
    }
    *(_BYTE *)(v3 + 28) = 2;
    if ( v10 )
    {
      v22 = *(_DWORD *)(v3 + 4);
      if ( !v22 )
        core::slice::index::slice_start_index_len_fail();
      *(_DWORD *)(v3 + 4) = v22 - 1;
      v23 = 6;
      goto LABEL_46;
    }
    v4 = 2;
    if ( v11 >= 3 && v11 != 5 )
      break;
LABEL_41:
    if ( v4 == 3 || v4 > v2 )
      goto LABEL_5;
  }
  if ( v11 == 6 )
  {
    v13 = a1;
    v14 = sub_1E37F8(v3);
    v10 = 0;
    a1 = v13;
    if ( v14 )
    {
      v25 = *(_DWORD *)(v3 + 4);
      if ( !v25 )
        core::slice::index::slice_start_index_len_fail();
      *(_DWORD *)(v3 + 4) = v25 - 1;
      v23 = 7;
LABEL_46:
      v24 = *(_BYTE **)v3;
      *(_BYTE *)(a1 + 8) = v23;
      *(_DWORD *)v3 = v24 + 1;
      return (int)(v24 + 1);
    }
    goto LABEL_41;
  }
  *(_BYTE *)(a1 + 8) = 6;
  return 6;
}
