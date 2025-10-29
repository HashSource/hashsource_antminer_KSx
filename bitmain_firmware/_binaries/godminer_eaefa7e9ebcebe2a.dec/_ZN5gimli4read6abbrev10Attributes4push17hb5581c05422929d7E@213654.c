_DWORD *__fastcall gimli::read::abbrev::Attributes::push(_DWORD *a1, int *a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r12
  int v7; // r3
  int v8; // r6
  int v9; // r5
  _DWORD *result; // r0
  unsigned int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  int v14; // r2
  int v15; // lr
  int v16; // r7
  int v17; // r12
  int v18; // r5
  _DWORD *v19; // r1
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r7
  unsigned int v25; // [sp+0h] [bp-10h] BYREF
  _DWORD *v26; // [sp+4h] [bp-Ch]
  int v27; // [sp+8h] [bp-8h]

  if ( *a1 )
  {
    v4 = a1[3];
    if ( v4 == a1[1] )
    {
      sub_2125E8(a1 + 1, v4);
      v4 = a1[3];
    }
    v5 = a1[2];
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v9 = a2[3];
    a1[3] = v4 + 1;
    *(_DWORD *)(v5 + 16 * v4) = v6;
    result = (_DWORD *)(v5 + 16 * v4);
    result[1] = v7;
    result[2] = v8;
    result[3] = v9;
  }
  else
  {
    v11 = a1[1];
    if ( v11 == 5 )
    {
      v12 = (_DWORD *)_rust_alloc(0x50u);
      if ( !v12 )
        alloc::alloc::handle_alloc_error();
      v26 = v12;
      v25 = 5;
      memcpy(v12, a1 + 2, 0x50u);
      v27 = 5;
      sub_2125E8(&v25, 5);
      result = (_DWORD *)v25;
      v13 = v26;
      v14 = v27;
      v15 = *a2;
      v16 = a2[1];
      v17 = a2[2];
      *a1 = 1;
      v18 = a2[3];
      a1[1] = result;
      a1[2] = v13;
      a1[3] = v14 + 1;
      v13[4 * v14] = v15;
      v19 = &v13[4 * v14];
      v19[1] = v16;
      v19[2] = v17;
      v19[3] = v18;
    }
    else
    {
      if ( v11 > 4 )
        core::panicking::panic_bounds_check(v11, 5, (int)&off_2E1C04);
      v20 = &a1[4 * v11];
      v21 = *a2;
      v22 = a2[1];
      v23 = a2[2];
      v20[5] = a2[3];
      v20 += 2;
      v24 = a1[1];
      *v20 = v21;
      v20[1] = v22;
      v20[2] = v23;
      a1[1] = v24 + 1;
      return (_DWORD *)(v24 + 1);
    }
  }
  return result;
}
