int __fastcall get_sale_hashrate_eth(int a1, _QWORD *a2, int *a3)
{
  __int64 v4; // r4
  int result; // r0
  int v7; // r3
  bool v8; // zf
  __int64 v9; // [sp+0h] [bp-Ch] BYREF

  HIDWORD(v4) = *(_DWORD *)(a1 + 132);
  v9 = 0;
  LODWORD(v4) = a1;
  ((void (__fastcall *)(int, __int64 *))HIDWORD(v4))(a1, &v9);
  result = strcmp((const char *)(v4 + 280), "E9 Pro");
  v8 = result == 0;
  if ( result )
  {
    result = 25;
  }
  else
  {
    v4 = v9;
    v7 = 50;
  }
  if ( v8 )
  {
    *a2 = v4;
    *a3 = v7;
  }
  return result;
}
