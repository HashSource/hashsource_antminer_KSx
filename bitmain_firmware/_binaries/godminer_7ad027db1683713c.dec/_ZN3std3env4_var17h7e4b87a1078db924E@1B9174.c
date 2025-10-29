size_t *__fastcall std::env::_var(int *a1, _BYTE *a2, size_t a3)
{
  size_t *result; // r0
  int v5; // r1
  size_t v6; // r3
  size_t v7; // r4
  size_t v8; // [sp+0h] [bp-58h] BYREF
  int v9; // [sp+4h] [bp-54h]
  unsigned int v10; // [sp+8h] [bp-50h]
  _DWORD v11[4]; // [sp+10h] [bp-48h] BYREF
  size_t v12; // [sp+20h] [bp-38h]
  int v13; // [sp+24h] [bp-34h]
  unsigned int v14; // [sp+28h] [bp-30h]
  size_t v15; // [sp+30h] [bp-28h]
  int v16; // [sp+34h] [bp-24h]
  unsigned int v17; // [sp+38h] [bp-20h]
  size_t v18; // [sp+40h] [bp-18h] BYREF
  size_t v19; // [sp+44h] [bp-14h]
  size_t v20; // [sp+48h] [bp-10h]
  int v21; // [sp+4Ch] [bp-Ch]
  unsigned int v22; // [sp+50h] [bp-8h]

  std::env::_var_os(&v8, a2, a3);
  if ( !v9 )
  {
    *a1 = 1;
    a1[2] = 0;
    return 0;
  }
  v15 = v8;
  v16 = v9;
  v17 = v10;
  core::str::converts::from_utf8((int)&v18, v9, v10);
  if ( !v18 )
  {
    v12 = v8;
    v13 = v9;
    v14 = v10;
    goto LABEL_7;
  }
  v14 = v10;
  v12 = v8;
  v13 = v9;
  if ( (unsigned __int8)v20 == 2 )
  {
LABEL_7:
    v15 = v12;
    v16 = v13;
    v17 = v14;
    result = (size_t *)(a1 + 1);
    v5 = 0;
    goto LABEL_8;
  }
  v18 = v19;
  v19 = v20;
  v20 = v8;
  v21 = v9;
  v22 = v10;
  alloc::ffi::c_str::FromVecWithNulError::into_bytes(v11, &v18);
  v15 = v11[0];
  v16 = v11[1];
  v17 = v11[2];
  result = (size_t *)(a1 + 1);
  v5 = 1;
LABEL_8:
  *a1 = v5;
  v6 = v16;
  v7 = v17;
  *result = v15;
  result[1] = v6;
  result[2] = v7;
  return result;
}
