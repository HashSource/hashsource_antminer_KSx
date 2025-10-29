void __fastcall sub_1EAB2C(int a1)
{
  int v1; // r4
  int v2; // [sp+0h] [bp-30h] BYREF
  int v3; // [sp+4h] [bp-2Ch]
  int v4[2]; // [sp+8h] [bp-28h] BYREF
  char **v5; // [sp+10h] [bp-20h]
  int v6; // [sp+14h] [bp-1Ch]
  int **v7; // [sp+18h] [bp-18h]
  int v8; // [sp+1Ch] [bp-14h]
  int *v9; // [sp+20h] [bp-10h] BYREF
  int (__fastcall *v10)(unsigned int *, int); // [sp+24h] [bp-Ch]
  int v11; // [sp+28h] [bp-8h] BYREF
  _BYTE v12[4]; // [sp+2Ch] [bp-4h] BYREF

  if ( _rust_alloc_error_handler_should_panic )
  {
    v6 = 2;
    v8 = 1;
    v7 = &v9;
    v4[0] = 0;
    v2 = a1;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    v9 = &v2;
    v5 = &off_2EA27C;
    core::panicking::panic_fmt((int)v4, (int)&off_2EA28C);
  }
  v6 = 2;
  v5 = &off_2EA29C;
  v8 = 1;
  v7 = &v9;
  v4[0] = 0;
  v10 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
  v9 = &v11;
  v11 = a1;
  sub_1DA540(&v2, (int)v12, v4);
  if ( (unsigned __int8)v2 == 3 )
  {
    v1 = v3;
    (**(void (__fastcall ***)(_DWORD))(v3 + 4))(*(_DWORD *)v3);
    if ( *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) )
      _rust_dealloc(*(void **)v1);
    _rust_dealloc((void *)v1);
  }
}
