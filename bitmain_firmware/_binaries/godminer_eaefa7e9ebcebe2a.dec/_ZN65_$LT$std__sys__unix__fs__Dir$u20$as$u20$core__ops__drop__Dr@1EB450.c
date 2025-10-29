int __fastcall <std::sys::unix::fs::Dir as core::ops::drop::Drop>::drop(DIR **a1)
{
  int result; // r0
  int *v2; // r0
  int v3; // r0
  _DWORD v4[6]; // [sp+0h] [bp-28h] BYREF
  _DWORD v5[2]; // [sp+18h] [bp-10h] BYREF
  _DWORD v6[2]; // [sp+20h] [bp-8h] BYREF

  result = closedir(*a1);
  if ( result )
  {
    v2 = _errno_location();
    result = (unsigned __int8)std::sys::unix::decode_error_kind(*v2);
    if ( (unsigned __int8)result != 35 )
    {
      v3 = *_errno_location();
      v4[2] = &off_2DF7E8;
      v4[4] = v5;
      v4[3] = 1;
      v4[5] = 1;
      v4[0] = 0;
      v6[1] = v3;
      v6[0] = 0;
      v5[1] = <std::io::error::Error as core::fmt::Debug>::fmt;
      v5[0] = v6;
      core::panicking::panic_fmt((int)v4, (int)&off_2DF7F0);
    }
  }
  return result;
}
