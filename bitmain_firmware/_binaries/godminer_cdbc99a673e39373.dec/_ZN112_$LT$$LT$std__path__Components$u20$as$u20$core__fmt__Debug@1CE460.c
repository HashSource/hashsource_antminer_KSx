int __fastcall <<std::path::Components as core::fmt::Debug>::fmt::DebugHelper as core::fmt::Debug>::fmt(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  bool v4; // r2
  _BYTE v6[8]; // [sp+0h] [bp-68h] BYREF
  _DWORD v7[2]; // [sp+8h] [bp-60h] BYREF
  char v8; // [sp+10h] [bp-58h]
  __int16 v9; // [sp+24h] [bp-44h]
  bool v10; // [sp+26h] [bp-42h]
  _DWORD v11[2]; // [sp+28h] [bp-40h] BYREF
  int v12; // [sp+30h] [bp-38h]
  int v13; // [sp+34h] [bp-34h]
  int v14; // [sp+38h] [bp-30h]
  int v15; // [sp+3Ch] [bp-2Ch]
  int v16; // [sp+40h] [bp-28h]
  _DWORD v17[8]; // [sp+48h] [bp-20h] BYREF

  core::fmt::Formatter::debug_list(v6);
  v2 = *(_BYTE **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    v4 = *v2 == 47;
  else
    v4 = 0;
  v10 = v4;
  v7[1] = v3;
  v9 = 512;
  v7[0] = v2;
  v8 = 6;
  <std::path::Components as core::iter::traits::iterator::Iterator>::next(v11, v7);
  while ( (unsigned __int8)v12 != 10 )
  {
    v17[0] = v11[0];
    v17[1] = v11[1];
    v17[2] = v12;
    v17[3] = v13;
    v17[4] = v14;
    v17[5] = v15;
    v17[6] = v16;
    core::fmt::builders::DebugSet::entry(v6, v17, &off_2CA140);
    <std::path::Components as core::iter::traits::iterator::Iterator>::next(v11, v7);
  }
  return core::fmt::builders::DebugList::finish(v6);
}
