void __fastcall <std::io::stdio::StdinLock as std::io::Read>::read_to_string(int a1, _DWORD *a2, size_t *a3)
{
  _DWORD *v4; // r5
  int v6; // r4
  int v7; // r1
  int v8; // r0
  int v9; // r8
  size_t v10; // r7
  size_t v11; // r6
  bool v12; // zf
  size_t v13; // r1
  void *v14; // r6
  size_t v15; // r1
  int v16; // r7
  size_t v17; // r4
  int v18; // r11
  size_t v19; // r6
  bool v20; // zf
  char *v21; // r0
  size_t v22; // r5
  void *v23; // r8
  size_t v24; // r7
  size_t v25; // r1
  void *v26; // r0
  size_t v27; // r1
  size_t v28; // r5
  size_t v29; // r1
  char *v30; // r0
  bool v31; // zf
  size_t v32; // [sp+0h] [bp-1Ch] BYREF
  void *ptr; // [sp+4h] [bp-18h]
  size_t v34; // [sp+8h] [bp-14h]
  size_t v35; // [sp+10h] [bp-Ch] BYREF
  void *src; // [sp+14h] [bp-8h]
  size_t n; // [sp+18h] [bp-4h]

  v4 = (_DWORD *)*a2;
  if ( !a3[2] )
  {
    v16 = v4[4];
    v17 = 0;
    v18 = v4[2];
    v19 = v4[5] - v16;
    if ( *a3 < v19 )
    {
      sub_79AB0(a3, 0, v4[5] - v16);
      v17 = a3[2];
    }
    memcpy((void *)(a3[1] + v17), (const void *)(v18 + v16), v19);
    a3[2] = v17 + v19;
    v4[4] = 0;
    v4[5] = 0;
    sub_1D7CE8(&v35, a3);
    v20 = (unsigned __int8)v35 == 0;
    if ( !(_BYTE)v35 )
      v20 = src == (void *)9;
    if ( v20 )
    {
      v21 = 0;
    }
    else
    {
      v21 = (char *)src;
      if ( (unsigned __int8)v35 != 4 )
      {
        ptr = src;
        v32 = v35;
        goto LABEL_26;
      }
    }
    LOBYTE(v32) = 4;
    ptr = &v21[v19];
LABEL_26:
    v28 = a3[2];
    core::str::converts::from_utf8(&v35, a3[1]);
    v29 = v32;
    v30 = (char *)ptr;
    if ( v35 )
    {
      v31 = (unsigned __int8)v32 == 4;
      if ( (unsigned __int8)v32 == 4 )
      {
        v30 = (_BYTE *)&loc_10BEC4;
        v29 = 2;
      }
      *(_DWORD *)a1 = v29;
      if ( v31 )
        v30 += 1919636;
      *(_DWORD *)(a1 + 4) = v30;
      a3[2] = 0;
    }
    else
    {
      *(_DWORD *)a1 = v32;
      *(_DWORD *)(a1 + 4) = v30;
      a3[2] = v28;
    }
    return;
  }
  v6 = v4[4];
  v7 = v4[5];
  v8 = 1;
  v9 = v4[2];
  v10 = 0;
  v11 = v7 - v6;
  v34 = 0;
  ptr = (void *)1;
  v32 = 0;
  if ( v7 != v6 )
  {
    sub_79AB0(&v32, 0, v11);
    v8 = (int)ptr;
    v10 = v34;
  }
  memcpy((void *)(v8 + v10), (const void *)(v9 + v6), v11);
  v4[4] = 0;
  v4[5] = 0;
  v34 = v10 + v11;
  sub_1D7CE8(&v35, &v32);
  v12 = (unsigned __int8)v35 == 0;
  if ( !(_BYTE)v35 )
    v12 = src == (void *)9;
  if ( v12 || (v13 = v35, (unsigned __int8)v35 == 4) )
  {
    v14 = ptr;
    core::str::converts::from_utf8(&v35, ptr);
    if ( v35 )
    {
      *(_DWORD *)a1 = 2;
      v15 = v32;
      *(_DWORD *)(a1 + 4) = &off_2E0958;
      if ( !v15 )
        return;
LABEL_23:
      _rust_dealloc(ptr);
      return;
    }
    v22 = a3[2];
    v23 = src;
    v24 = n;
    if ( *a3 - v22 < n )
    {
      sub_79AB0(a3, a3[2], n);
      v22 = a3[2];
    }
    memcpy((void *)(a3[1] + v22), v23, v24);
    v25 = v32;
    a3[2] = v22 + v24;
    *(_DWORD *)(a1 + 4) = v24;
    *(_BYTE *)a1 = 4;
    if ( v25 )
      _rust_dealloc(v14);
  }
  else
  {
    v26 = src;
    *(_BYTE *)a1 = v35;
    *(_BYTE *)(a1 + 3) = HIBYTE(v13);
    *(_WORD *)(a1 + 1) = v13 >> 8;
    v27 = v32;
    *(_DWORD *)(a1 + 4) = v26;
    if ( v27 )
      goto LABEL_23;
  }
}
