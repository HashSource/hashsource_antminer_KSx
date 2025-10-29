char *__fastcall std::path::Path::extension(_BYTE *a1, int a2)
{
  bool v2; // r2
  char *result; // r0
  int v11; // r3
  _WORD *v12; // r2
  char *v13; // r0
  unsigned int v14; // r0
  char *v15; // r2
  _WORD *v16; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v17; // [sp+8h] [bp-38h]
  unsigned __int8 v18; // [sp+Ch] [bp-34h]
  _DWORD v19[2]; // [sp+20h] [bp-20h] BYREF
  char v20; // [sp+28h] [bp-18h]
  __int16 v21; // [sp+3Ch] [bp-4h]
  bool v22; // [sp+3Eh] [bp-2h]

  if ( a2 )
    v2 = *a1 == 47;
  else
    v2 = 0;
  v19[0] = a1;
  v19[1] = a2;
  v21 = 512;
  v22 = v2;
  v20 = 6;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)&v16, (int)v19);
  _R0 = v18;
  if ( v18 == 10 )
    return 0;
  _R1 = 5;
  __asm { UQSUB8          R0, R0, R1 }
  if ( (unsigned __int8)_R0 != 4 )
    return 0;
  if ( !v16 )
    return 0;
  if ( v17 == 2 && *v16 == 11822 )
    return 0;
  v11 = 0;
  v12 = v16;
  do
  {
    if ( v17 == v11 )
      return 0;
    v13 = (char *)v12 + v17;
    ++v11;
    v12 = (_WORD *)((char *)v12 - 1);
  }
  while ( *(v13 - 1) != 46 );
  v14 = v17 - v11 + 1;
  if ( v17 < v14 )
    core::slice::index::slice_start_index_len_fail(v14, v17, (int)&off_2C8F68);
  v15 = (char *)v12 + v17;
  result = (char *)(v17 - v11);
  if ( v17 != v11 )
    return v15 + 1;
  return result;
}
