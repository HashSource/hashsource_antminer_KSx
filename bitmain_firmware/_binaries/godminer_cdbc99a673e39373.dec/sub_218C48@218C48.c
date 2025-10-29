int __fastcall sub_218C48(int a1)
{
  int v2; // r5
  int result; // r0
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  result = sub_21A314(a1, 0);
  if ( result )
    core::result::unwrap_failed((int)aFmtErrorSShoul, 61, (int)v4, (int)&off_2CE9A4, (int)&off_2CEC54);
  *(_DWORD *)(a1 + 16) = v2;
  return result;
}
