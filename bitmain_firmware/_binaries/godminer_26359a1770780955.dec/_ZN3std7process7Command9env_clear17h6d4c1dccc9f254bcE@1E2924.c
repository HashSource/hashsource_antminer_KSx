int __fastcall std::process::Command::env_clear(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v6[3]; // [sp+4h] [bp-Ch] BYREF

  *(_BYTE *)(a1 + 12) = 1;
  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 4) = 0;
  v6[0] = v2;
  v6[1] = v3;
  v6[2] = v4;
  *(_DWORD *)(a1 + 8) = 0;
  sub_1ADC88(v6);
  return a1;
}
