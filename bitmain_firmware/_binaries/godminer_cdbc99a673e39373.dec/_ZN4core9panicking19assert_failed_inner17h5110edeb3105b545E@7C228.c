void __fastcall __noreturn core::panicking::assert_failed_inner(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  void *v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r7
  _DWORD v15[2]; // [sp+0h] [bp-68h] BYREF
  _DWORD v16[2]; // [sp+8h] [bp-60h] BYREF
  _DWORD v17[2]; // [sp+10h] [bp-58h] BYREF
  _DWORD v18[6]; // [sp+18h] [bp-50h] BYREF
  _DWORD *v19; // [sp+30h] [bp-38h] BYREF
  int (*v20)(); // [sp+34h] [bp-34h]
  _DWORD *v21; // [sp+38h] [bp-30h]
  int (*v22)(); // [sp+3Ch] [bp-2Ch]
  _DWORD *v23; // [sp+40h] [bp-28h]
  int (*v24)(); // [sp+44h] [bp-24h]
  _DWORD *v25; // [sp+48h] [bp-20h]
  int (*v26)(); // [sp+4Ch] [bp-1Ch]
  _DWORD v27[2]; // [sp+50h] [bp-18h] BYREF
  char **v28; // [sp+58h] [bp-10h]
  int v29; // [sp+5Ch] [bp-Ch]
  _DWORD *v30; // [sp+60h] [bp-8h]
  int v31; // [sp+64h] [bp-4h]

  v15[0] = a2;
  v15[1] = a3;
  v16[0] = a4;
  v16[1] = a5;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v17[0] = &unk_2A0687;
      v8 = 7;
LABEL_7:
      v9 = a6[2];
      v17[1] = v8;
      if ( !v9 )
      {
        v29 = 4;
        v31 = 3;
        v30 = &v19;
        v24 = sub_24B69C;
        v22 = sub_24B69C;
        v27[0] = 0;
        v21 = v15;
        v23 = v16;
        v20 = sub_24DFB0;
        v19 = v17;
        v28 = &off_2D013C;
        core::panicking::panic_fmt((int)v27, a7);
      }
      v10 = a6[1];
      v11 = a6[2];
      v12 = a6[3];
      v13 = a6[4];
      v14 = a6[5];
      v18[0] = *a6;
      v18[1] = v10;
      v18[2] = v11;
      v18[3] = v12;
      v18[4] = v13;
      v18[5] = v14;
      v29 = 4;
      v31 = 4;
      v30 = &v19;
      v28 = &off_2D011C;
      v27[0] = 0;
      v26 = <core::fmt::Arguments as core::fmt::Display>::fmt;
      v23 = v16;
      v21 = v15;
      v25 = v18;
      v24 = sub_24B69C;
      v22 = sub_24B69C;
      v20 = sub_24DFB0;
      v19 = v17;
      core::panicking::panic_fmt((int)v27, a7);
    }
    v7 = &unk_2A068E;
  }
  else
  {
    v7 = &unk_2A0690;
  }
  v17[0] = v7;
  v8 = 2;
  goto LABEL_7;
}
