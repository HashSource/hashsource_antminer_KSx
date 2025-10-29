unsigned int __fastcall sub_1DBD80(int a1, _DWORD *a2)
{
  _BYTE *v4; // r7
  int v5; // r5
  unsigned int v6; // r0
  char v7; // r1
  unsigned int v8; // r1
  unsigned int v9; // r2
  __int16 v10; // r6
  unsigned int v11; // r3
  unsigned int v12; // r5
  unsigned int v13; // r6
  unsigned int v14; // r7
  __int16 v15; // r0
  unsigned int result; // r0
  int v17; // r1
  _BYTE *v18; // r2
  int v19; // r3
  unsigned int v20; // r1
  unsigned int v21; // r1
  __int16 v22; // r0
  unsigned int v23; // r3
  __int16 v24; // r6
  unsigned int v25; // r7
  unsigned int v26; // r2
  int v27; // [sp+0h] [bp-20h] BYREF
  int v28; // [sp+4h] [bp-1Ch]
  int v29; // [sp+8h] [bp-18h]
  int v30; // [sp+Ch] [bp-14h]
  _DWORD src[3]; // [sp+10h] [bp-10h] BYREF
  __int16 v32; // [sp+1Ch] [bp-4h]

  v4 = (_BYTE *)*a2;
  v5 = a2[1];
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v6 = sub_1DBF98(a2, &v27, 8);
  if ( v6 == 8 )
  {
    v8 = (unsigned __int16)v29;
    v9 = HIWORD(v28);
    v10 = __rev16(HIWORD(v30));
    *(_WORD *)(a1 + 11) = __rev16(HIWORD(v29));
    v11 = (unsigned __int16)v28;
    *(_BYTE *)a1 = 1;
    *(_WORD *)(a1 + 15) = v10;
    *(_WORD *)(a1 + 9) = __rev16(v8);
    v12 = HIWORD(v27);
    v13 = (unsigned __int16)v27;
    v14 = (unsigned __int16)v30;
    *(_WORD *)(a1 + 7) = __rev16(v9);
    v15 = __rev16(v11);
    *(_WORD *)(a1 + 13) = __rev16(v14);
LABEL_3:
    *(_WORD *)(a1 + 5) = v15;
    *(_WORD *)(a1 + 3) = __rev16(v12);
    result = __rev16(v13);
    *(_WORD *)(a1 + 1) = result;
    return result;
  }
  if ( (v7 & 1) == 0 )
  {
    v17 = a2[1];
    if ( v17 )
    {
      v18 = (_BYTE *)*a2;
      if ( *(_BYTE *)*a2 == 58 && v17 != 1 )
      {
        v19 = (unsigned __int8)v18[1];
        *a2 = v18 + 2;
        a2[1] = v17 - 2;
        if ( v19 == 58 )
        {
          v32 = 0;
          memset(src, 0, sizeof(src));
          if ( v6 >= 8 )
            core::slice::index::slice_end_index_len_fail();
          v20 = sub_1DBF98(a2, src, 7 - v6);
          if ( v20 >= 9 )
            core::slice::index::slice_index_order_fail();
          if ( v20 == 8 )
            core::slice::index::slice_end_index_len_fail();
          memcpy((char *)&v27 + 2 * (8 - v20), src, 2 * v20);
          v21 = HIWORD(v28);
          v22 = __rev16((unsigned __int16)v29);
          v23 = HIWORD(v29);
          v24 = __rev16(HIWORD(v30));
          *(_BYTE *)a1 = 1;
          v25 = (unsigned __int16)v30;
          v26 = (unsigned __int16)v28;
          *(_WORD *)(a1 + 9) = v22;
          *(_WORD *)(a1 + 15) = v24;
          *(_WORD *)(a1 + 7) = __rev16(v21);
          v15 = __rev16(v26);
          v12 = HIWORD(v27);
          v13 = (unsigned __int16)v27;
          *(_WORD *)(a1 + 13) = __rev16(v25);
          *(_WORD *)(a1 + 11) = __rev16(v23);
          goto LABEL_3;
        }
      }
    }
  }
  *a2 = v4;
  *(_BYTE *)a1 = 0;
  a2[1] = v5;
  return 0;
}
