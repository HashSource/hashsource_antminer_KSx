int __fastcall std::os::unix::net::stream::UnixStream::pair(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // [sp+4h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-8h]
  int v6; // [sp+Ch] [bp-4h]

  sub_1EE6B8(&v4, 1);
  result = v5;
  v3 = v6;
  if ( v4 )
  {
    a1[1] = v5;
    a1[2] = v3;
    *a1 = 1;
  }
  else
  {
    a1[1] = v5;
    a1[2] = v3;
    *a1 = 0;
  }
  return result;
}
