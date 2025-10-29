int __fastcall std::sys::unix::os::chdir(int a1, const void *a2, size_t n)
{
  int result; // r0
  __int16 v6; // r1
  _UNKNOWN **v7; // r3
  int v8; // [sp+8h] [bp-198h] BYREF
  _UNKNOWN **v9; // [sp+Ch] [bp-194h]
  _BYTE dest[388]; // [sp+10h] [bp-190h] BYREF
  _DWORD v11[3]; // [sp+194h] [bp-Ch] BYREF

  if ( n >> 7 > 2 )
  {
    sub_7ADAC(&v8);
    result = (unsigned __int8)v8;
    if ( (unsigned __int8)v8 != 4 )
    {
LABEL_10:
      v6 = *(_WORD *)((char *)&v8 + 1);
      v7 = v9;
      *(_BYTE *)(a1 + 3) = HIBYTE(v8);
      *(_WORD *)(a1 + 1) = v6;
      *(_DWORD *)(a1 + 4) = v7;
      *(_BYTE *)a1 = result;
      return result;
    }
  }
  else
  {
    memcpy(dest, a2, n);
    dest[n] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v11, dest, n + 1);
    if ( v11[0] )
    {
      v9 = &off_2DE14C;
      result = (unsigned __int8)dword_2DE158;
      v8 = dword_2DE158;
      if ( (unsigned __int8)dword_2DE158 != 4 )
        goto LABEL_10;
    }
    else
    {
      v9 = (_UNKNOWN **)chdir((const char *)v11[1]);
    }
  }
  if ( v9 )
  {
    result = *_errno_location();
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = result;
  }
  else
  {
    *(_BYTE *)a1 = 4;
    return 4;
  }
  return result;
}
