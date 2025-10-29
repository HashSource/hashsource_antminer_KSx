char *__fastcall std::path::Path::extension(_BYTE *a1, int a2)
{
  bool v2; // r2
  char *result; // r0
  int v11; // r3
  _WORD *v12; // r2
  char *v13; // r0
  char *v14; // r2
  _WORD *v15; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v16; // [sp+8h] [bp-38h]
  unsigned __int8 v17; // [sp+Ch] [bp-34h]
  _DWORD v18[2]; // [sp+20h] [bp-20h] BYREF
  char v19; // [sp+28h] [bp-18h]
  __int16 v20; // [sp+3Ch] [bp-4h]
  bool v21; // [sp+3Eh] [bp-2h]

  if ( a2 )
    v2 = *a1 == 47;
  else
    v2 = 0;
  v18[0] = a1;
  v18[1] = a2;
  v20 = 512;
  v21 = v2;
  v19 = 6;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)&v15, (int)v18);
  _R0 = v17;
  if ( v17 == 10 )
    return 0;
  _R1 = 5;
  __asm { UQSUB8          R0, R0, R1 }
  if ( (unsigned __int8)_R0 != 4 )
    return 0;
  if ( !v15 )
    return 0;
  if ( v16 == 2 && *v15 == 11822 )
    return 0;
  v11 = 0;
  v12 = v15;
  do
  {
    if ( v16 == v11 )
      return 0;
    v13 = (char *)v12 + v16;
    ++v11;
    v12 = (_WORD *)((char *)v12 - 1);
  }
  while ( *(v13 - 1) != 46 );
  if ( v16 < v16 - v11 + 1 )
    core::slice::index::slice_start_index_len_fail();
  v14 = (char *)v12 + v16;
  result = (char *)(v16 - v11);
  if ( v16 != v11 )
    return v14 + 1;
  return result;
}
