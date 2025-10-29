int __fastcall sub_1F018C(int a1)
{
  int v2; // r5
  int result; // r0
  int *v4; // r0
  int v5; // [sp+8h] [bp-28h] BYREF
  int v6; // [sp+Ch] [bp-24h]
  int v7; // [sp+14h] [bp-1Ch] BYREF
  _DWORD v8[2]; // [sp+18h] [bp-18h] BYREF
  int v9; // [sp+20h] [bp-10h]

  v6 = 0;
  v5 = 0;
  if ( pipe2(&v5, 0x80000) == -1 )
  {
    v4 = _errno_location();
    *(_BYTE *)(a1 + 7) = 0;
    *(_WORD *)(a1 + 5) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    result = *v4;
    *(_DWORD *)a1 = 1;
    *(_DWORD *)(a1 + 8) = result;
  }
  else
  {
    v2 = v5;
    v7 = v5;
    if ( v5 == -1 )
    {
      v9 = 0;
      sub_79864(1, (int)&v7, (int)&unk_2A53FC, v8, (int)&off_2DEEAC);
    }
    result = v6;
    v7 = v6;
    if ( v6 == -1 )
    {
      v9 = 0;
      sub_79864(1, (int)&v7, (int)&unk_2A53FC, v8, (int)&off_2DEEAC);
    }
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = v2;
    *(_DWORD *)(a1 + 8) = result;
  }
  return result;
}
