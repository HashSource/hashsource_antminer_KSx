bool __fastcall <object::read::util::ByteString as core::fmt::Debug>::fmt(int *a1, int *a2)
{
  _BOOL4 v3; // r4
  bool v4; // zf
  int v6[6]; // [sp+0h] [bp-30h] BYREF
  _DWORD v7[2]; // [sp+18h] [bp-18h] BYREF
  _DWORD v8[4]; // [sp+20h] [bp-10h] BYREF

  alloc::string::String::from_utf8_lossy(v8, *a1, a1[1]);
  v7[1] = sub_206520;
  v6[3] = 2;
  v6[5] = 1;
  v6[4] = (int)v7;
  v7[0] = v8;
  v6[2] = (int)&off_2EB248;
  v6[0] = 0;
  v3 = core::fmt::Formatter::write_fmt(a2, v6);
  v4 = v8[0] == 0;
  if ( v8[0] )
    v4 = v8[1] == 0;
  if ( !v4 )
    _rust_dealloc((void *)v8[2]);
  return v3;
}
