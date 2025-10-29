int __fastcall sub_24AC68(int a1, int a2, _DWORD *a3)
{
  int v6; // r1
  int result; // r0
  int v8; // r0
  unsigned __int16 *v9; // r4
  unsigned __int16 *v10; // r2
  int v11; // r0
  int v12; // t1
  unsigned __int16 v13; // r0
  unsigned int v14; // r1
  int v15; // r2
  unsigned int v16; // r6
  int (__fastcall *v17)(int, const char *, int); // r10
  int v18; // r0
  int *v19; // r1
  int v20; // r1
  unsigned __int16 *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h] BYREF
  char v23; // [sp+10h] [bp-4h]

  if ( a3[1] )
  {
    v6 = (*(int (__fastcall **)(int, _DWORD))(a2 + 12))(a1, *a3);
    result = 1;
    if ( v6 )
      return result;
  }
  v8 = a3[3];
  if ( !v8 )
    return 0;
  v9 = (unsigned __int16 *)a3[2];
  v21 = &v9[6 * v8];
  while ( 1 )
  {
    v10 = v9;
    v12 = *v9;
    v9 += 6;
    v11 = v12;
    if ( v12 )
    {
      if ( v11 != 1 )
      {
        v18 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(a2 + 12))(a1, *((_DWORD *)v10 + 1), *((_DWORD *)v10 + 2));
        goto LABEL_34;
      }
      v13 = v10[1];
      v23 = 0;
      v22 = 0;
      if ( *v10 )
      {
        if ( *v10 == 1 )
        {
          v14 = v10[1];
          if ( v14 >= 0x3E8 )
          {
            v15 = 5;
            if ( v14 < 0x2710 )
              v15 = 4;
          }
          else
          {
            v15 = 1;
            if ( v14 >= 0xA )
            {
              v15 = 3;
              if ( v14 < 0x64 )
                v15 = 2;
            }
          }
          goto LABEL_31;
        }
        v19 = (int *)(v10 + 4);
      }
      else
      {
        v19 = (int *)(v10 + 2);
      }
      v15 = *v19;
      if ( (unsigned int)*v19 >= 6 )
        core::slice::index::slice_end_index_len_fail();
      if ( !v15 )
      {
        v15 = 0;
LABEL_33:
        v18 = (*(int (__fastcall **)(int, int *, int))(a2 + 12))(a1, &v22, v15);
        goto LABEL_34;
      }
LABEL_31:
      v20 = v15;
      do
      {
        *((_BYTE *)&v21 + v20-- + 3) = (v13 % 0xAu) | 0x30;
        v13 /= 0xAu;
      }
      while ( v20 );
      goto LABEL_33;
    }
    v16 = *((_DWORD *)v10 + 1);
    if ( v16 >= 0x41 )
      break;
    if ( !v16 )
      goto LABEL_35;
LABEL_21:
    if ( v16 <= 0x3F && a00000000000000_0[v16] <= -65 )
      core::str::slice_error_fail((int)a00000000000000_0);
    v18 = (*(int (__fastcall **)(int, const char *, unsigned int))(a2 + 12))(a1, a00000000000000_0, v16);
LABEL_34:
    if ( v18 )
      return 1;
LABEL_35:
    if ( v9 == v21 )
      return 0;
  }
  v17 = *(int (__fastcall **)(int, const char *, int))(a2 + 12);
  while ( !v17(a1, a00000000000000_0, 64) )
  {
    v16 -= 64;
    if ( v16 <= 0x40 )
      goto LABEL_21;
  }
  return 1;
}
