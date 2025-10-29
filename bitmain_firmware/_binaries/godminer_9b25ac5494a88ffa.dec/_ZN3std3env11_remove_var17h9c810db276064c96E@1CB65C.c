int __fastcall std::env::_remove_var(void *src, size_t n)
{
  int result; // r0
  _DWORD v4[2]; // [sp+0h] [bp-1A8h] BYREF
  int v5; // [sp+8h] [bp-1A0h] BYREF
  _UNKNOWN **v6; // [sp+Ch] [bp-19Ch]
  _DWORD dest[96]; // [sp+10h] [bp-198h] BYREF
  _DWORD v8[2]; // [sp+190h] [bp-18h] BYREF
  _DWORD *v9; // [sp+198h] [bp-10h] BYREF
  char *name; // [sp+19Ch] [bp-Ch]
  _DWORD *v11; // [sp+1A0h] [bp-8h]
  int (*v12)(); // [sp+1A4h] [bp-4h]

  v4[0] = src;
  v4[1] = n;
  if ( n >> 7 > 2 )
  {
    sub_7AFD8(&v5);
  }
  else
  {
    memcpy(dest, src, n);
    *((_BYTE *)dest + n) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v9, dest, n + 1);
    if ( v9 )
    {
      v5 = dword_2DE158;
      v6 = &off_2DE14C;
    }
    else
    {
      sub_1EEAAC((int)&v5, name);
    }
  }
  result = (unsigned __int8)v5;
  if ( (unsigned __int8)v5 != 4 )
  {
    v8[0] = v5;
    dest[3] = 2;
    dest[5] = 2;
    dest[4] = &v9;
    v8[1] = v6;
    dest[2] = &off_2DD8BC;
    dest[0] = 0;
    v12 = <std::io::error::Error as core::fmt::Display>::fmt;
    v11 = v8;
    name = (char *)sub_1ABE1C;
    v9 = v4;
    core::panicking::panic_fmt((int)dest, (int)&off_2DD8CC);
  }
  return result;
}
