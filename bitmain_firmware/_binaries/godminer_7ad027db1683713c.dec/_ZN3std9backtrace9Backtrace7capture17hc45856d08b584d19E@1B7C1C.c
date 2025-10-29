int __fastcall std::backtrace::Backtrace::capture(_DWORD *a1)
{
  void *v2; // r0
  _BOOL4 v3; // r6
  int v4; // r1
  int v5; // r1
  void *v6; // r0
  int v7; // r0
  int v9; // [sp+0h] [bp-20h] BYREF
  int v10; // [sp+4h] [bp-1Ch]
  void *v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h] BYREF
  int v14; // [sp+14h] [bp-Ch]
  void *ptr; // [sp+18h] [bp-8h]
  int v16; // [sp+1Ch] [bp-4h]

  if ( dword_2E95C4 == 1 )
    goto LABEL_21;
  if ( dword_2E95C4 )
    return sub_1B7DA8((int)a1, (int)std::backtrace::Backtrace::capture);
  std::env::_var(&v9, aRustLibBacktra, 0x12u);
  if ( !v9 )
  {
    v3 = 1;
    v5 = v10;
    v6 = v11;
    if ( v12 == 1 )
      v3 = *(unsigned __int8 *)v11 != 48;
    goto LABEL_15;
  }
  std::env::_var(&v13, aRustBacktrace, 0xEu);
  if ( !v13 )
  {
    v3 = 1;
    v4 = v14;
    v2 = ptr;
    if ( v16 == 1 )
      v3 = *(unsigned __int8 *)ptr != 48;
    goto LABEL_11;
  }
  v2 = ptr;
  v3 = 0;
  if ( ptr )
  {
    v4 = v14;
LABEL_11:
    if ( v4 )
      _rust_dealloc(v2);
  }
  v6 = v11;
  if ( !v11 )
    goto LABEL_17;
  v5 = v10;
LABEL_15:
  if ( v5 )
    _rust_dealloc(v6);
LABEL_17:
  v7 = 1;
  if ( v3 )
    v7 = 2;
  dword_2E95C4 = v7;
  if ( v3 )
    return sub_1B7DA8((int)a1, (int)std::backtrace::Backtrace::capture);
LABEL_21:
  *a1 = 1;
  return 1;
}
