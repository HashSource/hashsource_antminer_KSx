int __fastcall std::path::PathBuf::pop(int a1)
{
  _BYTE *v2; // r0
  unsigned int v3; // r5
  bool v4; // r1
  unsigned int v12; // r1
  int result; // r0
  _DWORD v14[2]; // [sp+4h] [bp-3Ch] BYREF
  char v15; // [sp+Ch] [bp-34h]
  __int16 v16; // [sp+20h] [bp-20h]
  bool v17; // [sp+22h] [bp-1Eh]
  _BYTE v18[8]; // [sp+24h] [bp-1Ch] BYREF
  unsigned __int8 v19; // [sp+2Ch] [bp-14h]

  v2 = *(_BYTE **)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
    v4 = *v2 == 47;
  else
    v4 = 0;
  v17 = v4;
  v14[0] = v2;
  v14[1] = v3;
  v15 = 6;
  v16 = 512;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v18, (int)v14);
  _R0 = v19;
  if ( v19 == 10 )
    return 0;
  _R1 = 5;
  __asm { UQSUB8          R0, R0, R1 }
  if ( (unsigned int)(unsigned __int8)_R0 - 2 >= 3 || !std::path::Components::as_path((int)v14) )
    return 0;
  result = 1;
  if ( v3 >= v12 )
    *(_DWORD *)(a1 + 8) = v12;
  return result;
}
