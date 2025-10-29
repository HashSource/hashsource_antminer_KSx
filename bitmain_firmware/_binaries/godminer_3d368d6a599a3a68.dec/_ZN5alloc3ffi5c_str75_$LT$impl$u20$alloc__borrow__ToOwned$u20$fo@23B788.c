__int64 __fastcall alloc::ffi::c_str::<impl alloc::borrow::ToOwned for core::ffi::c_str::CStr>::clone_into(
        char *src,
        size_t n,
        char **a3)
{
  size_t v3; // r6
  char *v5; // r7
  size_t v7; // r5
  unsigned int v9; // r4
  bool v10; // cf
  size_t v11; // r6
  __int64 result; // r0
  size_t v13; // [sp+0h] [bp-20h] BYREF
  char *v14; // [sp+4h] [bp-1Ch]
  size_t v15; // [sp+8h] [bp-18h]
  _DWORD v16[4]; // [sp+10h] [bp-10h] BYREF

  v3 = (size_t)a3[1];
  v5 = *a3;
  v7 = v3;
  if ( v3 >= n )
    v7 = n;
  *a3 = (char *)1;
  a3[1] = 0;
  v15 = v3;
  v13 = v3;
  v14 = v5;
  if ( v3 >= n )
    v15 = n;
  memcpy(v5, src, v7);
  v9 = n - v7;
  v10 = v3 - v7 >= v9;
  v11 = v7;
  if ( !v10 )
  {
    sub_7D6EC(&v13, v7, v9);
    v5 = v14;
    v11 = v15;
  }
  memcpy(&v5[v11], &src[v7], v9);
  v15 = v11 + v9;
  v16[0] = v13;
  v16[1] = v14;
  v16[2] = v11 + v9;
  result = sub_23CFF8(v16);
  *(_QWORD *)a3 = result;
  return result;
}
