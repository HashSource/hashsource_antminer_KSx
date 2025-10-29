int __fastcall <std::net::socket_addr::SocketAddrV6 as core::fmt::Display>::fmt(int a1, int a2)
{
  int v4; // r2
  int ****v5; // r12
  int v6; // r2
  __int16 v7; // r2
  __int16 v9; // r0
  __int16 v10; // r1
  int **v11; // [sp+8h] [bp-80h] BYREF
  int (__fastcall *v12)(_DWORD *); // [sp+Ch] [bp-7Ch] BYREF
  int ****v13; // [sp+10h] [bp-78h]
  int v14; // [sp+14h] [bp-74h]
  int *v15; // [sp+18h] [bp-70h]
  int v16; // [sp+1Ch] [bp-6Ch]
  int v17; // [sp+48h] [bp-40h] BYREF
  int *v18; // [sp+4Ch] [bp-3Ch] BYREF
  int (__fastcall *v19)(_DWORD *); // [sp+50h] [bp-38h]
  int *v20; // [sp+54h] [bp-34h]
  int (__fastcall *v21)(_DWORD, _DWORD); // [sp+58h] [bp-30h]
  __int16 *v22; // [sp+5Ch] [bp-2Ch]
  int (__fastcall *v23)(_DWORD, _DWORD); // [sp+60h] [bp-28h]
  int v24; // [sp+64h] [bp-24h] BYREF
  __int16 v25; // [sp+6Ah] [bp-1Eh] BYREF
  int ***v26; // [sp+6Ch] [bp-1Ch] BYREF
  _DWORD v27[2]; // [sp+70h] [bp-18h] BYREF
  int ****v28; // [sp+78h] [bp-10h]
  int v29; // [sp+7Ch] [bp-Ch]
  _DWORD *v30; // [sp+80h] [bp-8h]
  int v31; // [sp+84h] [bp-4h]

  if ( core::fmt::Formatter::precision(a2) == 1 || core::fmt::Formatter::width(a2) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 20);
    v11 = 0;
    if ( v4 )
    {
      v5 = (int ****)&off_2DEDB8;
      v17 = v4;
      v23 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v22 = &v25;
      v21 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      v20 = &v17;
      v25 = *(_WORD *)(a1 + 24);
      v6 = 3;
      v19 = sub_1ACB2C;
      v24 = a1;
      v18 = &v24;
    }
    else
    {
      v5 = (int ****)&off_2DEDD0;
      v21 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v20 = &v17;
      v7 = *(_WORD *)(a1 + 24);
      v24 = a1;
      LOWORD(v17) = v7;
      v6 = 2;
      v18 = &v24;
      v19 = sub_1ACB2C;
    }
    v26 = &v11;
    v27[0] = 0;
    v31 = v6;
    v29 = v6;
    v30 = &v18;
    v28 = v5;
    if ( core::fmt::write(&v26, &off_2DE020, v27) )
      core::result::unwrap_failed((int)&unk_2A44BA, 43, (int)v27, (int)&off_2DE318, (int)&off_2DEDE0);
    if ( (unsigned int)v11 >= 0x3B )
      core::slice::index::slice_end_index_len_fail();
    return core::fmt::Formatter::pad(a2, &v12, v11);
  }
  else if ( *(_DWORD *)(a1 + 20) )
  {
    v26 = *(int ****)(a1 + 20);
    v29 = 3;
    v31 = 3;
    v30 = &v11;
    v28 = (int ****)&off_2DEDB8;
    v27[0] = 0;
    v16 = (int)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v15 = &v24;
    v12 = sub_1ACB2C;
    v14 = (int)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v11 = &v18;
    v13 = &v26;
    v9 = *(_WORD *)(a1 + 24);
    v18 = (int *)a1;
    LOWORD(v24) = v9;
    return core::fmt::Formatter::write_fmt(a2, v27);
  }
  else
  {
    v14 = 2;
    v16 = 2;
    v15 = v27;
    v11 = 0;
    v29 = (int)core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v27[1] = sub_1ACB2C;
    v10 = *(_WORD *)(a1 + 24);
    v28 = &v26;
    LOWORD(v26) = v10;
    v18 = (int *)a1;
    v27[0] = &v18;
    v13 = (int ****)&off_2DEDD0;
    return core::fmt::Formatter::write_fmt(a2, &v11);
  }
}
