char *__fastcall alloc::ffi::c_str::<impl alloc::borrow::ToOwned for core::ffi::c_str::CStr>::clone_into(
        char *src,
        size_t n,
        char **a3)
{
  char *v3; // r6
  char *v5; // r7
  size_t v7; // r5
  unsigned int v9; // r4
  bool v10; // cf
  size_t v11; // r6
  char *result; // r0
  char *v13; // r1
  int v14; // [sp+0h] [bp-20h] BYREF
  int v15; // [sp+4h] [bp-1Ch]
  size_t v16; // [sp+8h] [bp-18h]
  int v17[4]; // [sp+10h] [bp-10h] BYREF

  v3 = a3[1];
  v5 = *a3;
  v7 = (size_t)v3;
  if ( (unsigned int)v3 >= n )
    v7 = n;
  *a3 = (char *)1;
  a3[1] = 0;
  v16 = (size_t)v3;
  v14 = (int)v3;
  v15 = (int)v5;
  if ( (unsigned int)v3 >= n )
    v16 = n;
  memcpy(v5, src, v7);
  v9 = n - v7;
  v10 = (unsigned int)&v3[-v7] >= v9;
  v11 = v7;
  if ( !v10 )
  {
    sub_7BC14((unsigned int *)&v14, v7, v9);
    v5 = (char *)v15;
    v11 = v16;
  }
  memcpy(&v5[v11], &src[v7], v9);
  v16 = v11 + v9;
  v17[0] = v14;
  v17[1] = v15;
  v17[2] = v11 + v9;
  result = (char *)sub_22A480(v17);
  *a3 = result;
  a3[1] = v13;
  return result;
}
