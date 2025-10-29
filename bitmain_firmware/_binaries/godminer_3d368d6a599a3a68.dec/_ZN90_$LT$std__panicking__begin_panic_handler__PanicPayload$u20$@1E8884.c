_DWORD *__fastcall <std::panicking::begin_panic_handler::PanicPayload as core::panic::BoxMeUp>::get(_DWORD *a1)
{
  _DWORD *v2; // r12
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  int v7; // lr
  int v8; // r1
  int v9; // r2
  int v11; // [sp+0h] [bp-28h] BYREF
  int v12; // [sp+4h] [bp-24h]
  int v13; // [sp+8h] [bp-20h]
  int *v14; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v15[6]; // [sp+10h] [bp-18h] BYREF

  if ( !a1[1] )
  {
    v2 = (_DWORD *)a1[3];
    v13 = 0;
    v11 = 0;
    v12 = 1;
    v14 = &v11;
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    v6 = v2[4];
    v7 = v2[5];
    v15[0] = *v2;
    v15[1] = v3;
    v15[2] = v4;
    v15[3] = v5;
    v15[4] = v6;
    v15[5] = v7;
    core::fmt::write(&v14, &off_2DE080, v15);
    v8 = v12;
    v9 = v13;
    *a1 = v11;
    a1[1] = v8;
    a1[2] = v9;
  }
  return a1;
}
