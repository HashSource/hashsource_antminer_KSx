_BYTE *__fastcall std::path::Path::parent(_BYTE *a1, int a2)
{
  bool v2; // r2
  _BYTE *result; // r0
  _DWORD v11[2]; // [sp+4h] [bp-3Ch] BYREF
  char v12; // [sp+Ch] [bp-34h]
  __int16 v13; // [sp+20h] [bp-20h]
  bool v14; // [sp+22h] [bp-1Eh]
  _BYTE v15[8]; // [sp+24h] [bp-1Ch] BYREF
  unsigned __int8 v16; // [sp+2Ch] [bp-14h]

  if ( a2 )
    v2 = *a1 == 47;
  else
    v2 = 0;
  v11[0] = a1;
  v11[1] = a2;
  v13 = 512;
  v14 = v2;
  v12 = 6;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v15, (int)v11);
  _R1 = v16;
  result = 0;
  if ( v16 != 10 )
  {
    _R2 = 5;
    __asm { UQSUB8          R1, R1, R2 }
    if ( (unsigned int)(unsigned __int8)_R1 - 2 <= 2 )
      return std::path::Components::as_path((int)v11);
  }
  return result;
}
