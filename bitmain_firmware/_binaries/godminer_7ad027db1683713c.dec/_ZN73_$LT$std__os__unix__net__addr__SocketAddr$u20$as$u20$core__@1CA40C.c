bool __fastcall <std::os::unix::net::addr::SocketAddr as core::fmt::Debug>::fmt(int *a1, int *a2)
{
  int *v3; // r2
  int v4; // r3
  int v5; // r0
  int **v6; // r0
  int *v7; // r1
  char **v9; // r2
  _DWORD v10[6]; // [sp+0h] [bp-38h] BYREF
  int *v11; // [sp+18h] [bp-20h] BYREF
  bool (__fastcall *v12)(int, int *); // [sp+1Ch] [bp-1Ch]
  int v13[2]; // [sp+20h] [bp-18h] BYREF
  char **v14; // [sp+28h] [bp-10h]
  int v15; // [sp+2Ch] [bp-Ch]
  const char *v16; // [sp+30h] [bp-8h]
  int v17; // [sp+34h] [bp-4h]

  v3 = (int *)((char *)a1 + 6);
  v4 = *a1;
  if ( *a1 == 2 )
  {
    v15 = 1;
    v16 = aRustc9eb3afe9e;
    v17 = 0;
    v13[0] = 0;
    v14 = &off_2C9E54;
    return core::fmt::Formatter::write_fmt(a2, v13);
  }
  if ( !*(_BYTE *)v3 )
  {
    if ( (unsigned int)(*a1 - 2) < 0x6D )
    {
      core::slice::ascii::<impl [u8]>::escape_ascii((int)v13, (int)a1 + 7, v4 - 3);
      v10[2] = &off_2C9E34;
      v12 = <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt;
      v10[5] = 1;
      v10[3] = 2;
      v7 = v10;
      v10[4] = &v11;
      v6 = 0;
      v11 = v13;
      goto LABEL_8;
    }
    v5 = *a1 - 2;
    v9 = &off_2C9E24;
LABEL_11:
    core::slice::index::slice_end_index_len_fail(v5, 108, (int)v9);
  }
  v5 = v4 - 3;
  if ( (unsigned int)(v4 - 3) >= 0x6D )
  {
    v9 = &off_2C9E14;
    goto LABEL_11;
  }
  v12 = (bool (__fastcall *)(int, int *))(v4 - 3);
  v15 = 2;
  v17 = 1;
  v16 = (const char *)v10;
  v13[0] = 0;
  v6 = &v11;
  v10[1] = sub_199F38;
  v7 = v13;
  v11 = v3;
  v14 = &off_2C9E44;
LABEL_8:
  v10[0] = v6;
  return core::fmt::Formatter::write_fmt(a2, v7);
}
