int __fastcall <std::net::socket_addr::SocketAddrV4 as core::fmt::Display>::fmt(int a1, int *a2)
{
  __int16 v4; // r0
  unsigned int v6; // [sp+8h] [bp-50h] BYREF
  char v7[4]; // [sp+Ch] [bp-4Ch] BYREF
  char **v8; // [sp+10h] [bp-48h]
  int v9; // [sp+14h] [bp-44h]
  int *v10; // [sp+18h] [bp-40h]
  int v11; // [sp+1Ch] [bp-3Ch]
  _DWORD v12[4]; // [sp+24h] [bp-34h] BYREF
  int v13; // [sp+34h] [bp-24h] BYREF
  __int16 v14; // [sp+3Ah] [bp-1Eh] BYREF
  unsigned int *v15; // [sp+3Ch] [bp-1Ch] BYREF
  int v16[2]; // [sp+40h] [bp-18h] BYREF
  unsigned int **v17; // [sp+48h] [bp-10h]
  int v18; // [sp+4Ch] [bp-Ch]
  _DWORD *v19; // [sp+50h] [bp-8h]
  int v20; // [sp+54h] [bp-4h]

  if ( core::fmt::Formatter::precision(a2) == 1 || core::fmt::Formatter::width(a2) == 1 )
  {
    v6 = 0;
    v12[3] = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v12[2] = &v14;
    v12[1] = sub_1B0770;
    v4 = *(_WORD *)(a1 + 4);
    v12[0] = &v13;
    v14 = v4;
    v19 = v12;
    v20 = 2;
    v18 = 2;
    v13 = a1;
    v15 = &v6;
    v17 = (unsigned int **)&off_2E9D98;
    v16[0] = 0;
    if ( core::fmt::write((int)&v15, (int)&off_2E90B0, v16) )
      core::result::unwrap_failed((int)&unk_2AFC2A, 43, (int)v16, (int)&off_2E9318, (int)&off_2E9DA8);
    if ( v6 >= 0x16 )
      core::slice::index::slice_end_index_len_fail();
    return core::fmt::Formatter::pad(a2, v7, v6);
  }
  else
  {
    v9 = 2;
    v11 = 2;
    v10 = v16;
    v6 = 0;
    v16[1] = (int)sub_1B0770;
    LOWORD(v15) = *(_WORD *)(a1 + 4);
    v18 = (int)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v8 = &off_2E9D98;
    v17 = &v15;
    v12[0] = a1;
    v16[0] = (int)v12;
    return core::fmt::Formatter::write_fmt(a2, (int *)&v6);
  }
}
