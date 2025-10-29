int __fastcall std::sys::unix::os_str::Slice::to_str(int a1, unsigned int a2)
{
  int result; // r0
  _DWORD v3[2]; // [sp+4h] [bp-Ch] BYREF

  core::str::converts::from_utf8((int)v3, a1, a2);
  result = v3[1];
  if ( v3[0] )
    return 0;
  return result;
}
