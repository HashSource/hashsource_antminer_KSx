int __fastcall alloc::ffi::c_str::CString::into_string(int *a1, int a2, size_t a3)
{
  size_t v4; // r3
  int v5; // r6
  int v6; // r5
  int result; // r0
  int v8; // r1
  size_t v9; // [sp+0h] [bp-30h]
  int v10; // [sp+4h] [bp-2Ch]
  int v11; // [sp+8h] [bp-28h]
  size_t v14; // [sp+18h] [bp-18h]
  size_t v15; // [sp+20h] [bp-10h] BYREF
  int v16; // [sp+24h] [bp-Ch]
  size_t v17; // [sp+28h] [bp-8h]

  v4 = a3;
  if ( a3 )
    v4 = a3 - 1;
  v14 = v4;
  core::str::converts::from_utf8(&v15, a2);
  if ( v15 )
  {
    v5 = v17;
    v6 = v16;
    v9 = a3;
    v10 = a2;
    v11 = v14;
    if ( (unsigned __int8)v17 != 2 )
    {
      v15 = a3;
      v16 = a2;
      v17 = v14;
      result = alloc::ffi::c_str::CString::_from_vec_unchecked(&v15);
      *a1 = result;
      a1[1] = v8;
      a1[2] = v6;
      a1[3] = v5;
      return result;
    }
  }
  else
  {
    v9 = a3;
    v10 = a2;
    v11 = v14;
  }
  *a1 = v9;
  a1[1] = v10;
  a1[2] = v11;
  *((_BYTE *)a1 + 12) = 2;
  return 2;
}
