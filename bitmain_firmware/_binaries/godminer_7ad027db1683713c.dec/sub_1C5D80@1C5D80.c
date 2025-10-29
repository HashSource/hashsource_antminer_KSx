unsigned int __fastcall sub_1C5D80(int a1, int a2, int a3, unsigned int a4)
{
  unsigned __int8 *v6; // r7
  int v7; // r5
  unsigned int v8; // r0
  char v9; // r1
  unsigned int v10; // r1
  unsigned int v11; // r2
  __int16 v12; // r6
  unsigned int v13; // r3
  unsigned int v14; // r5
  unsigned int v15; // r6
  unsigned int v16; // r7
  __int16 v17; // r0
  unsigned int result; // r0
  int v19; // r1
  unsigned __int8 *v20; // r2
  int v21; // r3
  unsigned int v22; // r1
  int v23; // r0
  unsigned int v24; // r1
  __int16 v25; // r0
  unsigned int v26; // r3
  __int16 v27; // r6
  unsigned int v28; // r7
  unsigned int v29; // r2
  int v30; // [sp+0h] [bp-20h] BYREF
  int v31; // [sp+4h] [bp-1Ch]
  int v32; // [sp+8h] [bp-18h]
  int v33; // [sp+Ch] [bp-14h]
  _DWORD src[3]; // [sp+10h] [bp-10h] BYREF
  __int16 v35; // [sp+1Ch] [bp-4h]

  v6 = *(unsigned __int8 **)a2;
  v7 = *(_DWORD *)(a2 + 4);
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v8 = sub_1C5F98((unsigned __int8 **)a2, (int)&v30, 8u, a4);
  if ( v8 == 8 )
  {
    v10 = (unsigned __int16)v32;
    v11 = HIWORD(v31);
    v12 = __rev16(HIWORD(v33));
    *(_WORD *)(a1 + 11) = __rev16(HIWORD(v32));
    v13 = (unsigned __int16)v31;
    *(_BYTE *)a1 = 1;
    *(_WORD *)(a1 + 15) = v12;
    *(_WORD *)(a1 + 9) = __rev16(v10);
    v14 = HIWORD(v30);
    v15 = (unsigned __int16)v30;
    v16 = (unsigned __int16)v33;
    *(_WORD *)(a1 + 7) = __rev16(v11);
    v17 = __rev16(v13);
    *(_WORD *)(a1 + 13) = __rev16(v16);
LABEL_3:
    *(_WORD *)(a1 + 5) = v17;
    *(_WORD *)(a1 + 3) = __rev16(v14);
    result = __rev16(v15);
    *(_WORD *)(a1 + 1) = result;
    return result;
  }
  if ( (v9 & 1) == 0 )
  {
    v19 = *(_DWORD *)(a2 + 4);
    if ( v19 )
    {
      v20 = *(unsigned __int8 **)a2;
      if ( **(_BYTE **)a2 == 58 && v19 != 1 )
      {
        v21 = v20[1];
        *(_DWORD *)a2 = v20 + 2;
        *(_DWORD *)(a2 + 4) = v19 - 2;
        if ( v21 == 58 )
        {
          v35 = 0;
          memset(src, 0, sizeof(src));
          if ( v8 >= 8 )
            core::slice::index::slice_end_index_len_fail(7 - v8, 7, (int)&off_2C9D68);
          v22 = sub_1C5F98((unsigned __int8 **)a2, (int)src, 7 - v8, 0x3Au);
          v23 = 8 - v22;
          if ( v22 >= 9 )
            core::slice::index::slice_index_order_fail(v23, 8, (int)&off_2C9D78);
          if ( v22 == 8 )
            core::slice::index::slice_end_index_len_fail(8, 7, (int)&off_2C9D88);
          memcpy((char *)&v30 + 2 * v23, src, 2 * v22);
          v24 = HIWORD(v31);
          v25 = __rev16((unsigned __int16)v32);
          v26 = HIWORD(v32);
          v27 = __rev16(HIWORD(v33));
          *(_BYTE *)a1 = 1;
          v28 = (unsigned __int16)v33;
          v29 = (unsigned __int16)v31;
          *(_WORD *)(a1 + 9) = v25;
          *(_WORD *)(a1 + 15) = v27;
          *(_WORD *)(a1 + 7) = __rev16(v24);
          v17 = __rev16(v29);
          v14 = HIWORD(v30);
          v15 = (unsigned __int16)v30;
          *(_WORD *)(a1 + 13) = __rev16(v28);
          *(_WORD *)(a1 + 11) = __rev16(v26);
          goto LABEL_3;
        }
      }
    }
  }
  *(_DWORD *)a2 = v6;
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a2 + 4) = v7;
  return 0;
}
