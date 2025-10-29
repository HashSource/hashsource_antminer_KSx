int __fastcall std::path::Path::file_name(_BYTE *a1, int a2)
{
  bool v2; // r2
  int result; // r0
  int v11; // [sp+4h] [bp-3Ch] BYREF
  unsigned __int8 v12; // [sp+Ch] [bp-34h]
  _DWORD v13[2]; // [sp+20h] [bp-20h] BYREF
  char v14; // [sp+28h] [bp-18h]
  __int16 v15; // [sp+3Ch] [bp-4h]
  bool v16; // [sp+3Eh] [bp-2h]

  if ( a2 )
    v2 = *a1 == 47;
  else
    v2 = 0;
  v13[0] = a1;
  v13[1] = a2;
  v15 = 512;
  v16 = v2;
  v14 = 6;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)&v11, (int)v13);
  _R2 = v12;
  if ( v12 == 10 )
    return 0;
  _R3 = 5;
  __asm { UQSUB8          R2, R2, R3 }
  result = v11;
  if ( (unsigned __int8)_R2 != 4 )
    return 0;
  return result;
}
