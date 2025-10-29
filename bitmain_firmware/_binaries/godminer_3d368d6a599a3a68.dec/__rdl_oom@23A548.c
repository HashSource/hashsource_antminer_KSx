void __fastcall __noreturn _rdl_oom(int a1)
{
  int v1; // [sp+4h] [bp-24h] BYREF
  _DWORD v2[2]; // [sp+8h] [bp-20h] BYREF
  _UNKNOWN **v3; // [sp+10h] [bp-18h]
  int v4; // [sp+14h] [bp-14h]
  int **v5; // [sp+18h] [bp-10h]
  int v6; // [sp+1Ch] [bp-Ch]
  int *v7; // [sp+20h] [bp-8h] BYREF
  int (__fastcall *v8)(_DWORD, _DWORD); // [sp+24h] [bp-4h]

  v1 = a1;
  if ( !_rust_alloc_error_handler_should_panic )
  {
    v4 = 2;
    v6 = 1;
    v5 = &v7;
    v2[0] = 0;
    v3 = &off_2E3774;
    v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v7 = &v1;
    core::panicking::panic_nounwind_fmt((int)v2, (int)&off_2E3794);
  }
  v4 = 2;
  v6 = 1;
  v5 = &v7;
  v2[0] = 0;
  v3 = &off_2E3774;
  v8 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v7 = &v1;
  core::panicking::panic_fmt((int)v2, (int)&off_2E3784);
}
