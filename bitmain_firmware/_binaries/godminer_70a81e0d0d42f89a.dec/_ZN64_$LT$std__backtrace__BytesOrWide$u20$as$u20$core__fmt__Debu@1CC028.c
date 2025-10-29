int __fastcall <std::backtrace::BytesOrWide as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  bool v3; // zf
  int v4; // r1
  int v5; // r0
  int *v6; // r3
  int v7; // r4
  void **v8; // r5
  void *v9; // r0
  _DWORD v11[3]; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+10h] [bp-10h] BYREF
  int v13; // [sp+14h] [bp-Ch] BYREF
  void *ptr; // [sp+18h] [bp-8h]

  v3 = *a1 == 0;
  v4 = a1[2];
  v11[2] = a1[3];
  v5 = !v3;
  v11[1] = v4;
  v11[0] = v5;
  std::env::current_dir(&v12);
  v6 = 0;
  if ( !v12 )
    v6 = &v13;
  v7 = sub_1E781C(a2, v11, 0, v6);
  if ( v12 )
  {
    if ( (unsigned __int8)v13 == 3 )
    {
      v8 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v8[1] + 1) )
        _rust_dealloc(*v8);
      v9 = ptr;
      goto LABEL_13;
    }
  }
  else if ( v13 )
  {
    v9 = ptr;
LABEL_13:
    _rust_dealloc(v9);
  }
  return v7;
}
