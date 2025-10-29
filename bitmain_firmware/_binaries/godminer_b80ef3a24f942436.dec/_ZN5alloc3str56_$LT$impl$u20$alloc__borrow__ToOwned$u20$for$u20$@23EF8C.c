size_t __fastcall alloc::str::<impl alloc::borrow::ToOwned for str>::clone_into(char *src, size_t n, unsigned int *a3)
{
  size_t v4; // r1
  char *v5; // r5
  unsigned int v6; // r6
  size_t v9; // r9
  unsigned int v10; // r7
  unsigned int v11; // r1
  unsigned int v12; // r2
  size_t v14; // [sp+0h] [bp-10h] BYREF
  char *v15; // [sp+4h] [bp-Ch]
  unsigned int v16; // [sp+8h] [bp-8h]

  v4 = *a3;
  v5 = (char *)a3[1];
  v6 = a3[2];
  if ( v6 >= n )
    v6 = n;
  *a3 = 0;
  a3[1] = 1;
  a3[2] = 0;
  v14 = v4;
  v15 = v5;
  v16 = v6;
  memcpy(v5, src, v6);
  v9 = n - v6;
  v10 = v6;
  if ( v14 - v6 < v9 )
  {
    sub_7D3CC(&v14, v6, v9);
    v5 = v15;
    v10 = v16;
  }
  memcpy(&v5[v10], &src[v6], v9);
  v11 = v14;
  v12 = (unsigned int)v15;
  a3[2] = v10 + v9;
  *a3 = v11;
  a3[1] = v12;
  return v10 + v9;
}
