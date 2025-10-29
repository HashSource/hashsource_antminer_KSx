int __fastcall get_miner_working_status(int result)
{
  int v1; // r1
  int v2; // r2
  char v3; // r3

  if ( !byte_2E9644 )
  {
    byte_2E9648 = 0;
    byte_2E9649 = 0;
    byte_2E964A = 0;
    byte_2E964B = 0;
    byte_2E964C = 0;
    byte_2E964D = 0;
    byte_2E964F = 0;
    byte_2E9650 = 0;
    byte_2E9644 = 1;
    byte_2E964E = pools_active == 0;
  }
  v1 = *(_DWORD *)&byte_2E964C;
  v2 = *(_DWORD *)&byte_2E9650;
  v3 = byte_2E9654;
  *(_DWORD *)result = *(_DWORD *)&byte_2E9648;
  *(_DWORD *)(result + 4) = v1;
  *(_BYTE *)(result + 12) = v3;
  *(_DWORD *)(result + 8) = v2;
  return result;
}
