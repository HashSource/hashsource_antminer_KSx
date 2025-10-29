int __fastcall <<std::path::Iter as core::fmt::Debug>::fmt::DebugHelper as core::fmt::Debug>::fmt(int a1, _DWORD *a2)
{
  _BYTE *v3; // r0
  int v4; // r1
  bool v5; // r2
  _BYTE v14[8]; // [sp+0h] [bp-44h] BYREF
  _DWORD v15[2]; // [sp+8h] [bp-3Ch] BYREF
  char v16; // [sp+10h] [bp-34h]
  __int16 v17; // [sp+24h] [bp-20h]
  bool v18; // [sp+26h] [bp-1Eh]
  int v19; // [sp+28h] [bp-1Ch] BYREF
  unsigned __int8 v20; // [sp+30h] [bp-14h]

  core::fmt::Formatter::debug_list((int)v14, a2);
  v3 = *(_BYTE **)a1;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 )
    v5 = *v3 == 47;
  else
    v5 = 0;
  v18 = v5;
  v15[1] = v4;
  v15[0] = v3;
  v17 = 512;
  v16 = 6;
  <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)&v19, (int)v15);
  _R0 = v20;
  if ( v20 != 10 )
  {
    _R9 = 5;
    __asm { UQSUB8          R0, R0, R9 }
    __asm { ADD             PC, R4, R5 }
  }
  return core::fmt::builders::DebugList::finish((int)v14);
}
