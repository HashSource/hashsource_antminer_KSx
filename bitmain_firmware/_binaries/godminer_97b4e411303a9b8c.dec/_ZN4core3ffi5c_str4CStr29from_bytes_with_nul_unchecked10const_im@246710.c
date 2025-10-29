int __fastcall core::ffi::c_str::CStr::from_bytes_with_nul_unchecked::const_impl(int result, unsigned int a2)
{
  unsigned int v2; // r3
  unsigned int i; // r3
  _DWORD v5[2]; // [sp+0h] [bp-18h] BYREF
  char **v6; // [sp+8h] [bp-10h]
  int v7; // [sp+Ch] [bp-Ch]
  const char *v8; // [sp+10h] [bp-8h]
  int v9; // [sp+14h] [bp-4h]

  v2 = a2 - 1;
  if ( !a2 )
    goto LABEL_12;
  if ( v2 >= a2 )
    core::panicking::panic_bounds_check(v2, a2, (int)&off_2E4FB4);
  if ( *(_BYTE *)(result + v2) )
  {
LABEL_12:
    v7 = 1;
    v9 = 0;
    v5[0] = 0;
    v6 = &off_2E4FC4;
    v8 = aLibraryCoreSrc;
    core::panicking::panic_fmt((int)v5, (int)&off_2E4FCC);
  }
  for ( i = 2 - a2; i != 1; ++i )
  {
    if ( a2 < 2 )
      core::panicking::panic_bounds_check(-i, a2, (int)&off_2E4FDC);
    if ( !*(unsigned __int8 *)(result - i) )
    {
      v7 = 1;
      v9 = 0;
      v5[0] = 0;
      v6 = (char **)&off_2E4FEC;
      v8 = aLibraryCoreSrc;
      core::panicking::panic_fmt((int)v5, (int)&off_2E4FF4);
    }
  }
  return result;
}
