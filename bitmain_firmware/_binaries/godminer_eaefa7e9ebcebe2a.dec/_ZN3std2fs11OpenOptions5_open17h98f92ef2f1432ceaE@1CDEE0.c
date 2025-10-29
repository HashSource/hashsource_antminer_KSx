int __fastcall std::fs::OpenOptions::_open(int a1, int a2, void *src, size_t n)
{
  int result; // r0
  _UNKNOWN **v8; // r1
  int v9; // [sp+0h] [bp-198h] BYREF
  _UNKNOWN **v10; // [sp+4h] [bp-194h]
  _BYTE dest[388]; // [sp+8h] [bp-190h] BYREF
  _DWORD v12[3]; // [sp+18Ch] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7B480(&v9, (int)src, n, a2);
    if ( (unsigned __int8)v9 == 4 )
      goto LABEL_6;
  }
  else
  {
    memcpy(dest, src, n);
    dest[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v12, dest, n + 1);
    if ( v12[0] )
    {
      v9 = dword_2DF158;
      v10 = &off_2DF14C;
      if ( (unsigned __int8)dword_2DF158 != 4 )
        goto LABEL_8;
LABEL_6:
      *(_DWORD *)(a1 + 4) = v10;
      *(_BYTE *)a1 = 4;
      return 4;
    }
    sub_1EB63C(&v9, v12[1], v12[2], a2);
    if ( (unsigned __int8)v9 == 4 )
      goto LABEL_6;
  }
LABEL_8:
  result = v9;
  v8 = v10;
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = v8;
  return result;
}
