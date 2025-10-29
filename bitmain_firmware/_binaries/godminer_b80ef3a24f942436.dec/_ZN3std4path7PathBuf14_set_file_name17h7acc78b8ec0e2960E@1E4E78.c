size_t __fastcall std::path::PathBuf::_set_file_name(unsigned int *a1, _BYTE *a2, size_t a3)
{
  _BYTE *v3; // r4
  unsigned int v4; // r6
  bool v8; // r0
  bool v16; // r0
  unsigned int v20; // r1
  _BOOL4 v21; // r0
  int v22; // r7
  _BYTE *v24; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v25; // [sp+8h] [bp-38h]
  char v26; // [sp+Ch] [bp-34h]
  __int16 v27; // [sp+20h] [bp-20h]
  bool v28; // [sp+22h] [bp-1Eh]
  _DWORD v29[2]; // [sp+24h] [bp-1Ch] BYREF
  unsigned __int8 v30; // [sp+2Ch] [bp-14h]

  v3 = (_BYTE *)a1[1];
  v4 = a1[2];
  if ( v4 )
    v8 = *v3 == 47;
  else
    v8 = 0;
  v28 = v8;
  v26 = 6;
  v27 = 512;
  v24 = v3;
  v25 = v4;
  <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v29, (int)&v24);
  _R0 = v30;
  if ( v30 != 10 )
  {
    _R1 = 5;
    __asm { UQSUB8          R0, R0, R1 }
    if ( (unsigned __int8)_R0 == 4 )
    {
      if ( v29[0] )
      {
        v16 = v4 && *v3 == 47;
        v28 = v16;
        v26 = 6;
        v27 = 512;
        v24 = v3;
        v25 = v4;
        <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back((int)v29, (int)&v24);
        _R0 = v30;
        if ( v30 != 10 )
        {
          _R1 = 5;
          __asm { UQSUB8          R0, R0, R1 }
          if ( (unsigned int)(unsigned __int8)_R0 - 2 < 3 && std::path::Components::as_path((int)&v24) && v4 >= v20 )
          {
            a1[2] = v20;
            v4 = v20;
          }
        }
      }
    }
  }
  if ( v4 )
  {
    v21 = v3[v4 - 1] != 47;
    if ( !a3 )
      goto LABEL_20;
LABEL_19:
    v22 = 0;
    if ( *a2 == 47 )
      goto LABEL_24;
    goto LABEL_20;
  }
  v21 = 0;
  if ( a3 )
    goto LABEL_19;
LABEL_20:
  if ( !v21 )
  {
    v22 = v4;
    if ( *a1 - v4 >= a3 )
      goto LABEL_25;
LABEL_27:
    sub_79590(a1, v22, a3);
    v3 = (_BYTE *)a1[1];
    v22 = a1[2];
    goto LABEL_25;
  }
  if ( *a1 == v4 )
  {
    sub_79590(a1, v4, 1);
    v3 = (_BYTE *)a1[1];
    v4 = a1[2];
  }
  v22 = v4 + 1;
  v3[v4] = 47;
LABEL_24:
  a1[2] = v22;
  if ( *a1 - v22 < a3 )
    goto LABEL_27;
LABEL_25:
  memcpy(&v3[v22], a2, a3);
  a1[2] = v22 + a3;
  return v22 + a3;
}
