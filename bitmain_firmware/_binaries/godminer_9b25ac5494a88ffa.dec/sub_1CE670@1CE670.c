int __fastcall sub_1CE670(_BYTE *a1, __mode_t *a2, _BYTE *a3, size_t a4)
{
  bool v8; // r0
  __mode_t v9; // r8
  int v10; // r4
  int v11; // r0
  int v13; // [sp+8h] [bp-1ACh] BYREF
  _UNKNOWN **v14; // [sp+Ch] [bp-1A8h]
  _BYTE *v15; // [sp+10h] [bp-1A4h] BYREF
  char *path; // [sp+14h] [bp-1A0h]
  char v17; // [sp+18h] [bp-19Ch]
  __int16 v18; // [sp+2Ch] [bp-188h]
  bool v19; // [sp+2Eh] [bp-186h]
  _DWORD v20[2]; // [sp+30h] [bp-184h] BYREF
  char v21; // [sp+38h] [bp-17Ch]
  __int16 v22; // [sp+4Ch] [bp-168h]
  char v23; // [sp+4Eh] [bp-166h]

  if ( a4 )
    v8 = *a3 == 47;
  else
    v8 = 0;
  v19 = v8;
  v17 = 6;
  v21 = 6;
  v20[0] = aRustc9eb3afe9e;
  path = (char *)a4;
  v15 = a3;
  v18 = 512;
  v23 = 0;
  v20[1] = 0;
  v22 = 512;
  if ( !sub_1E0610(&v15, v20) )
  {
    v9 = *a2;
    if ( a4 >> 7 > 2 )
    {
      sub_7B2EC(&v13, (int)a3, a4, *a2);
      v10 = (unsigned __int8)v13;
      if ( (unsigned __int8)v13 != 4 )
        goto LABEL_14;
    }
    else
    {
      memcpy(v20, a3, a4);
      *((_BYTE *)v20 + a4) = 0;
      core::ffi::c_str::CStr::from_bytes_with_nul(&v15, v20, a4 + 1);
      if ( v15 )
      {
        v13 = dword_2DE158;
        v10 = (unsigned __int8)dword_2DE158;
        v14 = &off_2DE14C;
        if ( (unsigned __int8)dword_2DE158 != 4 )
LABEL_14:
          __asm { ADD             PC, R0, R1 }
      }
      else
      {
        if ( mkdir(path, v9) == -1 )
        {
          v11 = *_errno_location();
          v10 = 0;
          v13 = 0;
          v14 = (_UNKNOWN **)v11;
          goto LABEL_14;
        }
        LOBYTE(v13) = 4;
      }
    }
  }
  *a1 = 4;
  return 4;
}
