int __fastcall std::sys::unix::os_str::Slice::to_str(int a1)
{
  int result; // r0
  _DWORD v2[2]; // [sp+4h] [bp-Ch] BYREF

  core::str::converts::from_utf8(v2, a1);
  result = v2[1];
  if ( v2[0] )
    return 0;
  return result;
}
