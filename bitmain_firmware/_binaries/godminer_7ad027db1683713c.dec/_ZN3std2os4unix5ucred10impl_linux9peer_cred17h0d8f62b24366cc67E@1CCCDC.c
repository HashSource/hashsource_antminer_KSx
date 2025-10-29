int __fastcall std::os::unix::ucred::impl_linux::peer_cred(_DWORD *a1, int *a2)
{
  int v3; // r0
  int v4; // r0
  bool v5; // zf
  int result; // r0
  int v7; // r1
  int v8; // r2
  socklen_t optlen; // [sp+8h] [bp-10h] BYREF
  int optval; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+10h] [bp-8h]
  int v12; // [sp+14h] [bp-4h]

  optlen = 12;
  v3 = *a2;
  v12 = 1;
  v11 = 1;
  optval = 1;
  v4 = getsockopt(v3, 1, 17, &optval, &optlen);
  v5 = v4 == 0;
  if ( !v4 )
    v5 = optlen == 12;
  if ( v5 )
  {
    *a1 = 1;
    result = optval;
    v7 = v11;
    v8 = v12;
    a1[1] = optval;
    a1[2] = v7;
    a1[3] = v8;
  }
  else
  {
    result = *_errno_location();
    a1[1] = 0;
    *a1 = 2;
    a1[2] = result;
  }
  return result;
}
