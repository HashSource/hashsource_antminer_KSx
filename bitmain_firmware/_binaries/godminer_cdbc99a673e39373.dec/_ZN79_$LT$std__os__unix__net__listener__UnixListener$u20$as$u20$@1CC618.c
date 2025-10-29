int __fastcall <std::os::unix::net::listener::UnixListener as core::fmt::Debug>::fmt(int *a1, int a2)
{
  socklen_t v3; // r6
  int v4; // r5
  _BYTE v6[8]; // [sp+8h] [bp-F0h] BYREF
  _BYTE dest[108]; // [sp+10h] [bp-E8h] BYREF
  _BYTE s[116]; // [sp+80h] [bp-78h] BYREF
  socklen_t len; // [sp+F4h] [bp-4h] BYREF

  core::fmt::Formatter::debug_struct(v6, a2, aUnixlistener, 12);
  v3 = 2;
  core::fmt::builders::DebugStruct::field(v6, aFd, 2, a1, &off_2CAE6C);
  v4 = *a1;
  memset(s, 0, 0x6Eu);
  len = 110;
  if ( getsockname(v4, (struct sockaddr *)s, &len) == -1 )
  {
    _errno_location();
    return core::fmt::builders::DebugStruct::finish(v6);
  }
  else
  {
    if ( !len || (v3 = len, *(unsigned __int16 *)s == 1) )
    {
      memcpy(dest, &s[4], 0x6Au);
      *(_DWORD *)&s[4] = *(unsigned __int16 *)s | (*(unsigned __int16 *)&s[2] << 16);
      *(_DWORD *)s = v3;
      memcpy(&s[8], dest, 0x6Cu);
      core::fmt::builders::DebugStruct::field(v6, aLocal, 5, s, &off_2CAE7C);
    }
    return core::fmt::builders::DebugStruct::finish(v6);
  }
}
