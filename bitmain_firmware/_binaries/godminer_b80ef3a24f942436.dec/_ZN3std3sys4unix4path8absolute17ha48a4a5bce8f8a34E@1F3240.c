unsigned int __fastcall std::sys::unix::path::absolute(_DWORD *a1, _BYTE *a2, unsigned int a3)
{
  char v6; // r4
  _BYTE *v7; // r0
  unsigned int v8; // r1
  int v9; // r11
  int v10; // r4
  unsigned int result; // r0
  int v12; // r1
  int v14; // r0
  int v21; // r1
  int v22; // r2
  _WORD *v23; // r0
  _BYTE *v24; // [sp+4h] [bp-78h]
  unsigned int v25; // [sp+Ch] [bp-70h]
  _BYTE *v26; // [sp+10h] [bp-6Ch] BYREF
  unsigned int v27; // [sp+14h] [bp-68h]
  int v28; // [sp+18h] [bp-64h]
  int v29; // [sp+1Ch] [bp-60h]
  int v30; // [sp+20h] [bp-5Ch]
  int v31; // [sp+24h] [bp-58h]
  int v32; // [sp+28h] [bp-54h]
  int v33; // [sp+2Ch] [bp-50h]
  size_t v34; // [sp+30h] [bp-4Ch] BYREF
  int v35; // [sp+34h] [bp-48h]
  int v36; // [sp+38h] [bp-44h]
  _BYTE *v37; // [sp+40h] [bp-3Ch] BYREF
  unsigned int v38; // [sp+44h] [bp-38h]
  int v39; // [sp+48h] [bp-34h]
  int v40; // [sp+4Ch] [bp-30h]
  int v41; // [sp+50h] [bp-2Ch]
  int v42; // [sp+54h] [bp-28h]
  int v43; // [sp+58h] [bp-24h]
  int v44; // [sp+5Ch] [bp-20h]
  int v45; // [sp+60h] [bp-1Ch] BYREF
  unsigned __int8 v46; // [sp+68h] [bp-14h]

  v6 = 1;
  v7 = std::path::Path::_strip_prefix(a2, a3, asc_2B0F5E, 1);
  if ( !v7 )
  {
    v7 = a2;
    v8 = a3;
  }
  if ( v8 )
  {
    if ( *v7 != 47 )
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  v26 = v7;
  BYTE2(v33) = v6;
  LOBYTE(v28) = 6;
  v27 = v8;
  LOWORD(v33) = 512;
  if ( a3 && *a2 == 47 )
  {
    v25 = a3;
    v24 = a2;
    if ( a3 >= 2 && *(_WORD *)a2 == 12079 && (a3 < 3 || bcmp(&unk_2B211C, a2, 3u)) )
    {
      <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)&v37, (int)&v26);
      v9 = 2;
      v23 = (_WORD *)_rust_alloc(2u);
      if ( !v23 )
        alloc::alloc::handle_alloc_error();
      v10 = (int)v23;
      *v23 = 12079;
    }
    else
    {
      v9 = 0;
      v10 = 1;
    }
    v36 = v9;
    v35 = v10;
    v34 = v9;
  }
  else
  {
    std::env::current_dir(&v37);
    if ( v37 )
    {
      result = v38;
      v12 = v39;
      *a1 = 1;
      a1[1] = result;
      a1[2] = v12;
      return result;
    }
    v24 = a2;
    v9 = v40;
    v25 = a3;
    v34 = v38;
    v35 = v39;
    v36 = v40;
  }
  v37 = v26;
  v38 = v27;
  v39 = v28;
  v40 = v29;
  v41 = v30;
  v42 = v31;
  v43 = v32;
  v44 = v33;
  <std::path::Components as core::iter::traits::iterator::Iterator>::next((int)&v45, (int)&v37);
  _R0 = v46;
  if ( v46 != 10 )
  {
    _R3 = 5;
    __asm { UQSUB8          R0, R0, R3 }
    __asm { ADD             PC, R0, R3 }
  }
  if ( v25 && v24[v25 - 1] == 47 )
  {
    if ( v9 )
    {
      v14 = v35;
      if ( *(_BYTE *)(v9 + v35 - 1) != 47 )
      {
        if ( v34 == v9 )
        {
          sub_79590(&v34, v9, 1);
          v14 = v35;
          v9 = v36;
        }
        *(_BYTE *)(v14 + v9++) = 47;
      }
    }
    else
    {
      v9 = 0;
    }
    v36 = v9;
  }
  *a1 = 0;
  result = v34;
  v21 = v35;
  v22 = v36;
  a1[1] = v34;
  a1[2] = v21;
  a1[3] = v22;
  return result;
}
