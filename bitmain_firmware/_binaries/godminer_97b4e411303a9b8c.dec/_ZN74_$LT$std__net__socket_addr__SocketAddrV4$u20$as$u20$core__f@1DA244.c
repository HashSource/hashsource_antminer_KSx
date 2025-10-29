int __fastcall <std::net::socket_addr::SocketAddrV4 as core::fmt::Display>::fmt(int a1, int a2)
{
  __int16 v4; // r0
  unsigned int v6; // [sp+8h] [bp-50h] BYREF
  _DWORD v7[6]; // [sp+Ch] [bp-4Ch] BYREF
  _DWORD v8[4]; // [sp+24h] [bp-34h] BYREF
  int v9; // [sp+34h] [bp-24h] BYREF
  __int16 v10; // [sp+3Ah] [bp-1Eh] BYREF
  unsigned int *v11; // [sp+3Ch] [bp-1Ch] BYREF
  _DWORD v12[2]; // [sp+40h] [bp-18h] BYREF
  char **v13; // [sp+48h] [bp-10h]
  int v14; // [sp+4Ch] [bp-Ch]
  _DWORD *v15; // [sp+50h] [bp-8h]
  int v16; // [sp+54h] [bp-4h]

  if ( core::fmt::Formatter::precision(a2) == 1 || core::fmt::Formatter::width(a2) == 1 )
  {
    v6 = 0;
    v8[3] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v8[2] = &v10;
    v8[1] = sub_1AD544;
    v4 = *(_WORD *)(a1 + 4);
    v8[0] = &v9;
    v10 = v4;
    v15 = v8;
    v16 = 2;
    v14 = 2;
    v9 = a1;
    v11 = &v6;
    v13 = &off_2DFD98;
    v12[0] = 0;
    if ( core::fmt::write(&v11, &off_2DF0B0, v12) )
      core::result::unwrap_failed((int)&unk_2A502A, 43, (int)v12, (int)&off_2DF318, (int)&off_2DFDA8);
    if ( v6 >= 0x16 )
      core::slice::index::slice_end_index_len_fail();
    return core::fmt::Formatter::pad(a2, v7, v6);
  }
  else
  {
    v7[2] = 2;
    v7[4] = 2;
    v7[3] = v12;
    v6 = 0;
    v12[1] = sub_1AD544;
    LOWORD(v11) = *(_WORD *)(a1 + 4);
    v14 = (int)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v7[1] = &off_2DFD98;
    v13 = (char **)&v11;
    v8[0] = a1;
    v12[0] = v8;
    return core::fmt::Formatter::write_fmt(a2, &v6);
  }
}
