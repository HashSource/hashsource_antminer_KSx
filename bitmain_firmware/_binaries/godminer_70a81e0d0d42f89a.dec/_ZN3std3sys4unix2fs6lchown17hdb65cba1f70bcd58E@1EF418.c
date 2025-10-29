void __fastcall std::sys::unix::fs::lchown(_DWORD *a1, const void *a2, unsigned int a3, __uid_t a4, __gid_t group)
{
  int v8; // r0
  _BYTE dest[388]; // [sp+8h] [bp-190h] BYREF
  _DWORD v10[3]; // [sp+18Ch] [bp-Ch] BYREF

  if ( a3 >> 7 > 2 )
  {
    sub_7AE9C(a1, (int)a2, a3, a4, group);
  }
  else
  {
    memcpy(dest, a2, a3);
    dest[a3] = 0;
    core::ffi::c_str::CStr::from_bytes_with_nul(v10, dest, a3 + 1);
    if ( v10[0] )
    {
      *a1 = dword_2E1158;
      a1[1] = &off_2E114C;
    }
    else if ( lchown((const char *)v10[1], a4, group) == -1 )
    {
      v8 = *_errno_location();
      *a1 = 0;
      a1[1] = v8;
    }
    else
    {
      *(_BYTE *)a1 = 4;
    }
  }
}
