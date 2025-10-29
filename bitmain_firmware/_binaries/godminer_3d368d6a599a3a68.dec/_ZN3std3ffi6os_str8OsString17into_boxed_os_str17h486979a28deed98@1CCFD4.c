int __fastcall std::ffi::os_str::OsString::into_boxed_os_str(int *a1)
{
  int v1; // r1
  int v2; // r2
  int v4[4]; // [sp+0h] [bp-10h] BYREF

  v1 = *a1;
  v2 = a1[1];
  v4[2] = a1[2];
  v4[0] = v1;
  v4[1] = v2;
  return sub_1B65F8(v4);
}
