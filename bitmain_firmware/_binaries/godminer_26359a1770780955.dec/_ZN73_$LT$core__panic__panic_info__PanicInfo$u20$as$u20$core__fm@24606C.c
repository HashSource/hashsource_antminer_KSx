int __fastcall <core::panic::panic_info::PanicInfo as core::fmt::Display>::fmt(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r5
  int v5; // r7
  int v6; // r7
  int *v7; // r0
  int v9; // [sp+4h] [bp-34h] BYREF
  int *v10; // [sp+8h] [bp-30h] BYREF
  int (*v11)(); // [sp+Ch] [bp-2Ch]
  _DWORD *v12; // [sp+10h] [bp-28h]
  int (__fastcall *v13)(_DWORD, _DWORD); // [sp+14h] [bp-24h]
  _DWORD *v14; // [sp+18h] [bp-20h]
  int (__fastcall *v15)(_DWORD, _DWORD); // [sp+1Ch] [bp-1Ch]
  _DWORD v16[2]; // [sp+20h] [bp-18h] BYREF
  char **v17; // [sp+28h] [bp-10h]
  int v18; // [sp+2Ch] [bp-Ch]
  int **v19; // [sp+30h] [bp-8h]
  int v20; // [sp+34h] [bp-4h]

  v2 = *a2;
  v3 = a2[1];
  v5 = 1;
  if ( !(*(int (__fastcall **)(_DWORD, const char *, int))(v3 + 12))(*a2, aPanickedAt, 12) )
  {
    if ( a1[2] )
    {
      v5 = 1;
      v9 = a1[2];
      v10 = &v9;
      v19 = &v10;
      v11 = sub_25F0D4;
      v20 = 1;
      v18 = 2;
      v17 = (char **)&off_2E40C4;
    }
    else
    {
      v6 = *a1;
      if ( ((__int64 (__fastcall *)(_DWORD))*(_DWORD *)(a1[1] + 12))(*a1) != 0x89A76C34A9F81AC8LL )
      {
LABEL_7:
        v7 = (int *)a1[3];
        v15 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v13 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v10 = v7;
        v11 = sub_25F108;
        v12 = v7 + 2;
        v19 = &v10;
        v20 = 3;
        v18 = 3;
        v17 = &off_2E40AC;
        v16[0] = 0;
        v14 = v7 + 3;
        return core::fmt::write(v2, v3, v16);
      }
      v9 = v6;
      v5 = 1;
      v11 = sub_25F0C0;
      v10 = &v9;
      v19 = &v10;
      v20 = 1;
      v18 = 2;
      v17 = (char **)&off_2E40C4;
    }
    v16[0] = 0;
    if ( !core::fmt::write(v2, v3, v16) )
      goto LABEL_7;
  }
  return v5;
}
