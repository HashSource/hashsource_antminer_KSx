_WORD *__fastcall std::path::Path::file_prefix(_BYTE *a1, int a2)
{
  bool v2; // r2
  _WORD *result; // r0
  int v11; // r3
  _WORD *v12; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v13; // [sp+8h] [bp-38h]
  unsigned __int8 v14; // [sp+Ch] [bp-34h]
  _DWORD v15[2]; // [sp+20h] [bp-20h] BYREF
  char v16; // [sp+28h] [bp-18h]
  __int16 v17; // [sp+3Ch] [bp-4h]
  bool v18; // [sp+3Eh] [bp-2h]

  if ( a2 )
    v2 = *a1 == 47;
  else
    v2 = 0;
  v15[0] = a1;
  v15[1] = a2;
  v17 = 512;
  v18 = v2;
  v16 = 6;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)&v12, (int)v15);
  _R0 = v14;
  if ( v14 == 10 )
    return 0;
  _R1 = 5;
  __asm { UQSUB8          R0, R0, R1 }
  if ( (unsigned __int8)_R0 != 4 )
    return 0;
  result = v12;
  if ( !v12 )
    return 0;
  switch ( v13 )
  {
    case 2u:
      if ( *v12 == 11822 )
        return result;
      break;
    case 0u:
      core::slice::index::slice_start_index_len_fail();
    case 1u:
      return result;
  }
  v11 = 1;
  while ( *((_BYTE *)v12 + v11) != 46 )
  {
    if ( v13 == ++v11 )
      return result;
  }
  if ( v11 - 1 >= v13 )
    core::slice::index::slice_end_index_len_fail();
  if ( v11 + 1 > v13 )
    core::slice::index::slice_start_index_len_fail();
  return result;
}
