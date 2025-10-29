int __fastcall <<std::path::Components as core::fmt::Debug>::fmt::DebugHelper as core::fmt::Debug>::fmt(
        int a1,
        _DWORD *a2)
{
  _BYTE *v3; // r0
  int v4; // r1
  bool v5; // r2
  _BYTE v7[8]; // [sp+0h] [bp-68h] BYREF
  _DWORD v8[2]; // [sp+8h] [bp-60h] BYREF
  char v9; // [sp+10h] [bp-58h]
  __int16 v10; // [sp+24h] [bp-44h]
  bool v11; // [sp+26h] [bp-42h]
  _DWORD v12[2]; // [sp+28h] [bp-40h] BYREF
  int v13; // [sp+30h] [bp-38h]
  int v14; // [sp+34h] [bp-34h]
  int v15; // [sp+38h] [bp-30h]
  int v16; // [sp+3Ch] [bp-2Ch]
  int v17; // [sp+40h] [bp-28h]
  _DWORD v18[8]; // [sp+48h] [bp-20h] BYREF

  core::fmt::Formatter::debug_list((int)v7, a2);
  v3 = *(_BYTE **)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
    v5 = *v3 == 47;
  else
    v5 = 0;
  v11 = v5;
  v8[1] = v4;
  v10 = 512;
  v8[0] = v3;
  v9 = 6;
  <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v12, (int)v8);
  while ( (unsigned __int8)v13 != 10 )
  {
    v18[0] = v12[0];
    v18[1] = v12[1];
    v18[2] = v13;
    v18[3] = v14;
    v18[4] = v15;
    v18[5] = v16;
    v18[6] = v17;
    core::fmt::builders::DebugSet::entry(v7, v18, &off_2E9140);
    <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)v12, (int)v8);
  }
  return core::fmt::builders::DebugList::finish(v7);
}
