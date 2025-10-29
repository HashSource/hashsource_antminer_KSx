int __fastcall std::env::_set_var(const void *a1, unsigned int a2, const void *a3, size_t n)
{
  char *v7; // r6
  int result; // r0
  _DWORD v9[2]; // [sp+8h] [bp-338h] BYREF
  _DWORD v10[2]; // [sp+10h] [bp-330h] BYREF
  int v11; // [sp+18h] [bp-328h] BYREF
  char *v12; // [sp+1Ch] [bp-324h]
  _DWORD dest[97]; // [sp+20h] [bp-320h] BYREF
  int v14; // [sp+1A4h] [bp-19Ch] BYREF
  char *v15; // [sp+1A8h] [bp-198h]
  _DWORD v16[96]; // [sp+1B0h] [bp-190h] BYREF
  int v17; // [sp+330h] [bp-10h] BYREF
  char *value; // [sp+334h] [bp-Ch]

  v9[0] = a1;
  v9[1] = a2;
  v10[1] = n;
  v10[0] = a3;
  if ( a2 >> 7 > 2 )
  {
    sub_7B7C4(&v11, (int)a1, a2, a3, n);
  }
  else
  {
    memcpy(dest, a1, a2);
    *((_BYTE *)dest + a2) = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(&v14, dest, a2 + 1);
    if ( v14 )
    {
LABEL_5:
      v11 = dword_2DF158;
      v12 = (char *)&off_2DF14C;
      goto LABEL_6;
    }
    v7 = v15;
    if ( n >> 7 > 2 )
    {
      sub_7AD98(&v11, (int)a3, n, v15);
    }
    else
    {
      memcpy(v16, a3, n);
      *((_BYTE *)v16 + n) = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(&v17, v16, n + 1);
      if ( v17 )
        goto LABEL_5;
      sub_1EEE1C((int)&v11, v7, value);
    }
  }
LABEL_6:
  result = (unsigned __int8)v11;
  if ( (unsigned __int8)v11 != 4 )
  {
    v17 = v11;
    dest[3] = 3;
    dest[5] = 3;
    dest[4] = v16;
    value = v12;
    dest[2] = &off_2DE894;
    dest[0] = 0;
    v16[5] = <std::io::error::Error as core::fmt::Display>::fmt;
    v16[4] = &v17;
    v16[2] = v10;
    v16[3] = sub_1AC2FC;
    v16[1] = sub_1AC2FC;
    v16[0] = v9;
    core::panicking::panic_fmt((int)dest, (int)&off_2DE8AC);
  }
  return result;
}
