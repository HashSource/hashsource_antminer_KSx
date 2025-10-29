void __fastcall __noreturn sub_1EBDEC(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r1
  bool v5; // zf
  int v6; // r6
  int v7; // r0
  int v8; // r4
  int v9; // r5
  int can_unwind; // r0
  int v11; // r1
  const char *v12; // r0
  int v13; // r1
  int v14; // r5
  int v15; // r6
  int v16; // r4
  int v17; // r0
  const char *v18; // [sp+8h] [bp-10h] BYREF
  int v19; // [sp+Ch] [bp-Ch]
  _DWORD *v20; // [sp+14h] [bp-4h]

  v2 = (_DWORD *)*a1;
  v3 = v2[3];
  v4 = v2[5];
  if ( v3 == 1 )
  {
    if ( v4 )
      goto LABEL_5;
    v11 = v2[2];
    v12 = *(const char **)v11;
    v13 = *(_DWORD *)(v11 + 4);
  }
  else
  {
    v5 = v3 == 0;
    if ( !v3 )
      v5 = v4 == 0;
    if ( !v5 )
    {
LABEL_5:
      v6 = a1[1];
      v19 = 0;
      v20 = v2;
      v7 = core::panic::panic_info::PanicInfo::message(v6);
      v8 = a1[2];
      v9 = v7;
      can_unwind = core::panic::panic_info::PanicInfo::can_unwind(v6);
      std::panicking::rust_panic_with_hook((int)&v18, (int)&off_2EA3C4, v9, v8, can_unwind);
    }
    v13 = 0;
    v12 = aRustc9eb3afe9e;
  }
  v14 = a1[1];
  v18 = v12;
  v19 = v13;
  v15 = core::panic::panic_info::PanicInfo::message(v14);
  v16 = a1[2];
  v17 = core::panic::panic_info::PanicInfo::can_unwind(v14);
  std::panicking::rust_panic_with_hook((int)&v18, (int)&off_2EA3D8, v15, v16, v17);
}
