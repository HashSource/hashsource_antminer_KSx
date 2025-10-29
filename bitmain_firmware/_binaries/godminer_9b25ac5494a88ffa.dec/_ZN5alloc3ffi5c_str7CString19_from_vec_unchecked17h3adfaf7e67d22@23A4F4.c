int __fastcall alloc::ffi::c_str::CString::_from_vec_unchecked(size_t *a1)
{
  signed int v1; // r6
  int v3; // r5
  size_t v4; // r0
  size_t v5; // r0
  size_t v6; // r1
  int v7; // r2
  _DWORD v9[3]; // [sp+4h] [bp-1Ch] BYREF
  size_t v10; // [sp+10h] [bp-10h] BYREF
  size_t v11; // [sp+14h] [bp-Ch]
  int v12; // [sp+18h] [bp-8h]

  v1 = *a1;
  v3 = a1[2];
  if ( *a1 == v3 )
  {
    v1 = v3 + 1;
    if ( v3 != -1 )
    {
      if ( v3 )
      {
        v11 = a1[2];
        v12 = 1;
        v10 = a1[1];
      }
      else
      {
        v12 = 0;
      }
      sub_239740(v9, v3 + 1, v1 >= 0, (int)&v10);
      if ( !v9[0] )
      {
        v4 = v9[1];
        *a1 = v1;
        a1[1] = v4;
        goto LABEL_8;
      }
      if ( v9[2] )
        alloc::alloc::handle_alloc_error();
    }
    alloc::raw_vec::capacity_overflow();
  }
LABEL_8:
  if ( v3 == v1 )
  {
    sub_23969C(a1, v3);
    v3 = a1[2];
  }
  v5 = *a1;
  *(_BYTE *)(a1[1] + v3) = 0;
  a1[2] = v3 + 1;
  v6 = a1[1];
  v7 = a1[2];
  v10 = v5;
  v11 = v6;
  v12 = v7;
  return sub_23C368(&v10);
}
