int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  int v2; // r2
  char v3; // r3

  if ( !byte_2E964C )
  {
    byte_2E9650 = 0;
    byte_2E9651 = 0;
    byte_2E9652 = 0;
    byte_2E9653 = 0;
    byte_2E9654 = 0;
    byte_2E9655 = 0;
    byte_2E9657 = 0;
    byte_2E9658 = 0;
    byte_2E964C = 1;
    byte_2E9656 = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2E9654;
  v2 = *(_DWORD *)&byte_2E9658;
  v3 = byte_2E965C;
  *(_DWORD *)result = *(_DWORD *)&byte_2E9650;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 12) = v3;
  *(_DWORD *)(result + 8) = v2;
  return result;
}
