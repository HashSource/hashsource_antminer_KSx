int __fastcall <<std::path::Iter as core::fmt::Debug>::fmt::DebugHelper as core::fmt::Debug>::fmt(int a1)
{
  _BYTE *v2; // r0
  int v3; // r1
  bool v4; // r2
  _BYTE v13[8]; // [sp+0h] [bp-44h] BYREF
  _DWORD v14[2]; // [sp+8h] [bp-3Ch] BYREF
  char v15; // [sp+10h] [bp-34h]
  __int16 v16; // [sp+24h] [bp-20h]
  bool v17; // [sp+26h] [bp-1Eh]
  int v18; // [sp+28h] [bp-1Ch] BYREF
  unsigned __int8 v19; // [sp+30h] [bp-14h]

  core::fmt::Formatter::debug_list(v13);
  v2 = *(_BYTE **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 )
    v4 = *v2 == 47;
  else
    v4 = 0;
  v17 = v4;
  v14[1] = v3;
  v14[0] = v2;
  v16 = 512;
  v15 = 6;
  <std::path::Components as core::iter::traits::iterator::Iterator>::next(&v18, v14);
  _R0 = v19;
  if ( v19 != 10 )
  {
    _R9 = 5;
    __asm { UQSUB8          R0, R0, R9 }
    __asm { ADD             PC, R4, R5 }
  }
  return core::fmt::builders::DebugList::finish(v13);
}
