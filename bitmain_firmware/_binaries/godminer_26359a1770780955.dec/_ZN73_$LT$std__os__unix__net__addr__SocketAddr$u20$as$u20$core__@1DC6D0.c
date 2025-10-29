int __fastcall <std::os::unix::net::addr::SocketAddr as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  _BYTE *v3; // r2
  int v4; // r3
  _DWORD **v5; // r0
  _DWORD *v6; // r1
  _DWORD v8[6]; // [sp+0h] [bp-38h] BYREF
  _DWORD *v9; // [sp+18h] [bp-20h] BYREF
  int (*v10)(); // [sp+1Ch] [bp-1Ch]
  _DWORD v11[2]; // [sp+20h] [bp-18h] BYREF
  char **v12; // [sp+28h] [bp-10h]
  int v13; // [sp+2Ch] [bp-Ch]
  const char *v14; // [sp+30h] [bp-8h]
  int v15; // [sp+34h] [bp-4h]

  v3 = (char *)a1 + 6;
  v4 = *a1;
  if ( *a1 == 2 )
  {
    v13 = 1;
    v14 = aRustc9eb3afe9e;
    v15 = 0;
    v11[0] = 0;
    v12 = &off_2DEE54;
    return core::fmt::Formatter::write_fmt(a2, v11);
  }
  if ( !*v3 )
  {
    if ( (unsigned int)(*a1 - 2) < 0x6D )
    {
      core::slice::ascii::<impl [u8]>::escape_ascii(v11, (char *)a1 + 7, v4 - 3);
      v8[2] = &off_2DEE34;
      v10 = <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt;
      v8[5] = 1;
      v8[3] = 2;
      v6 = v8;
      v8[4] = &v9;
      v5 = 0;
      v9 = v11;
      goto LABEL_8;
    }
LABEL_9:
    core::slice::index::slice_end_index_len_fail();
  }
  if ( (unsigned int)(v4 - 3) >= 0x6D )
    goto LABEL_9;
  v10 = (int (*)())(v4 - 3);
  v13 = 2;
  v15 = 1;
  v14 = (const char *)v8;
  v11[0] = 0;
  v5 = &v9;
  v8[1] = sub_1AC1FC;
  v6 = v11;
  v9 = v3;
  v12 = &off_2DEE44;
LABEL_8:
  v8[0] = v5;
  return core::fmt::Formatter::write_fmt(a2, v6);
}
