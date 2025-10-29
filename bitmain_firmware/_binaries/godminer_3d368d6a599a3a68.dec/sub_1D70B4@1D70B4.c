void __fastcall sub_1D70B4(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r0
  void **v10; // r5
  void *v11; // r1
  int v12; // [sp+0h] [bp-28h] BYREF
  void *ptr; // [sp+4h] [bp-24h]
  int v14; // [sp+8h] [bp-20h]
  _DWORD v15[6]; // [sp+10h] [bp-18h] BYREF

  LOBYTE(v12) = 4;
  v14 = a2;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a3[3];
  v7 = a3[4];
  v8 = a3[5];
  v15[0] = *a3;
  v15[1] = v4;
  v15[2] = v5;
  v15[3] = v6;
  v15[4] = v7;
  v15[5] = v8;
  if ( core::fmt::write(&v12, &off_2DEC88, v15) )
  {
    if ( (unsigned __int8)v12 == 4 )
    {
      *a1 = 2;
      a1[1] = &off_2DEC4C;
    }
    else
    {
      v11 = ptr;
      *a1 = v12;
      a1[1] = v11;
    }
  }
  else
  {
    v9 = (unsigned __int8)v12;
    *(_BYTE *)a1 = 4;
    if ( v9 == 3 )
    {
      v10 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v10[1] + 1) )
        _rust_dealloc(*v10);
      _rust_dealloc(ptr);
    }
  }
}
