char **__fastcall <std::io::stdio::StdoutRaw as std::io::Write>::write_fmt(int a1, int a2, int *a3)
{
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r7
  int v9; // r4
  char **result; // r0
  bool v11; // zf
  void **v12; // r6
  int v13; // [sp+0h] [bp-28h] BYREF
  void *ptr; // [sp+4h] [bp-24h]
  int v15; // [sp+8h] [bp-20h]
  int v16[6]; // [sp+10h] [bp-18h] BYREF

  LOBYTE(v13) = 4;
  v15 = a2;
  v4 = a3[1];
  v5 = a3[2];
  v6 = a3[3];
  v7 = a3[4];
  v8 = a3[5];
  v16[0] = *a3;
  v16[1] = v4;
  v16[2] = v5;
  v16[3] = v6;
  v16[4] = v7;
  v16[5] = v8;
  if ( !core::fmt::write((int)&v13, (int)&off_2E9C34, v16) )
  {
    v9 = 4;
    if ( (unsigned __int8)v13 == 3 )
    {
      v12 = (void **)ptr;
      (**((void (__fastcall ***)(_DWORD))ptr + 1))(*(_DWORD *)ptr);
      if ( *((_DWORD *)v12[1] + 1) )
        _rust_dealloc(*v12);
      v9 = 4;
      _rust_dealloc(ptr);
    }
    goto LABEL_12;
  }
  v9 = 2;
  if ( (unsigned __int8)v13 == 4 )
  {
LABEL_12:
    result = &off_2E9C4C;
    goto LABEL_13;
  }
  v9 = v13;
  result = (char **)ptr;
  v11 = (unsigned __int8)v13 == 0;
  if ( !(_BYTE)v13 )
    v11 = ptr == (void *)9;
  if ( v11 )
  {
    *(_BYTE *)a1 = 4;
    return (char **)4;
  }
LABEL_13:
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
