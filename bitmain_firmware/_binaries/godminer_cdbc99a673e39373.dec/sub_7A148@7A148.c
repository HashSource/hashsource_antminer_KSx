void *sub_7A148()
{
  void *result; // r0
  _DWORD v1[3]; // [sp+4h] [bp-Ch] BYREF

  core::ffi::c_str::CStr::from_bytes_with_nul(v1, "__pthread_get_minstack", 23);
  if ( v1[0] )
    result = 0;
  else
    result = dlsym(0, (const char *)v1[1]);
  __dmb(0xBu);
  off_2D3868 = result;
  return result;
}
