int __fastcall sub_22C000(int a1)
{
  int v2; // r5
  int result; // r0
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  result = sub_22D6CC(a1, 0);
  if ( result )
    core::result::unwrap_failed((int)aFmtErrorSShoul, 61, (int)v4, (int)&off_2E49A4, (int)&off_2E4C54);
  *(_DWORD *)(a1 + 16) = v2;
  return result;
}
