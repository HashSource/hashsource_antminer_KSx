int __fastcall sub_81BC4(int a1, _DWORD *a2)
{
  int result; // r0
  _BYTE v5[20]; // [sp+0h] [bp-14h] BYREF

  result = get_miner_working_status(v5);
  if ( a1 )
  {
    if ( a2 )
      return sub_81A1C(a1, a2, -v5[5]);
  }
  return result;
}
